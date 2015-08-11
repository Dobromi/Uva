#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;

typedef pair<string,int> si;

int main()
{
    char s[1000015];
    int cas=0;
    while(scanf("%s",s)!=EOF){
        int n;
        scanf("%d",&n);
        cout<<"Case "<<cas<<":"<<endl;
        while(n--){
            int p1,p2;
            scanf("%d %d",&p1,&p2);
            if(p1>p2){
                int temp=p2;
                p2=p1;
                p1=temp;
            }

            if(p1==p2)cout<<"Yes"<<endl;
            bool flag=true;

            for(int i=p1;i<p2;i++){
                if(s[i]!=s[i+1]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}

