#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--)
        {
            int n,q;
            cin>>n>>q;
            vector<int> a(n);
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            while(q--)
            {
                int l,r,k;
                cin>>l>>r>>k;
                for(int i=l-1;i<r;i++)
                {
                    a[i]=k;
                }
                if(accumulate(a.begin(),a.end(),0)%2!=0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        return 0;
    }