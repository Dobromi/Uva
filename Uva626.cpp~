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
using namespace std;

typedef vector<int> vi;

bool identical(vi result,vector<vi> Result){
    vi temp=result;
    for(int i=0;i<Result.size();i++){
        sort(temp.begin(),temp.end());
        vi curr=Result[i];
        vi localTemp=Result[i];
        sort(localTemp.begin(),localTemp.end());
        if(temp==localTemp){
            reverse(result.begin(),result.end());
            if(result!=curr){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int N;
    while(cin>>N){
        vector<vi> Coll;
        vi vec;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                int n;
                cin>>n;
                vec.push_back(n);
            }
            Coll.push_back(vec);
            vec.clear();
        }
        int total=0;
        vector<vi> result;
        for(int i=0;i<Coll.size();i++){
            for(int j=0;j<Coll[i].size();j++){
                if(Coll[i][j]==1){
                    for(int k=0;k<N;k++){
                        if(Coll[j][k]==1 && Coll[k][i]==1){
                            vi temp;
                            temp.push_back(i+1);temp.push_back(j+1);temp.push_back(k+1);
                            if(identical(temp,result)==false){
                                total++;
                                result.push_back(temp);
                            }
                        }
                    }
                }
            }
        }
        for(int i=0;i<result.size();i++){
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"Total : "<<total<<endl;
    }
    return 0;
}
