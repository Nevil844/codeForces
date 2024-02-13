#include <bits/stdc++.h>
using namespace std;

int area(int x1,int x2,int x3,int y1,int y2,int y3)
{
    return abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
}
int max(int a, int b)
{
if(a>=b)
return a;
return b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        int ans=0;
         int k,l;
        cin >> k;
        int a[k];
        for(int i = 0; i < k; i++) cin >> a[i];
        sort(a,a+k);
        cin >> l;
        int b[l];
        for(int i = 0; i < l; i++) cin >> b[i];
        sort(b,b+l);
        ans = max(ans,area(a[0],a[k-1],b[0],0,0,h));
        ans = max(ans,area(b[0],b[l-1],a[0],h,h,0));
        
        
        cin >> k;
        int aa[k];
        for(int i = 0; i < k; i++) cin >> aa[i];
        sort(aa,aa+k);
        cin >> l;
        int bb[l];
        for(int i = 0; i < l; i++) cin >> bb[i];
        sort(bb,bb+l);
        ans = max(ans,area(aa[0],aa[k-1],bb[0],0,0,w));
        ans = max(ans,area(bb[0],bb[l-1],aa[0],w,w,0));
        cout<<ans<<endl;
    }
}