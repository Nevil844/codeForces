#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,s;
    cin>>a>>b>>s;
    a=abs(a);
    b=abs(b);
    long long minSteps=a+b;
    if(s-minSteps<0) cout<<"No"<<endl;
    else{
        if((s-minSteps)%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}