#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    if (m % a == 0 && n % a == 0) {
        cout << (m / a) * (n / a) << endl;
    } else if (m % a == 0 && n % a != 0) {
        cout << (m / a) * (n / a) + (m / a) << endl;
    } else if (m % a != 0 && n % a == 0) {
        cout << (m / a) * (n / a) + (n / a) << endl;
    } else {
        cout << (m / a) + (n / a) + 1 + ((m / a) * (n / a)) << endl;
    }
}