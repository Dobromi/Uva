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
    int N;
    vector<int> studentsSpeed;
    int cas=0;
    while(T--){
        scanf("%d",&N);
        int stud;
        while(N--){
            scanf("%d",&stud);
            studentsSpeed.push_back(stud);
        }
        cas++;
        int max=studentsSpeed[0];
        for(int i=1;i<studentsSpeed.size();i++){
            if(studentsSpeed[i]>max)max=studentsSpeed[i];
        }
        cout<<"Case "<<cas<<": "<<max<<endl;
        studentsSpeed.clear();
    }
    return 0;
}
