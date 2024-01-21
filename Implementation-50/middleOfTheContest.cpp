#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1,m1, h2, m2;
    char colon;
    cin>>h1>>colon>>m1;
    cin>>h2>>colon>>m2;
    // cout<<h1<<colon<<m1<<endl;
    int hour, mins;
    if(h2>=h1){
        hour=h2-h1;
    }else{
        hour=24-h1+h2;
    }
    if(m2>=m1){
        mins=m2-m1;
    }else{
        mins=60-m1+m2;
        hour-=1;
    }
    mins/=2;
    if(hour%2==0)hour/=2;
    else{
        hour/=2;
        mins+=30;
    }
    hour=h1+hour;
    mins=m1+mins;
    if(mins>=60){
        hour+=1;
        mins-=60;
    }
    if(hour<10 && mins<10)cout<<0<<hour<<colon<<0<<mins;
    else if(hour<10 )cout<<0<<hour<<colon<<mins;
    else if(mins<10)cout<<hour<<colon<<0<<mins;
    else cout<<hour<<colon<<mins;
}