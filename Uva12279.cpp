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
    int N;
    scanf("%d",&N);
    int cas=0;
    while(N!=0){
        int t;
        int sum=0;
        cas++;
        for(int i=0;i<N;i++){
            scanf("%d",&t);
            if(t>=1 && t<=99)
                sum++;
            else if(t==0)
                sum--;
        }
        cout<<"Case "<<cas<<": ";
        cout<<sum<<endl;
        scanf("%d",&N);
    }
    return 0;
}
