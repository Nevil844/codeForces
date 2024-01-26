#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    int digit=k%10;
    int count=1;
    int total=k; 
    while(digit!=r && digit!=0){
        total+=k;
        digit=total%10;
        count++;
        if(digit==0) break;
    }
    cout<<count;
}