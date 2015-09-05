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

struct book{
            string bookName;
            string Author;
};

bool ord(book b1,book b2){
    if(b1.Author!=b2.Author)
        return b1.Author<b2.Author;
    else
        return b1.bookName<b2.bookName;
}

int main()
{
    string line;
    vector<book> booksColl;
    bool stop=false;
    while(getline(cin,line)){
        string line2;
        if(line=="END"){
            if(stop)break;
            while(getline(cin,line2)){
            if(line2=="END"){
                stop=true;
                break;
            }

            bool *arr=new bool[booksColl.size()];
            for(int i=0;i<booksColl.size();i++)arr[i]=true;
            string temp="";
            if(line2[0]=='B' &&line2[1]=='O' && line2[2]=='R' && line2[3]=='R' && line2[4]=='O' && line2[5]=='W'){

                for(int i=7;i<line2.size();i++){
                    temp+=line2[i];
                }

                for(int i=0;i<booksColl.size();i++){
                    if(booksColl[i].bookName==temp){
                        arr[i]=false;
                    }
                }
            }


            string temp2="";
            if(line2[0]=='R' && line2[1]=='E' && line2[2]=='T' && line2[3]=='U' && line2[4]=='R' && line2[5]=='N'){
                for(int i=7;i<line2.size();i++){
                    temp2+=line2[i];
                }

                for(int i=0;i<booksColl.size();i++){
                    if(booksColl[i].bookName==temp2){
                        arr[i]=true;
                    }
                }
            }
            vector<book> copyColl;
            for(int i=0;i<booksColl.size();i++){
                if(arr[i]==true){
                    copyColl.push_back(booksColl[i]);
                }
            }

            if(line2[0]=='S' && line2[1]=='H' && line2[2]=='E' && line2[3]=='L' && line2[4]=='V' && line2[5]=='E'){
                sort(copyColl.begin(),copyColl.end(),ord);

                for(int i=1;i<copyColl.size();i++){
                    cout<<"Put "<<copyColl[i].bookName<<" after "<<copyColl[i-1].bookName<<endl;
                }
            }


            delete [] arr;
           }

        }
        else{
            int quote=0;
            bool quoteEnd=false;
            book b1;
            string temp="";
            int count=0;
            for(int i=0;i<line.size();i++){

                if(quoteEnd==true){
                    temp+=line[count++];
                    continue;
                }

                if(line[i]=='\"')quote++;
                if(quote==2){
                    quoteEnd=true;
                    temp+=line[count];
                    b1.bookName=temp;
                    count+=4;
                    temp.clear();
                    continue;
                }
                if(quoteEnd==false){
                    temp+=line[count++];
                }

            }
            b1.Author=temp;
            booksColl.push_back(b1);
            if(booksColl.size()>1){
                sort(booksColl.begin(),booksColl.end(),ord);

            }

        }
        if(stop)break;

    }
    return 0;
}
