#include <iostream>
    #include <string>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            string s;
            cin>>s;
            int flag=1;
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j+=2)
                {
                    if(s[i]==s[j])
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        return 0;
    }