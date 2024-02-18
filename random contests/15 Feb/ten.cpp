#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        char s[n];
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        unsigned long long int ans = 1;
        int start = 0, end = n;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                ans = (ans * a[start]) % m;
                start++;
            } else {
                ans = (ans * a[end - 1]) % m;
                end--;
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
