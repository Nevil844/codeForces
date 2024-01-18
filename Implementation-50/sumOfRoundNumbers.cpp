#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int digit;
        vector <int> arr,sol;
        while(n>0){
            digit=n%10;
            arr.push_back(digit);
            n/=10;
        }

        for(int j=0; j<arr.size(); j++){
            int ans=arr[j]*pow(10,(j));
            if(ans!=0){
                sol.push_back(ans);
            }
        }

        int len=sol.size();
        cout<<len<<" ";
        for(int k=0; k<len; k++){
            cout<<sol[k]<<" ";
        }
    }

}