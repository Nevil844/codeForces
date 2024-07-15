#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        int x=log2(n);
        cout<<x+1<<endl;
        vector<int> ans;
        ans.push_back(n);
        if(n%2==0 && x>0){
            ans.push_back(n-2);
            
        }else if(x>0){
            ans.push_back(n-1);
        }
        while(x>1){

        }
        cout<<endl;
    }
}