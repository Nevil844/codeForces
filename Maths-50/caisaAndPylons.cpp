#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int h[n];
    for(int i=0; i<n; i++){
        cin>>h[i];
    }
    int sum=0,ans=0;
    for(int i=1; i<n; i++){
        sum+=h[i]-h[i-1];
        if(sum<0){
            ans+=abs(sum);
            sum=0;
        }
    }
    cout<<ans<<endl;
}