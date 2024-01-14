#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string t,s;
    cin>>t;
    int i=1,j=0;
    while(j<n){
        j=i*(i+1)/2;
        i++;
        s.push_back(t[j-1]);
    }
    cout<<s;
}