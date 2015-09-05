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



int main()
{
    int M,Q;
    cin>>M>>Q;
    string str;
    vector<string> coll;
    for(int i=0;i<M;i++){
        cin>>str;
        coll.push_back(str);
    }
    string clip;
    cin>>clip;
    int best=1000;
    int bestPos=0;
    for(int i=0;i<M;i++){

        string movie=coll[i];
        int movieSize=movie.size();
        int clipSize=clip.size();
        for(int k=0;k<=movieSize-clipSize;k++){
            int diff=0;
            for(int n=0;n<clipSize;n++){
                if(clip[n]!=movie[n+k])diff++;
            }
            if(diff<best){
                best=diff;bestPos=i+1;
            }
        }

    }
    cout<<best;
    return 0;
}
