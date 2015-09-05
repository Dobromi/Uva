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
#include <locale>
using namespace std;

vector<string> getWords(string &str,char delim){
    stringstream ss(str);
    vector<string> ret;
    string tmp;
    while(getline(ss,tmp,delim)){
        ret.push_back(tmp);
    }
    return ret;
}

bool WordNotImportant(string word,vector<string> &notImportantWords){
    for(string s : notImportantWords){
        if(s==word)return true;
    }
    return false;
}


int main()
{
    string line;
    vector<string> notImportantWords;
    vector<string> titles;
    bool TitlesOn=false;
    while(getline(cin,line)){
        if(line=="::"){
            TitlesOn=true;
            continue;
        }
        if(line=="END")break;
        if(!TitlesOn){
            notImportantWords.push_back(line);
        }
        else{
            for(int i=0;i<line.size();i++){
                line[i]=tolower(line[i]);
            }
            titles.push_back(line);
        }
        line.clear();


    }

    vector<string> Coll;
    for(int i=0;i<titles.size();i++){
        vector<string> tmp=getWords(titles[i],' ');
        for(string s : tmp){
            Coll.push_back(s);
        }
    }

    vector<string> newColl;
    for(int i=0;i<Coll.size();i++){
        if(WordNotImportant(Coll[i],notImportantWords)==false){
            newColl.push_back(Coll[i]);
        }
    }

    sort(newColl.begin(),newColl.end());

    for(int i=0;i<newColl.size();i++){
        for(int j=0;j<titles.size();j++){
            string title=titles[j];
            string needle=newColl[i];
            size_t found=title.find(needle);
            if(found!=string::npos){
                int l=found + needle.size();
                for(int k=found;k<l;k++){
                    title[k]=toupper(title[k]);
                }
                cout<<title<<endl;
            }
        }
    }

    return 0;
}
