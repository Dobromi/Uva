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

vector<string> tokenize(string &str,char delim){
    vector<string> vec;
    stringstream ss(str);
    string temp;
    while(getline(ss,temp,delim)){
        vec.push_back(temp);
    }
    return vec;
}

int main()
{
    string line;
    while(getline(cin,line)){
        vector<string> tokens=tokenize(line,' ');
        vector<int> ints;
        for(int i=0;i<tokens.size();i++){
            ints.push_back(atoi(tokens[i].c_str()));
        }
        int n=ints[0];
        vector<int> jolly;
        for(int i=1;i<ints.size()-1;i++){
            jolly.push_back(abs(ints[i]-ints[i+1]));
        }

        sort(jolly.begin(),jolly.end());
        bool j=true;
        for(int i=0;i<jolly.size();i++){
            if(jolly[i]!=(i+1)){
                j=false;
                break;
            }
        }
        if(j){
            cout<<"Jolly"<<endl;
        }
        else{
            cout<<"Not jolly"<<endl;
        }

    }
    return 0;
}

