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
    int t1,t2,t3;
    vector<int> sal;
    int cas=1;
    while(TC--){
        scanf("%d %d %d",&t1,&t2,&t3);
        sal.push_back(t1);sal.push_back(t2);sal.push_back(t3);
        sort(sal.begin(),sal.end());
        cout<<"Case "<<cas++<<" "<<sal[1]<<endl;

        sal.clear();
    }
    return 0;
}
