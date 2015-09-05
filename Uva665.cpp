#include <iostream>
#include <math.h>
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

int main()
{
    int M;
    scanf("%d",&M);
    while(M--){
        int N,K;
        cout<<endl;
        scanf("%d %d",&N,&K);
        bool *arr=new bool[N];
        for(int i=0;i<N;i++)arr[i]=false;
        int numberOfCoins;
        vector<int> Coins;
        int coin;
        char result;
        bool twoCoint=false;
        for(int i=0;i<K;i++){
            scanf("%d",&numberOfCoins);

            for(int j=0;j<numberOfCoins*2;j++){
                scanf("%d",&coin);
                Coins.push_back(coin);
            }
            cin>>result;
            if(numberOfCoins==1){
                twoCoint=true;
                break;
            }

            if(result=='='){
                for(int k=0;k<Coins.size();k++){
                    arr[Coins[k]-1]=true;
                }
            }
            else if(result=='<'){
                for(int k=0;k<Coins.size()/2;k++){
                    arr[Coins[k]-1]=true;
                }
            }
            else if(result=='>'){
                for(int k=Coins.size()/2;k<Coins.size();k++){
                    arr[Coins[k]-1]=true;
                }
            }
            Coins.clear();

        }

        if(twoCoint){
            cout<<0<<endl;
        }
        else{
            int c=0;
            int index;
            for(int i=0;i<N;i++){
                if(arr[i]==false){
                    c++;
                    index=i;
                }
            }
            if(c==1){
                cout<<index+1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }

        delete [] arr;

    }
    return 0;
}
