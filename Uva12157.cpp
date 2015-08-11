#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <map>
using namespace std;

typedef pair<string,int> si;

int main()
{

    int T;
    scanf("%d",&T);
    int cas=0;
    while(T--){
        int N;
        scanf("%d",&N);
        vector<int> durations;
        int time;
        while(N--){
            scanf("%d",&time);
            durations.push_back(time);
        }
        cas++;
        vector<int> copyVector=durations;
        int mile=0;
        for(int i=0;i<durations.size();i++){
            int res=durations[i];
            while(res>=0){
                res-=30;
                mile+=10;
            }

        }

        int juice=0;
        for(int i=0;i<copyVector.size();i++){
            int res=copyVector[i];
            while(res>=0){
                res-=60;
                juice+=15;
            }

        }
        cout<<"Case "<<cas<<": ";
        if(mile<juice){
            cout<<"Mile "<<mile<<endl;
        }
        else if(mile>juice){
            cout<<"Juice "<<juice<<endl;
        }
        else{
            cout<<"Mile Juice "<<mile<<endl;
        }

    }
    return 0;
}
