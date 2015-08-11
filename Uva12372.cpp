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
    int L,W,H;
    int cas=0;
    scanf("%d",&TC);
    while(TC--){
        scanf("%d %d %d",&L,&W,&H);
        cas++;
        if(L<=20 && W<=20 && H<=20){
            cout<<"Case "<<cas<<": good"<<endl;
        }
        else{
            cout<<"Case "<<cas<<": bad"<<endl;
        }
    }
    return 0;
}

