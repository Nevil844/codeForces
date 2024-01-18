#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    x1=abs(x1);
    x2=abs(x2);
    x3=abs(x3);
    cout<<max({x1,x2,x3})-min({x1,x2,x3});
}