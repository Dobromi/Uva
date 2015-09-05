#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;

int Length;
vector<int> BarsLenght;
vector<int> ValVector;
bool flag=false;
void trySubsets(int n){
    if(n>=BarsLenght.size()){
        int sum=0;
        for(int i : ValVector){
            sum+=i;
        }
        if(sum==Length)flag=true;
        return;
    }

    ValVector.push_back(BarsLenght[n]);
    trySubsets(n+1);
    ValVector.pop_back();
    trySubsets(n+1);
}

int main()
{
    int Tc;
    scanf("%d",&Tc);
    while(Tc--){
        int LenghtOfBar;
        scanf("%d",&LenghtOfBar);

        int numberOfBars;
        scanf("%d",&numberOfBars);
        int num;
        for(int i=0;i<numberOfBars;i++){
            cin>>num;
            BarsLenght.push_back(num);
        }
        if(LenghtOfBar==0){
            cout<<"YES"<<endl;
            continue;
        }
        Length=LenghtOfBar;
        trySubsets(0);
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        flag=false;
        ValVector.clear();
        BarsLenght.clear();
    }
    return 0;
}

