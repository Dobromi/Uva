#include <iostream>
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
    int L;


    while(cin>>L){
        if(L==0)break;
        string S;
        cin>>S;
        bool Dfound=false;bool Rfound=false;
        int dist;
        int bestSoFar=L;
        int i=0;
        int lastR=-L;
        int lastD=-L;

        for(string::iterator it=S.begin();it!=S.end();it++,i++){
            int min=0;
            if(*it=='Z'){

                bestSoFar=0;
                break;
            }
            if(*it=='D'){
                lastD=i;
                Dfound=true;
                if(Rfound){
                    if(lastD>lastR)min=lastD-lastR;
                    else min=lastR-lastD;

                    if(min<bestSoFar)bestSoFar=min;
                }
            }

            else if(*it=='R'){
                lastR=i;
                Rfound=true;
                if(Dfound){
                    if(lastD>lastR)min=lastD-lastR;
                    else min=lastR-lastD;

                    if(min<bestSoFar)bestSoFar=min;
                }
            }
        }
        cout<<bestSoFar<<endl;

    }
    return 0;
}
