#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
using namespace std;

int digitcount(int n){
    int c=0;
    while(n>0){
        n/=10;
        c++;
    }
    return c;
}

int f(int n){
    if(digitcount(n)==1){
        return n;
    }
        else{
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        f(sum);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0){
        cout<<f(n)<<endl;
        scanf("%d",&n);
    }
    return 0;
}

