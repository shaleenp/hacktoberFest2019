#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,i,j,k;
    cin >> n;

    for(i=n;i>=1;i--)
   {
        for(j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(k=n;k>=i;k--)
        {
            cout<<"#";
        }
        cout<<endl;
    }
