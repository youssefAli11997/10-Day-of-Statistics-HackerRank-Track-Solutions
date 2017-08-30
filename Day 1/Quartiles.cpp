// problem link : https://www.hackerrank.com/challenges/s10-quartiles/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,x[52],q1,q2,q3;

int median(int l ,int r){
    if((r-l+1) % 2 == 1) return x[(r+l)/2];
    return (x[(r+l)/2] + x[(r+l)/2+1]) / 2;
}


int main() {
    cin>>n;
    for(int i=0; i<n; i++) cin>>x[i];
    sort(x, x+n);
    q1 = median(0,n/2-1);
    q2 = median(0,n-1);
    q3 = median((n+1)/2,n-1);
    cout<<q1<<endl;
    cout<<q2<<endl;
    cout<<q3<<endl;
    return 0;
}
