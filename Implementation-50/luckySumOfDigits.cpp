#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,four=0,seven=0;
    cin>>n;
    int n1=n;
    while(n1%7!=0){
        n1-=4;
        four++;
    }
    if(n1<0) cout<<"-1"<<endl;
    else{
        seven=n1/7;
        for(int i=0;i<four;i++) cout<<"4";
        for(int i=0;i<seven;i++) cout<<"7";
    }
}