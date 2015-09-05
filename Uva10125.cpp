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
    int N;
    while(cin>>N){
        if(N==0)break;
        vector<int> nums;
        for(int i=0;i<N;i++){
            int n;cin>>n;nums.push_back(n);
        }

        sort(nums.begin(),nums.end());
        bool exist=false;
        int largest=-INFINITY;
        for(int i=nums.size()-1;i>=0;i--){

            for(int j=nums.size()-1;j>=0;j--){
                if(i!=j){
                    for(int k=nums.size()-1;k>=0;k--){
                        if(k!=i && k!=j && i!=j){
                            for(int n=nums.size()-1;n>=0;n--){
                                if(n!=i && n!=j && n!=k && k!=i && k!=j && i!=j){
                                    int val=nums[i];
                                    int sum=nums[j] + nums[k] + nums[n];
                                    if(sum==val){
                                        if(largest<val)largest=val;
                                        exist=true;
                                        goto out;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        out:
            if(exist)cout<<largest<<endl;
            else cout<<"no solution"<<endl;
    }
    return 0;
}
