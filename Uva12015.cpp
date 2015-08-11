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
        vector<si> coll;
        string str;
        int rel;
        for(int i=0;i<10;i++){
            cin>>str;
            cin>>rel;
            coll.push_back(make_pair(str,rel));
        }
        cas++;
        int maxIndex=coll[0].second;
        for(int i=1;i<coll.size();i++){
            if(coll[i].second>maxIndex)maxIndex=coll[i].second;
        }
        vector<string> res;
        for(int i=0;i<coll.size();i++){
            if(coll[i].second==maxIndex){
                res.push_back(coll[i].first);
            }
        }

        cout<<"Case #"<<cas<<":"<<endl;
        for(string r : res){
            cout<<r<<endl;
        }

    }
    return 0;
}

