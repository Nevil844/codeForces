#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    int count=1;
    cin>>name;
    sort(name.begin(),name.end());
    for(int i=0; i<name.length()-1; i++){
        if(name[i+1]!=name[i]){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
}