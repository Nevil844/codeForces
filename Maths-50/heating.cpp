#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int c, sum;
        cin>>c>>sum;
        int div=sum/c;
        int rem=sum%c;
        cout<<rem*(div+1)*(div+1)+(c-rem)*div*div<<endl;
    }
}