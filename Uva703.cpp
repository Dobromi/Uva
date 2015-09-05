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

typedef vector<int> vi;

bool identical(vector<vi> triples,vi vec){
    sort(vec.begin(),vec.end());
    for(int i=0;i<triples.size();i++){
        vi local=triples[i];
        sort(local.begin(),local.end());
        if(vec==local)return true;
    }
    return false;
}

vector<int> getDigits(int dig){
    vector<int> ret;
    while(dig>0){
        int d=dig%10;
        ret.push_back(d);
        dig/=10;
    }
    return ret;
}

void SortWholeVector(vector<vi>& triples){
    for(int i=0;i<triples.size();i++){
        for(int j=i+1;j<triples.size();j++){
            for(int k=0;k<triples.size();k++){
                if(triples[j][k]<triples[i][k]){
                    swap(triples[i],triples[j]);
                }
            }
        }
    }
}

void SortLexographic(vector<vi>& triples){
    for(int i=0;i<triples.size();i++){
        for(int j=0;j<triples[i].size();j++){
            for(int k=j+1;k<triples[i].size();k++){
                vector<int> Digit1=getDigits(triples[i][j]);
                vector<int> Digit2=getDigits(triples[i][k]);
                int n=0;int c=0;
                while(Digit1[n]==Digit2[c]){
                    n++;
                    c++;
                }
                if(Digit2[c]<Digit1[n]){
                    swap(triples[i][j],triples[i][k]);
                }
            }
        }
    }
}

int main()
{
    int N;
    while(cin>>N){
        vector<vi> Coll;
        vi vec;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                int n;
                cin>>n;
                vec.push_back(n);
            }
            Coll.push_back(vec);
            vec.clear();
        }
        bool draw=true;
        bool outer=true;
        for(int i=0;i<Coll.size();i++){
            if(!outer)break;
            for(int j=0;j<Coll[i].size();j++){
                if(Coll[i][j]!=0){
                    draw=false;
                    outer=false;
                    break;
                }
            }
        }
        vector<vi> triples;
        int amount=0;
        int Size=Coll.size();
        for(int i=Size-1;i>=0;i--){
            for(int j=Size-1;j>=0;j--){
                if(Coll[i][j]==1){
                    int Beater=i;
                    int Beaten=j;

                    for(int k=0;k<Size;k++){
                        if(Coll[Beaten][k]==1){

                            if(Coll[k][Beater]==1){
                                vi temp;
                                temp.push_back(i+1);temp.push_back(j+1);temp.push_back(k+1);
                                if(identical(triples,temp)==false){
                                    amount++;
                                    triples.push_back(temp);
                                }
                            }
                        }
                    }
                }
            }
        }

        if(draw){
            for(int i=1;i<=N;i++){
                for(int j=i+1;j<=N;j++){
                    for(int k=j+1;k<=N;k++){
                        amount++;
                    }
                }
            }
            cout<<amount<<endl;
            for(int i=1;i<=N;i++){
                for(int j=i+1;j<=N;j++){
                    for(int k=j+1;k<=N;k++){
                        cout<<i<<" "<<j<<" "<<k<<endl;
                    }
                }
            }
        }
        else{
            cout<<amount<<endl;
            SortLexographic(triples);
            SortWholeVector(triples);
            for(int i=0;i<triples.size();i++){
                for(int j=0;j<triples[i].size();j++){
                    cout<<triples[i][j]<<" ";
                }
                cout<<endl;
            }

        }
    }
    return 0;
}
