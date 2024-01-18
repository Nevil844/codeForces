#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int matrix[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (matrix[i][j]==1){
                int row=i;
                int col=j;
                int ans=abs(col-2)+abs(row-2);
                cout<< ans;
                break;
            }
        }
    }

}