#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int k=0, count=0, firstz=-1, lastz=-1;
        bool a=1;
        for (int i = 0; i <n; i++){
            if(s2[i]=='0'){
                firstz=i;
                break;
            }
        }
        for (int i =n-1; i>=0; i--){
            if(s2[i]=='0'){
                lastz=i;
                break;
            }
        }
        while(n>0){
            if(s2[k]=='0' && a){
                if(a){
                    a=0;
                    cout<<s1[k];
                }
                cout<<s2[k];
            }else if(!a){
                cout<<s2[k];
            }else {
                cout<<s1[k];
            }
            k++;
            n--;
        }
        if(firstz!=-1 &&  lastz!=-1) cout<<endl<<(lastz-firstz+1)<<endl;
        else cout<<endl<<1<<endl;
    }
}