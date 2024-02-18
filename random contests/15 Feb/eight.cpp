#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m, temp;
        cin>>n>>m;
        vector<int> a;
        for(int i=0; i<n; i++){
            cin>>temp;
            a.push_back(temp);
        } 
        char s[n];
        for(int i=0; i<n; i++) cin>>s[i];
        unsigned long long int ans=1;
        int start=0,end=n;
        for(int i=0; i<n; i++){
            ans=1;
            for(int j=start; j<end; j++){
                if(a[j]==0){
                    ans=0;
                    break;
                }
                ans = (ans * a[j]) % m;
            }
            cout<<ans<<" ";
            if(s[i]=='L') {
                start++;
            }else{
                end--;
            }
        }
        cout<<endl;
    }
}