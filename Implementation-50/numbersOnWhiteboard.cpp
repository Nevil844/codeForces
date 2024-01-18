#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums;
        for(int i =1;i<=n;i++){
            nums.push_back(i);
        }
        vector<int>ans;
        while(nums.size()>1){
            int s= nums.size();
            int sum = nums[s-1]+nums[s-2];
            ans.push_back(nums[s-1]);
            ans.push_back(nums[s-2]);
            nums.pop_back();
            nums.pop_back();
            if(sum%2==1) nums.push_back(sum/2+1);
            else nums.push_back(sum/2);
        }
        cout<<nums.back()<<endl;
        for(int i =0;i<ans.size();i+=2)
        cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }
}