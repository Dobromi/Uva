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

    typedef pair<string,int> si;

    vector<string> tokenizer(const string &str,char delim){
        vector<string> tokens;
        stringstream mySstream(str);
        string temp;
        while(getline(mySstream,temp,delim)){
            tokens.push_back(temp);
        }
        return tokens;
    }

    int main()
    {
        int N;
        cin>>N;
        string name;
        while(true){
            map<string,int> coll;
            vector<string> names;
            for(int i=0;i<N;i++){
                cin>>name;
                names.push_back(name);
                coll.insert(make_pair(name,0));
            }


            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            string line;
            vector<string> result;
            for(int i=0;i<N;i++){
                string NameOfPerson;
                int amSpent,numbOfPeople;
                vector<string> giftsGiven;
                getline(cin,line);
                result=tokenizer(line,' ');

                NameOfPerson=result[0];
                amSpent=atoi(result[1].c_str());numbOfPeople=atoi(result[2].c_str());

                for(int i=3;i<result.size();i++){
                    giftsGiven.push_back(result[i]);
                }


                double amPerPerson;
                bool flag=false;
                if(!(amSpent==0 || numbOfPeople==0)){
                    amPerPerson=floor(static_cast<double>(amSpent/numbOfPeople));
                    flag=true;
                }

                if(flag){
                    for(string s : giftsGiven){
                        coll[s]+=amPerPerson;
                    }
                    coll[NameOfPerson]-=amPerPerson * numbOfPeople;
                }

            }
            for(int i=0;i<names.size();i++){
                string str=names[i];
                cout<<str<<" "<<coll[str]<<endl;
            }
            if(cin>>N)cout<<endl;
            else break;
        }
        return 0;
    }

