#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
using namespace std;

typedef pair<int,pair<int,int>> pdr;

int main()
{

    int numberOfBanks,numberOfDebentures;
    scanf("%d %d",&numberOfBanks,&numberOfDebentures);
    while(true){
        if(numberOfBanks==0 && numberOfDebentures==0)break;
        vector<int> reserves;
        int res;
        for(int i=0;i<numberOfBanks;i++){
            scanf("%d",&res);
            reserves.push_back(res);
        }
        vector<pdr> kolekciq;
        int dlujnik,kreditor,razmerDulg;
        for(int i=0;i<numberOfDebentures;i++){
            scanf("%d %d %d",&dlujnik,&kreditor,&razmerDulg);
            kolekciq.push_back(make_pair(razmerDulg,make_pair(dlujnik,kreditor)));
        }

        for(int i=0;i<kolekciq.size();i++){

            int dulg=kolekciq[i].first;
            pair<int,int> cust=kolekciq[i].second;
            int dlujn=cust.first;int kred=cust.second;

            reserves[dlujn-1]-=dulg;
            reserves[kred-1]+=dulg;

        }

        bool mark=true;
        for(int i=0;i<reserves.size();i++){
            if(reserves[i]<0){
                mark=false;
            }
        }

        if(mark){
            cout<<"S"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }

        scanf("%d %d",&numberOfBanks,&numberOfDebentures);
    }
    return 0;
}
