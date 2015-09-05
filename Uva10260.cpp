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
    map<char,int> soundex;
    soundex['B']=1;soundex['F']=1;soundex['P']=1;soundex['V']=1;
    soundex['C']=2;soundex['G']=2;soundex['J']=2;soundex['K']=2;soundex['Q']=2;soundex['S']=2;soundex['X']=2;soundex['Z']=2;
    soundex['D']=3;soundex['T']=3;
    soundex['L']=4;
    soundex['M']=5;soundex['N']=5;
    soundex['R']=6;
    soundex['A']=0;soundex['E']=0;soundex['I']=0;soundex['O']=0;soundex['U']=0;soundex['H']=0;soundex['W']=0;
    soundex['Y']=0;
    string line;
    while(getline(cin,line)){
        char previous;
        int previousRes;
        for(int i=0;i<line.size();i++){
            char s=line[i];
            int res=soundex[s];
            if(i==0){
                if(res>0)cout<<res;
            }
            else{
                if(res>0 && res!=previousRes && previous!=s){
                    cout<<res;
                }
            }
            previous=s;
            previousRes=res;
        }
        cout<<endl;
    }
    return 0;
}

