#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    bool headTail;
    for(int i=0; i<row; i++){
        headTail=0;
        for(int j=0; j<col; j++){
            if((i+1)%2!=0){
                cout<<"#";
            }else{
                if((((i+1)/2)%2==0) && (!headTail)){
                    cout<<"#";
                    headTail=1;
                }else if((((i+1)/2)%2!=0) && (!headTail)){
                    if(j==col-1){
                        cout<<"#";
                    }else{
                        cout<<".";
                        headTail=0;
                    }
                }else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
}