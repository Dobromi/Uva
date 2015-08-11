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

    int NumberOfPersons,Budget,Hotels,Weeks;
    while(scanf("%d %d %d %d",&NumberOfPersons,&Budget,&Hotels,&Weeks)!=EOF){

        vector<int> prices;
        vector<bool> markArr;
        markArr.push_back(false);
        int c=0;
        while(Hotels--){
            int price;
            vector<int> NumbofAvalBeds;
            scanf("%d",&price);
            int bed;
            for(int i=0;i<Weeks;i++){
                scanf("%d",&bed);
                NumbofAvalBeds.push_back(bed);
            }

            for(int i=0;i<NumbofAvalBeds.size();i++){
                if(NumbofAvalBeds[i]>=NumberOfPersons){
                    markArr[c]=true;
                    break;
                }
            }

            if(markArr[c]){
                int price1=NumberOfPersons * price;
                if(price1<=Budget){
                    prices.push_back(price1);
                }
            }

            c++;
        }
        if(prices.size()>0){
            sort(prices.begin(),prices.end());
            cout<<prices[0]<<endl;
        }
        else{
            cout<<"stay home"<<endl;
        }
    }

    return 0;
}

