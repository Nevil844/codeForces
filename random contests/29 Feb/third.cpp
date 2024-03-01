#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, ans=0;
        cin>>n;
        bool a=1;
        if(n<15) a=0;
        ans=n/15;
        n=n%15;
        if(a){
            if(n==14) ans+=3;
            else if(n==13 || n==11 || n==9 || n==7 || n==4 || n==2 || n==12 || n==8 ) ans+=2;
            else if(n==10 || n==6 || n==3 || n==1|| n==5) ans+=1; 
            cout<<ans<<endl;
        }else{
            if(n==14|| n==5|| n==8 ) ans+=3;
            else if(n==13 || n==11 || n==9 || n==7 || n==4 || n==2 || n==12 ) ans+=2;
            else if(n==10 || n==6 || n==3 || n==1) ans+=1; 
            cout<<ans<<endl;
        }  
    }
}