string s;
cin>>s; 
map<char , int> mp;
for(int i=0;i<4;i++){
        mp[s[i]]++;
}
int cc=0, mx=0;
for(auto a : mp){
 mx = max(mx,a.second);
        cc++;
}
int ans = 0;
if(cc==2){
        if(mx==3) ans = 6;
        else ans = 4;
        }
else if(cc==1) ans = -1;
else ans=4;
cout<<ans<<endl;