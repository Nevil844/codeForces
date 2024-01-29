#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x1,x2,x3,x4,a,b,c,sum;
    long long arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr,arr+4);
    a=arr[3]-arr[0];
    b=arr[3]-arr[1];
    c=arr[3]-arr[2];
    cout<<a<<" "<<b<<" "<<c;
}