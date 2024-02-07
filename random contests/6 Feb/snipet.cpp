#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int back,front;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='B'){
                front=i;
                break;
            }
        }
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]=='B'){
                back=i;
                break;
            }
        }
        cout<<back-front<<endl;
    }
}