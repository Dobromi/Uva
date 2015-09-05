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
#include <list>
using namespace std;

typedef vector<int> vi;


int main()
{
    vector<int> squares;
    for(int i=0;i<224;i++)squares.push_back(i * i);

    int tc;
    scanf("%d",&tc);
    while(tc--){
        int num;
        scanf("%d",&num);
        bool exist=false;

                int intnum=num;

                for(int j=0;j<squares.size();j++){
                    if(squares[j]>intnum)break;
                    for(int k=j;k<squares.size();k++){
                        if(squares[j] + squares[k]>intnum)break;
                        for(int n=k;n<squares.size();n++){
                            int prod=squares[j] + squares[k] + squares[n];
                            if(prod>intnum)break;
                            if(prod==intnum){
                                cout<<j<<" "<<k<<" "<<n<<endl;exist=true;
                                goto out;
                            }
                        }
                    }
                }
        out:
            if(!exist)cout<<"-1"<<endl;
    }
    return 0;
}
