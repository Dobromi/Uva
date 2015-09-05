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
    string charArr;
    int groups;
    while(true){
        scanf("%d",&groups);
        if(groups==0)break;
        cin>>charArr;
        int groupLength=charArr.size()/groups;
        int count=0;
        int e;
        for(int i=0;i<groups;i++){
            for(int j=0,e=groupLength-1;j<groupLength/2;j++,e--){
                swap(charArr[j+count],charArr[e+count]);
            }
            count+=groupLength;
        }
        cout<<charArr<<endl;
    }
    return 0;
}
