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
#include <locale>
using namespace std;



int main()
{
    string input;
    while(true){
        cin>>input;
        if(input=="#")break;
        if(next_permutation(input.begin(),input.end())){
            cout<<input<<endl;
        }
        else{
            cout<<"No Successor"<<endl;
        }
        input.clear();
    }
    return 0;
}

