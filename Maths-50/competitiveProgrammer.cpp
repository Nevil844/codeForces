#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        bool three=0;
        int zeros=0, sum=0, two=0;
        string y;
        cin>>y;
        for(int i=0; i<y.length(); i++){
            if((y[i])=='0'){
                zeros++;
            }else sum+=y[i]-'0';
            if((y[i]-'0')%2==0) two++;
        }
        if(zeros){
            if(sum%3==0) three=1;
            if(three && (two>1)) cout<<"red"<<endl;
            else cout<<"cyan"<<endl;
        }else cout<<"cyan"<<endl;
    }
}