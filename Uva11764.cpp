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
    int walls;
    int height;
    vector<int> heights;
    int cas=0;
    while(T--){
        scanf("%d",&walls);
        for(int i=0;i<walls;i++){
            scanf("%d",&height);
            heights.push_back(height);
        }
        cas++;
        int highjums=0;int lowjumps=0;
        for(int i=0;i<heights.size()-1;i++){
            int current=heights[i];
            int next=heights[i+1];
            if(current<next)highjums++;
            else if(current>next)lowjumps++;
        }

        cout<<"Case "<<cas<<": "<<highjums<<" "<<lowjumps<<endl;

        heights.clear();
    }
    return 0;
}
