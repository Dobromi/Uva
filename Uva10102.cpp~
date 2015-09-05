#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <sstream>
#include <set>
#include <string.h>
using namespace std;

typedef vector<int> vi;


int main()
{
    int N;
    while(cin>>N){
        vector<vi> coll;
        string str;
        for(int i=0;i<N;i++){
            cin>>str;
            vi temp;
            for(int j=0;j<str.size();j++){
                int dig=str[j] - '0';
                temp.push_back(dig);
            }
            coll.push_back(temp);
        }

        int Max=0;
        vector<int> dists;
        for(int i=0;i<coll.size();i++){
            for(int j=0;j<coll.size();j++){
                if(coll[i][j]==1){
                    int mn=INFINITY;
                    for(int k=0;k<coll.size();k++){
                        for(int l=0;l<coll.size();l++){
                            if(coll[k][l]==3){
                                int tmp=abs(k-i) + abs(l-j);
                                mn=min(mn,tmp);
                            }
                        }
                    }
                    Max=max(Max,mn);
                }
            }
        }
        cout<<Max<<endl;
    }

    return 0;
}
