#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char trump;
        cin>>trump;
        string s[n];
        vector<string> club[n], diamond[n], heart[n], spade[n];
        for(int i=0; i<2*n; i++){
            cin>>s[i];
            if(s[i][1]=='C'){
                club->push_back(s[i]);
            }else if(s[i][1]=='D'){
                diamond->push_back(s[i]);
            }else if(s[i][1]=='H'){
                heart->push_back(s[i]);
            }else{
                spade->push_back(s[i]);
            }
        }
        sort(club->begin(), club->end());
        sort(diamond->begin(), diamond->end());
        sort(heart->begin(), heart->end());
        sort(spade->begin(), spade->end());
        
    }
}