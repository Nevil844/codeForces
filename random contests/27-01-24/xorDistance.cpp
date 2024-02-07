#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,r,ans1,ans2;
        cin>>a>>b>>r;
        ans1=abs((a-b)^~0);
        for(int i=1; i<r+1; i++){
            ans1=min(ans1,abs((a-b)^(~i)));
        }
        cout<<ans1<<endl;
    }
}