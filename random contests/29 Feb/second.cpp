#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2,ans;
        cin>>s1>>s2;
        int k=0, count=0;
        bool a=1;

        int zeros=0;
        for(int i=0; i<n; i++){
            if(s1[i]=='0') zeros++;
            if(s1[i]==s2[i-1] && i!=0) count++;
        }
        if(s1[n-1]==s2[n-2])count++;

        while(n>0){
            if(s2[k]=='0' && a){
                if(a){
                    a=0;
                    cout<<s1[k];
                }
                cout<<s2[k];
            }else if(!a){
                cout<<s2[k];
            }else {
                cout<<s1[k];
            }
            
            k++;
            n--;
        }
       

        cout<<endl<<max(zeros,count)<<endl;
    }
}