#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool floor=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            cout<<arr[i]/2<<endl;
        }
        else{
            if(floor){
                if(arr[i]>0)
                    cout<<arr[i]/2<<endl;
                else cout<<arr[i]/2-1<<endl;
                floor=0;
            }else{
                if(arr[i]>0)
                    cout<<arr[i]/2+1<<endl;
                else cout<<arr[i]/2<<endl;
                floor=1;
            }
        }
    }
}