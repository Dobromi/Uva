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
    int N;
    scanf("%d",&N);
    string digit;
    while(N--){
        cin>>digit;
        int size=digit.size();
        if(digit=="1" || digit=="4" || digit=="78"){
            cout<<"+"<<endl;
        }

        else if(size>2 &&digit[size-1]=='5' && digit[size-2]=='3'){
            cout<<"-"<<endl;
        }

        else if(digit[0]=='9' && digit[size-1]=='4' && size>2){
            cout<<"*"<<endl;
        }
        else if(digit[0]=='1' && digit[1]=='9' && digit[2]=='0' && size>3){
            cout<<"?"<<endl;
        }
    }
    return 0;
}
