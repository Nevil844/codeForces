#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int odd=0,even=0, notgood=0;
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                if(i%2!=0){
                    notgood++;
                }
                even++;
            }else{
                if(i%2==0) notgood++;
                odd++;
            }
        }
        if((odd==even && n%2==0) || (n%2!=0 && odd+1==even)){
            cout<<notgood/2<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}