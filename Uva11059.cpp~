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
    int n;
    int cas=1;
    while(cin>>n){
        vector<int> elems;
        for(int i=0;i<n;i++){
            int input;
            cin>>input;
            elems.push_back(input);
        }
        cout<<endl;
        int maximum=0;
        for(int i=0;i<elems.size();i++){
            int p=1;
            for(int j=i;j<elems.size() && p;j++){
                p*=elems[j];
                if(p>maximum)maximum=p;
            }
        }
        if(maximum<=0){
            cout<<"Case #"<<cas++<<": The maximum product is 0."<<endl;
        }
        else{
            cout<<"Case #"<<cas++<<": The maximum product is "<<maximum<<"."<<endl;
        }
        cout<<endl;
    }
    return 0;
}

