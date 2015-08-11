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
    int num;
    scanf("%d",&num);
    string word;
    while(num--){
        cin>>word;
        if(word.size()>3){
            cout<<"3"<<endl;
        }
        else{
            if(word[0]=='o' && word[1]=='n' && word[2]=='e')cout<<"1"<<endl;
            else if(word[0]=='o' && word[1]=='n')cout<<"1"<<endl;
            else if(word[0]=='o' && word[2]=='e')cout<<"1"<<endl;
            else if(word[1]=='n' && word[2]=='e')cout<<"1"<<endl;
            else if(word[0]=='t' && word[1]=='w' && word[2]=='o')cout<<"2"<<endl;
            else if(word[0]=='t' && word[1]=='w')cout<<"2"<<endl;
            else if(word[0]=='t' && word[2]=='o')cout<<"2"<<endl;
            else if(word[1]=='w' && word[2]=='o')cout<<"2"<<endl;
        }
    }
    return 0;
}

