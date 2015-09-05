#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <sstream>
#include <set>
#include <string.h>
using namespace std;



int main()
{
    int Tc;
    scanf("%d",&Tc);
    int cas=1;
    while(Tc--){
        int numberOfBalls;
        int numberOfTickets;
        scanf("%d %d",&numberOfBalls,&numberOfTickets);
        vector<int> balls;
        for(int i=0;i<numberOfBalls;i++){
            int n;
            cin>>n;balls.push_back(n);
        }
        vector<int> values;
        for(int i=0;i<4;i++){
            int n;
            cin>>n;values.push_back(n);
        }
        vector<int> sums;
        for(int i=0;i<numberOfTickets;i++){

            int nums[5][5];
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    int n;
                    cin>>n;nums[i][j]=n;
                }
            }
            int sum=0;
            vector<pair<int,int>> diagonals={{0,0},{0,4},{4,0},{4,4}};
            //Check Diagonals
            int counter=0;
            bool diagonal=true;
            for(int i=0;i<diagonals.size();i++){
                pair<int,int> val=diagonals[i];
                bool mark=false;
                for(int k=0;k<numberOfBalls;k++){
                    counter++;
                    if(nums[val.first][val.second]==balls[k]){
                        mark=true;
                        break;
                    }
                }
                if(!mark){
                    diagonal=false;break;
                }
            }
            if(counter<35 && diagonal)sum+=values[0];

            //Check mid
            vector<int> mids={nums[2][0],nums[2][1],nums[2][2],nums[2][3],nums[2][4]};
            bool mid=true;
            counter=0;
            for(int i=0;i<mids.size();i++){
                int val=mids[i];
                bool mark=false;
                for(int k=0;k<numberOfBalls;k++){
                    counter++;
                    if(val==balls[k]){
                        mark=true;
                        break;
                    }
                }
                if(!mark){
                    mid=false;break;
                }
            }
            if(counter<40 && mid)sum+=values[1];

            //Check diag
            counter=0;
            bool diag=true;int j;
            for(int i=0,j=4;i<5;i++,j--){
                bool mark1=false;bool mark2=false;
                for(int k=0;k<numberOfBalls;k++){
                    counter++;
                    int val1=nums[i][i];
                    int val2=nums[j][j];
                    if(val1==balls[k])mark1=true;
                    if(val2==balls[k])mark2=true;
                    if(mark1 && mark2)break;
                }
                if(!mark1 || !mark2){
                    diag=false;break;
                }
            }
            if(counter<45 && diag)sum+=values[2];
            //Check Whole
            bool whole=true;
            bool breakloop=false;
            for(int i=0;i<5;i++){
                if(breakloop)break;
                for(int j=0;j<5;j++){
                    bool mark=false;
                    for(int k=0;k<numberOfBalls;k++){
                        if(nums[i][j]==balls[k]){
                            mark=true;break;
                        }
                    }
                    if(!mark){
                        breakloop=true;
                        whole=false;
                        break;
                    }
                }
            }
            if(whole)sum+=values[3];
            sums.push_back(sum);
        }
        cout<<"Case "<<cas++<<":"<<endl;
        for(int i : sums)cout<<i<<endl;
        sums.clear();

    }
    return 0;
}

