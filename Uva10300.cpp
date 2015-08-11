#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
using namespace std;



int main()
{

    int TC;
    scanf("%d",&TC);
    while(TC--){
        int f;
        scanf("%d",&f);
        int sizeofFarm,numberOfAnimls,EnvFriendl;
        int sum=0;
        while(f--){
            scanf("%d %d %d",&sizeofFarm,&numberOfAnimls,&EnvFriendl);
            int d=sizeofFarm * EnvFriendl;
            sum+=d;
        }
        cout<<sum<<endl;
    }
    return 0;
}

