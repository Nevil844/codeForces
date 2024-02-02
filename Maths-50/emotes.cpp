#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,k,dupk,ans=0;
    cin>>n>>m>>k;
    dupk=k;
    long long arr[n];
    bool a=1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    while(m>0){
        if(a){
            a=0;
            if(m>=k){
                ans+=arr[0]*k;
                m-=k;
            }
            else{
                ans+=arr[0]*m;
                m=0;
            }
        }
        else{
            ans+=arr[1];
            a=1;
            m--;
        }
    }
    cout<<ans;
}