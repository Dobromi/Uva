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
using namespace std;



int main()
{
    int N;
    int count=0;
    while(cin>>N){
        if(N==0)break;
        if(count!=0){
            cout<<endl;
        }
        vector<int> ints;
        for(int i=0;i<N;i++){
            int n;
            cin>>n;
            ints.push_back(n);
        }
        int Size=ints.size();
        for(int i=0;i<Size;i++){
            for(int j=i+1;j<Size;j++){
                for(int k=j+1;k<Size;k++){
                    for(int n=k+1;n<Size;n++){
                        for(int c=n+1;c<Size;c++){
                            for(int l=c+1;l<Size;l++){
                                cout<<ints[i]<<" "<<ints[j]<<" "<<ints[k]<<" "<<ints[n]<<" "<<ints[c]<<" "<<ints[l]<<endl;
                            }
                        }
                    }
                }
            }
        }
        count++;
    }
    return 0;
}
