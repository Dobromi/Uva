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

bool inWord(string word,char ch){
    for(int i=0;i<word.size();i++){
        if(word[i]==ch)return true;
    }
    return false;
}

bool CheckUsed(vector<char> &vec,char ch){
    for(int i=0;i<vec.size();i++){
        if(vec[i]==ch)return true;
    }
    return false;
}

int main()
{
    int round;
    while(true){
        cin>>round;
        if(round==-1)break;
        string solution,guesses;
        cin>>solution;
        cin>>guesses;
        const int siz=solution.size();
        bool *masiv=new bool[siz];
        for(int i=0;i<siz;i++)masiv[i]=false;
        int strokes=0;
        vector<char> Used;
        for(int i=0;i<guesses.size();i++){
            if(CheckUsed(Used,guesses[i]))continue;
            if(inWord(solution,guesses[i])){
                for(int j=0;j<solution.size();j++){
                    if(solution[j]==guesses[i]){
                        masiv[j]=true;
                    }
                }
            }
            else{
                strokes++;
            }
            Used.push_back(guesses[i]);
        }
        bool win=true;
        for(int i=0;i<solution.size();i++){
            if(masiv[i]==false){
                win=false;
                break;
            }
        }
        cout<<"Round "<<round<<endl;
        if(win){
            cout<<"You win."<<endl;
        }
        else if(strokes>=7){
            cout<<"You lose."<<endl;
        }
        else cout<<"You chickened out."<<endl;
        delete [] masiv;
    }
    return 0;
}
