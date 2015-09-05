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
#include <list>
using namespace std;

typedef vector<int> vi;


int main()
{


    int tc;
    scanf("%d",&tc);
    while(tc--){

        int A,B,C;
        scanf("%d %d %d",&A,&B,&C);
        vector<int> vec={A,B,C};
        sort(vec.begin(),vec.end());
        int Max=vec[2];
        char arr[][3]={
            {'+','+','+'},{'+','-','+'},{'+','-','-'},{'-','-','-'},{'-','+','-'},{'-','-','+'}
        };
        char locarr[][3]={
            {'+','-'},{'-','+'},{'-','-'},{'+','+'}
        };
        bool sol=false;
        for(int x=0;x<Max;x++){

            for(int y=0;y<Max;y++){
                if(x==y)continue;
                bool arrflag[4]={false};
                for(int t=0;t<4;t++){
                        int nx;int ny;
                        if(locarr[t][0]=='+'){
                            nx=x;
                        }else nx= x * -1;
                        if(locarr[t][1]=='+'){
                            ny=y;
                        }else ny=y * -1;



                        int sum=nx + ny;
                        int prod=nx * ny;
                        int doubprod=pow(nx,2) + pow(ny,2);
                        if(sum>A || prod>B || doubprod>C)arrflag[t]=true;
                }
                bool locflag=true;
                for(int h=0;h<4;h++){
                    if(arrflag[h]==false){
                        locflag=false;break;
                    }
                }
                if(locflag)break;
                for(int z=0;z<Max;z++){
                    if(z==x || z==y)continue;
                    bool barr[6]={false};
                    for(int v=0;v<5;v++){

                        int nx;int ny;int nz;
                        if(arr[v][0]=='+'){
                            nx=x;
                        }else nx= x * -1;
                        if(arr[v][1]=='+'){
                            ny=y;
                        }else ny=y * -1;
                        if(arr[v][2]=='+'){
                            nz=z;
                        }else nz= z * -1;


                        int sum=nx + ny +nz;
                        int prod=nx * ny * nz;
                        int doubprod=pow(nx,2) + pow(ny,2) + pow(nz,2);
                        if(sum>A || prod>B || doubprod>C)barr[v]=true;
                        //if(sum>A || prod>B || doubprod>C)break;
                        if(sum==A && prod==B && doubprod==C){
                            if(nx<0 || ny<0 || nz<0){
                                vector<int> cust={nx,ny,nz};
                                sort(cust.begin(),cust.end());
                                cout<<cust[0]<<" "<<cust[1]<<" "<<cust[2]<<endl;
                                sol=true;
                                goto out;

                            }
                            else{
                                cout<<nx<<" "<<ny<<" "<<nz<<endl;
                                sol=true;
                                goto out;
                            }

                        }
                    }
                    bool flag=true;
                    for(int i=0;i<6;i++){
                        if(barr[i]==false){
                            flag=false;break;
                        }
                    }
                    if(flag)break;
                }
            }
        }
        out:
            if(!sol){
                cout<<"No solution."<<endl;
            }
    }
    return 0;
}

