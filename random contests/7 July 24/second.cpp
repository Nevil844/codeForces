#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a[n], b[n];
        int storea[m]={0}, storeb[m]={0};
        int storea2[n]={0}, storeb2[n]={0};
        for(int i=0; i<n; i++){
            cin>>a[i];
            for(int j=0; j<m; j++){
                storea[j]+=(a[i][j]-'0');
            }
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
            for(int j=0; j<m; j++){
                storeb[j]+=(b[i][j]-'0');
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                storea2[i]+=a[i][j];
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                storeb2[i]+=b[i][j];
            }
        }

        bool yes=true;
        

        for(int i=0; i<m; i++){
            // cout<<storea[i]<<" "<<storeb[i]<<endl;
            if(storea[i]%3!=storeb[i]%3){
                yes=false;
                cout<<"NO"<<endl;
                break;
            }
        }

        if(yes){
            for(int i=0; i<n; i++){
                // cout<<storea2[i]<<" "<<storeb2[i]<<endl;
                if(storea2[i]%3!=storeb2[i]%3){
                    yes=false;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        
        
        
        if(yes){
            cout<<"YES"<<endl;
        }
    }
}