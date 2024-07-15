#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        bool x=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ans.push_back('1');
                x=0;
            }else if(x==0){
                x=1;
                ans.push_back('0');
            }
        }
        int one=0, zero=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='1')one++;
            else zero++;
        }
        if(zero>=one) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}