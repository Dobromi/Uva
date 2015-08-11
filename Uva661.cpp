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

    int numberOfDevices;
    int numberOfOperations;
    int capacityOfFuse;
    int seq=0;
    while(true){
        scanf("%d %d %d",&numberOfDevices,&numberOfOperations,&capacityOfFuse);
        if(numberOfDevices==0 && numberOfOperations==0 && capacityOfFuse==0)break;

        seq++;
        vector<int> IndexInAmpers;
        int consAmper;
        int copyNumber=numberOfDevices;
        while(copyNumber--){
            scanf("%d",&consAmper);
            IndexInAmpers.push_back(consAmper);
        }
        int num;
        int numCopy=numberOfOperations;
        vector<int> sequence;
        while(numCopy--){
            scanf("%d",&num);
            sequence.push_back(num);
        }
         bool used[numberOfDevices];
        for(int i=0;i<numberOfDevices;i++)used[i]=false;

        int max=0;
        vector<int> indexes;
        for(int i=0;i<sequence.size();i++){
            int num=sequence[i]-1;
            if(!used[num]){
                used[num]=true;
                indexes.push_back(num);
            }
            else{
                used[num]=false;
                indexes.erase(remove(indexes.begin(),indexes.end(),num),indexes.end());
            }
            int curr=0;
            for(int j=0;j<indexes.size();j++){
                curr+=IndexInAmpers[indexes[j]];
            }
            if(curr>max){
                max=curr;
            }

        }
        cout<<"Sequence "<<seq<<endl;
        if(max>capacityOfFuse){
            cout<<"Fuse was blown."<<endl;
        }
        else{
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<max<<" amperes."<<endl;
        }
        cout<<endl;

    }
    return 0;
}
