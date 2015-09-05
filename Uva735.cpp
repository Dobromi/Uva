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

typedef vector<int> vi;

int main()
{
    bool used[65][65][65];
    memset(used, false, sizeof(used));
    while(true){
        int Target;
        scanf("%d",&Target);
        if(Target<=0){
            cout<<"END OF OUTPUT";
        }
        set<int> Regions;
        vector<int> Values;
        for(int i=0;i<=20;i++){
            Regions.insert(i);
            Regions.insert(i*2);Regions.insert(i*3);
        }
        Regions.insert(50);
        for(set<int>::iterator it=Regions.begin();it!=Regions.end();it++){
            Values.push_back(*it);
        }

        int perm=0;
        int comb=0;
        for(int i=0;i<Values.size();i++){
            if(Values[i]>Target)continue;
            for(int j=0;j<Values.size();j++){
                if(Values[i] + Values[j]>Target)continue;
                for(int k=0;k<Values.size();k++){
                    if(Values[i] + Values[j] + Values[k]>Target)continue;
                    if(Values[i] + Values[j] + Values[k]==Target){
                        perm++;
                        if(!used[Values[i]][Values[j]][Values[k]]){
                            comb++;
                            used[Values[i]][Values[j]][Values[k]]=used[Values[i]][Values[k]][Values[j]]=true;
                            used[Values[j]][Values[i]][Values[k]]=used[Values[j]][Values[k]][Values[i]]=true;
                            used[Values[k]][Values[i]][Values[j]]=used[Values[k]][Values[j]][Values[i]]=true;
                        }
                    }
                }
            }
        }

        if(comb>0 && perm>0){
            cout<<"NUMBER OF COMBINATIONS THAT SCORES "<<Target<<" IS "<<comb<<"."<<endl;
            cout<<"NUMBER OF PERMUTATIONS THAT SCORES "<<Target<<" IS "<<perm<<"."<<endl;
        }
        else{
            cout<<"THE SCORE OF "<<Target<<" CANNOT BE MADE WITH THREE DARTS."<<endl;
        }
        cout<<"**********************************************************************"<<endl;
    }

    return 0;
}
