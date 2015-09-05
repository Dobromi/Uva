#include <iostream>
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


    int T;
    scanf("%d",&T);
    int cas=0;
    while(T--){
        string line;
        cin>>line;
        cas++;
        int circularArray[100];
        for(int i=0;i<100;i++)circularArray[i]=0;
        int pointer=0;

        for(int i=0;i<line.size();i++){
            if(line[i]=='>'){
                if(pointer==99)pointer=0;
                else pointer++;
            }
            else if(line[i]=='<'){
                if(pointer==0)pointer=99;
                else pointer--;
            }
            else if(line[i]=='+'){
                if(circularArray[pointer]==255){
                    circularArray[pointer]=0;
                }
                else{circularArray[pointer]++;}
            }
            else if(line[i]=='-'){
                if(circularArray[pointer]==0){
                    circularArray[pointer]=255;
                }
                else{circularArray[pointer]--;}
            }
        }
        printf("Case %d:", cas);
        for (int i = 0; i < 100; ++i)
            printf(" %02X", circularArray[i]);
        printf("\n");


    }

    return 0;
}

