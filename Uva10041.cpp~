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
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int rel;
        scanf("%d",&rel);
        vector<int> coll;
        for(int i=0;i<rel;i++){
            int r;
            cin>>r;
            coll.push_back(r);
        }
        int mindist=INFINITY;
        for(int i=0;i<coll.size();i++){
            int currDist=0;
            for(int j=0;j<coll.size();j++){
                if(i!=j){
                    currDist+=abs(coll[i]-coll[j]);
                }
            }
            if(currDist<mindist)mindist=currDist;
        }

        cout<<mindist<<endl;
    }
    return 0;
}
