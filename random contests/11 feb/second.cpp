#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        set <long long> s; 
        for(int i=0; i<n; i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        vector<int> v;
        for (auto x : s)
        {
            v.push_back(x);
        }
        int k = n;
        n = v.size();
        int ans = 1;
        for (int i = 0; i < n; i++){
            int end = v[i] + k - 1;
            int itr = upper_bound(v.begin(), v.end(), end) - v.begin() - i;
            ans = max(ans, itr);
        }
        cout << ans << endl;

    }
}