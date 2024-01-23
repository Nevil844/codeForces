#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,z;
        cin>>x>>y>>z;
        long long maxi=max({x,y,z});
        long long mini=min({x,y,z});
        if(x!=y && y!=z && z!=x){
            cout<<"NO"<<endl;
        }else{
            if((maxi==y && maxi==z )|| (maxi==x && maxi==z )||(maxi==y && maxi==x )){
                cout<<"YES"<<endl;
                cout<<maxi<<" "<<mini<<" "<<1<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
}