#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int ml=k*l;
    // cout<<ml;
    int slices=c*d;
    // cout<<slices;

    int toastMl=ml/nl;
    int toastSalt=p/np;

    int toasts=min({slices,toastMl,toastSalt});
    int ans=toasts/n;
    cout<<ans;
}