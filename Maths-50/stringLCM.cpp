#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        string s,t;
        cin>>s>>t;
        string nws=s,nwt=t;
        while(nws.length()!=nwt.length()){
            if(nws.length()<nwt.length())  nws+=s;
            else  nwt+=t;
        }
        if(nws==nwt) cout<<nws<<endl;
        else cout<<-1<<endl;
    }
}