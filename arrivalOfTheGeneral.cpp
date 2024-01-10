#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    vector<int> heights;
    int ans=0;

    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        heights.push_back(ele);
        if(ele>max)
        max=ele;
        if(ele<min)
        min=ele;
    }
    for(int i=0;i<n;i++)
    {
        if(heights[i]==max)
        {
            k=i; break;
        }
    }
    for(int i=k;i>=1;i--)
    {
        int temp=heights[i];
        heights[i]=heights[i-1];
        heights[i-1]=temp;
        ans++;
    }
    for(int i=n;i>=0;i--)
    {
        if(heights[i]==min)
        {
            k=i; break;
        }
    }
    for(int i=k;i<n-1;i++)
    {
        int temp=heights[i];
        heights[i]=heights[i+1];
        heights[i+1]=temp;
        ans++;
    }
    cout<<ans<<endl;
}
