// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols, num;
    cin>>rows>>cols;
    vector<vector<int>> matrix;
    for(int i=0; i<rows; i++){
        vector<int> row;
        for(int j=0; j<cols;j++){
            cin>>num;
            row.push_back(num);
        }
        matrix.push_back(row);
    }
    vector<vector<int>> ans;
    for(int i=0; i<rows; i++){
        vector<int> row;
        for(int j=0; j<cols;j++){
            row.push_back(1);
        }
        ans.push_back(row);
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j]==0){
                for(int k=0; k<cols; k++){
                    ans[i][k]=0;
                }
                for(int k=0; k<rows; k++){
                    ans[k][j]=0;
                }
            }
        }
    }

    vector<vector<int>> compare;
    for(int i=0; i<rows; i++){
        vector<int> row;
        for(int j=0; j<cols;j++){
            num=0;
            for(int k=0; k<cols; k++){
                num=num|ans[i][k];
            }
            for(int k=0; k<rows; k++){
                num=num|ans[k][j];
            }
            row.push_back(num);
        }
        compare.push_back(row);
    }


    if(compare==matrix){
        cout<<"YES"<<endl;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }    
    }else{
        cout<<"NO";
    }
}