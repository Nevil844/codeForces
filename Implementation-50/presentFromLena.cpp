#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,r,c;
    cin>>n;
    for(r=0; r<=n; r++)
    {
        for(c=1; c<=(n*2)-r*2; c++)
        {
            printf(" ");
        }
        for(c=0; c<=r; c++)
        {
            if(r==0)
            {printf("%d",c);}
            else
            {
                printf("%d ",c);
            }
 
    }
        for(c=r-1; c>=0; c--)
        {
            if(c==0)
            {
                printf("%d",c);
            }
            else
            {printf("%d ",c);
        }}
        printf("\n");
 
    }
    for(r=n-1; r>=0; r--)
    {
        for(c=1; c<=(n*2)-r*2; c++)
        {
            printf(" ");
        }
        for(c=0; c<=r; c++)
        {
            if(r==0)
            {printf("%d",c);}
            else
            {
                printf("%d ",c);
            }
 
    }
        for(c=r-1; c>=0; c--)
        {
            if(c==0)
            {
                printf("%d",c);
            }
            else
            {printf("%d ",c);
        }}
        printf("\n");
 
    }
}