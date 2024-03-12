#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a1,k;
        cin>>a1>>k;
        k--;
        while(k--){
            int mini=1e9;
            int maxi=0;
            string str = to_string(a1);
            for (size_t i = 0; i < str.size(); i++)
			{
				mini = min(mini, (int)(str[i] - '0'));
				maxi = max(maxi, (int)(str[i] - '0'));
			}
			if (mini == 0 || maxi == 0)
				break;
			a1 += mini * maxi;
		}
		cout << a1 << "\n";
    }
}