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
    int rows,cols;
    int field=1;
    while(true){
        scanf("%d %d",&rows,&cols);
        if(rows==0 && cols==0) break;
        vector<vector<char>> grid;
        char ch;
        for(int i=0;i<rows;i++){
            vector<char> temp;
            for(int j=0;j<cols;j++){
                cin>>ch;
                temp.push_back(ch);
            }
            grid.push_back(temp);
        }
        string arr[rows][cols];
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]!='*'){
                    int x=i;int y=j;
                    for(int k=-1;k<2;k++){
                        for(int c=-1;c<2;c++){
                            if((x+k)>=0 && (x+k)<rows && (y+c)>=0 && (y+c)<cols){
                                if(grid[x+k][y+c]=='*')count++;
                            }
                        }
                    }

                }
                else{
                    arr[i][j]="*";
                    continue;
                }
                string ch=to_string(count);
                arr[i][j]=ch;
                count=0;
            }
        }
        cout<<"Field #"<<field<<":"<<endl;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }
        field++;
        cout<<endl;
    }
    return 0;
}

