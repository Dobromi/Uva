#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int Arr[100000];

pair<int,int> getTwoNumbers(int N){
    string temp1="";
    string temp2="";
    int c=N/2;
    int incr=c;
    for(int i=0;i<c;i++){
        temp1+=to_string(Arr[i]);
        temp2+=to_string(Arr[incr]);
        incr++;
    }
    int num1=atoi(temp1.c_str());
    int num2=atoi(temp2.c_str());
    return make_pair(num1,num2);
}

void calculate(int N){
    string res="";
    for(int i=0;i<N;i++){
        res+=to_string(Arr[i]);
    }
    int number=atoi(res.c_str());

    pair<int,int> nums=getTwoNumbers(N);
    if(pow(nums.first + nums.second,2)==number){
        cout<<res<<endl;
    }
}

void gen(int n,int N){
    if(n>=N){
        calculate(N);
        return;
    }
    for(int i=0;i<=9;i++){
        Arr[n]=i;
        gen(n+1,N);
    }
}

int main()
{
    int N;
    while(cin>>N){
        gen(0,N);
    }
    return 0;
}

