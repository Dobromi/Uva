#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
using namespace std;



int main()
{
    string input;
    cin>>input;
    int cas=0;
    while(input!="#"){
        cas++;
        cout<< "Case "<<cas<<": ";
        if(input=="HELLO"){
            cout<<"ENGLISH"<<endl;
        }
        else if(input=="HOLA"){
            cout<<"SPANISH"<<endl;
        }
        else if(input=="HALLO"){
            cout<<"GERMAN"<<endl;
        }
        else if(input=="BONJOUR"){
            cout<<"FRENCH"<<endl;
        }
        else if(input=="CIAO"){
            cout<<"ITALIAN"<<endl;
        }
        else if(input=="ZDRAVSTVUJTE"){
            cout<<"RUSSIAN"<<endl;
        }
        else{
            cout<<"UNKNOWN"<<endl;
        }
        cin>>input;
    }
    return 0;
}
