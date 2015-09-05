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
    int TC;
    cin>>TC;
    cin.ignore();
    string line;
    while(TC--){

        getline(cin,line);
        int count=0;
        for(string::iterator iter=line.begin();iter!=line.end();iter++){
            if(*iter=='M'){
                count++;
            }
            if(*iter=='F'){
                count--;
            }
        }

        if(count==0 && line.size()>3){
            cout<<"LOOP"<<endl;
        }
        else{
            cout<<"NO LOOP"<<endl;
        }


    }
    return 0;
}

