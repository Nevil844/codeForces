#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    if(n%2==0){
        k=n/2;
    }else if((n+1)%2==0){
        k=(n+1)/2;
    }
    if(k==1) cout<<"No";
    else{
        cout<<"Yes\n";
        cout<<1<<" "<<k<<endl;
        cout<<n-1<<" ";
        for(int i=1; i<=n; i++){
            if(i!=k) cout<<i<<" ";
        }
    }
}