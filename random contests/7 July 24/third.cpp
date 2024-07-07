#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n], c[n], ans[n];
        double tot=0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            tot+=a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        for(int i=0; i<n; i++){
            cin>>c[i];
        }

        int req=ceil(tot/3);

        int la = -1, ra = -1, lb = -1, rb = -1, lc = -1, rc = -1;

        int current_sum = 0;
        for (int i = 0; i < n; ++i) {
            current_sum += a[i];
            if (current_sum >= req) {
                la = 0;
                ra = i;
                break;
            }
        }

        current_sum = 0;
        for (int i = ra + 1; i < n; ++i) {
            current_sum += b[i];
            if (current_sum >= req) {
                lb = ra + 1;
                rb = i;
                break;
            }
        }

        current_sum = 0;
        for (int i = rb + 1; i < n; ++i) {
            current_sum += c[i];
            if (current_sum >= req) {
                lc = rb + 1;
                rc = i;
                break;
            }
        }


        if (la != -1 && ra != -1 && lb != -1 && rb != -1 && lc != -1 && rc != -1) {
            cout << la + 1 << " " << ra + 1 << " " << lb + 1 << " " << rb + 1 << " " << lc + 1 << " " << rc + 1 << "\n";
        } else {
            cout << "-1\n";
        }

    }
}