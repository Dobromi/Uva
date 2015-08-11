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
    int T;
    scanf("%d",&T);
    string inp;
    int money=0;
    while(T--){
        cin>>inp;
        if(inp=="donate"){
            int amount;
            scanf("%d",&amount);
            money+=amount;
        }
        else if(inp=="report"){
            cout<<money<<endl;
        }
    }
    return 0;
}

