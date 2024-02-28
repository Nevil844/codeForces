#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long oldk=k;
        if(n>k)
            if(n%k==0) k=((n/k)*k);
            else k=((n/k)*k)+k;

        if(k%n==0)
            cout<<k/n<<endl;
        else
            cout<<(k/n)+1<<endl;
    }
}