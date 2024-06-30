#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }
        

        int seconds = 0;
        

        while (true) {
            bool allZero = true;

            for (int i = 0; i < n; ++i) {
                if (i == n - 1 || h[i] > h[i + 1]) {
                    if (h[i] > 0) {
                        h[i]--;  
                        allZero = false; 
                    }
                }
            }
            if (allZero) {
                break; 
            }
            seconds++;
        }
        
        cout << seconds << endl;
    }
    return 0;
}
