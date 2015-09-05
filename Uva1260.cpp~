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

        int num;
        scanf("%d",&num);
        vector<int> coll;
        for(int i=0;i<num;i++){
            int c;
            scanf("%d",&c);
            coll.push_back(c);
        }
        vector<int> resVec(coll.size(),0);
        for(int i=1;i<coll.size();i++){
            for(int j=0;j<i;j++){
                if(coll[i]>=coll[j])resVec[i]++;
            }
        }
        int sum=0;
        for(int i : resVec)sum+=i;
        cout<<sum<<endl;
    }
    return 0;
}

