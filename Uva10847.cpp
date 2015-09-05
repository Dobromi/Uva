#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;



int main()
{
    int n;
    int cas=1;
    while(true){
        scanf("%d",&n);
        if(n==0)break;

        int numb;
        vector<int> coll;
        for(int i=0;i<n;i++){
            cin>>numb;
            coll.push_back(numb);
        }
        int queries;
        scanf("%d",&queries);
        vector<int> queriesVec;
        for(int i=0;i<queries;i++){
            int q;
            cin>>q;
            queriesVec.push_back(q);
        }


        cout<<"Case "<<cas++<<":"<<endl;
        for(int i=0;i<queriesVec.size();i++){
            int number=queriesVec[i];
            int diff=INFINITY;
            int gl=INFINITY;
            sort(coll.begin(),coll.end());
            for(int j=0;j<coll.size();j++){
                for(int k=0;k<coll.size();k++){
                    if(j!=k){
                        int sum=coll[j] + coll[k];
                        int op=abs(number- sum);
                        if(op<gl){
                            gl=op;
                            diff=sum;
                        }
                    }
                }
            }

            cout<<"Closest sum to "<<queriesVec[i]<<" is "<<diff<<"."<<endl;
        }
    }
    return 0;
}
