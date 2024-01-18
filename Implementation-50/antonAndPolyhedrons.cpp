#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int count=0;
    for(int i=0; i<t; i++){
        string x;
        cin>>x;
        if(x=="Icosahedron"){
            count+=20;
        }else if(x=="Dodecahedron"){
            count+=12;
        }else if(x=="Octahedron"){
            count+=8;
        }else if(x=="Cube"){
            count+=6;
        }else if(x=="Tetrahedron"){
            count+=4;
        }
    }
    cout<<count;
}