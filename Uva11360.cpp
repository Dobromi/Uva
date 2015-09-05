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
    int TC;
    scanf("%d",&TC);
    int cas=1;
    while(TC--){
        int Size;
        scanf("%d",&Size);
        int Matrix[Size][Size];
        int r1,r2,c1,c2;
        string tmp,data="";
        for(int i=0;i<Size;i++){
            cin>>tmp;
            data+=tmp;
        }
        int index=0;
        for(int i=0;i<Size;i++){
            for(int j=0;j<Size;j++){
                Matrix[i][j]=data[index++] - '0';
            }
        }

        int M;
        scanf("%d",&M);
        string line;
        for(int i=0;i<M;i++){
            cin>>line;
            if(line=="transpose"){
                int freshMatrix[Size][Size];
                int row=0;
                for(int i=0;i<Size;i++){
                    for(int j=0;j<Size;j++){
                        freshMatrix[i][j]=Matrix[j][row];
                    }
                    row++;
                }

                for(int i=0;i<Size;i++){
                    for(int j=0;j<Size;j++){
                        Matrix[i][j]=freshMatrix[i][j];
                    }
                }
            }

            else if(line=="row"){

                scanf("%d %d",&r1,&r2);
                int rowa=r1-1;
                int rowb=r2-1;

                for(int j=0;j<Size;j++){
                    int temp=Matrix[rowa][j];
                    Matrix[rowa][j]=Matrix[rowb][j];
                    Matrix[rowb][j]=temp;
                }

            }

            else if(line=="col"){
                scanf("%d %d",&c1,&c2);
                int cola=c1-1;
                int colb=c2-1;
                for(int j=0;j<Size;j++){
                    int temp=Matrix[j][cola];
                    Matrix[j][colb]=Matrix[j][cola];
                    Matrix[j][cola]=temp;
                }
            }

            else if(line=="inc"){
                for(int i=0;i<Size;i++){
                    for(int j=0;j<Size;j++){
                        Matrix[i][j]++;
                        if(Matrix[i][j]>9)
                            Matrix[i][j]=0;
                    }
                }
            }

            else if(line=="dec"){
                for(int i=0;i<Size;i++){
                    for(int j=0;j<Size;j++){
                        Matrix[i][j]--;
                        if(Matrix[i][j]<0)
                            Matrix[i][j]=9;
                    }
                }
            }

        }

        cout<<"Case #"<<cas++<<endl;
        for(int i=0;i<Size;i++){
            for(int j=0;j<Size;j++){
                cout<<Matrix[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
