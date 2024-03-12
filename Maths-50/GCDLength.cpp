#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<"1"<<string((a-1),'0')<<" "<<string((b-c+1),'1')<<string(c-1,'0')<<endl;
    }
}