#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
using namespace std;

bool isdesc(vector<int>& coll){
    for(int i=0;i<coll.size()-1;i++){
        if(coll[i+1]>coll[i])return false;
    }
    return true;
}

bool isasc(vector<int>& coll){
    for(int i=coll.size()-1;i>0;i--){
        if(coll[i-1]>coll[i])return false;
    }
    return true;
}

int main()
{

    int N;
    scanf("%d",&N);
    cout<<"Lumberjacks:"<<endl;
    while(N--){
        vector<int> coll;
        int inp;
        for(int i=0;i<10;i++){
            scanf("%d",&inp);
            coll.push_back(inp);
        }
        if(isdesc(coll) || isasc(coll)){
            cout<<"Ordered"<<endl;
        }
        else{
            cout<<"Unordered"<<endl;
        }
    }
    return 0;
}

