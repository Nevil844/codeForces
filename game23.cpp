#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m, x;
    bool over=0;
    int count=0;
    cin>>n>>m;
    if(m%n==0){
        x=m/n;
        while(x>1){
            if(x%2==0){
                x=x/2;
                count++;
            }else if(x%3==0){
                x=x/3;
                count++;
            }else{
                cout<<-1;
                over=1;
                break;
            }
        }
        if(!over)
            cout<<count;
    }else{
        cout<<-1;
    }
}