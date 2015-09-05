#include <iostream>
#include <math.h>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;


int main()
{
    while(true){
        int sizeMatr;
        scanf("%d",&sizeMatr);
        if(sizeMatr==0)break;
        int Matrix[sizeMatr][sizeMatr];
        int val;
        for(int i=0;i<sizeMatr;i++){
            for(int j=0;j<sizeMatr;j++){
                cin>>val;
                Matrix[i][j]=val;
            }
        }
        bool AllEvenRow=true;
        bool AllEvenCols=true;
        int RowIndex,colIndex;
        int ones=0;
        for(int i=0;i<sizeMatr;i++){
            for(int j=0;j<sizeMatr;j++){
                if(Matrix[i][j]==1){
                    ones++;
                }
            }
            if(ones%2!=0){
                RowIndex=i;
                AllEvenRow=false;
            }
            ones=0;
        }
        ones=0;
        for(int i=0;i<sizeMatr;i++){
            for(int j=0;j<sizeMatr;j++){
                if(Matrix[j][i]==1){
                    ones++;
                }
            }
            if(ones%2!=0){
                colIndex=i;
                AllEvenCols=false;
            }
            ones=0;
        }
        bool parity=false;
        if(AllEvenRow==false || AllEvenCols==false){
            Matrix[RowIndex][colIndex]=!Matrix[RowIndex][colIndex];
            int RowOnes=0;int colOnes=0;
            for(int i=0;i<sizeMatr;i++){
                for(int j=0;j<sizeMatr;j++){
                    if(Matrix[i][j]==1)RowOnes++;
                    if(Matrix[j][i]==1)colOnes++;
                }
                if(RowOnes%2!=0 || colOnes%2!=0){
                    parity=true;
                }
                RowOnes=colOnes=0;
            }

            if(parity==false){
                cout<<"Change bit ("<<RowIndex+1<<","<<colIndex+1<<")"<<endl;
            }
            else{
                cout<<"Corrupt"<<endl;
            }
        }
        else{
            cout<<"OK"<<endl;
        }

    }
    return 0;
}
