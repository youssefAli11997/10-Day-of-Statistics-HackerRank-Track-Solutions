#include <cstdio>
#include <iostream>
using namespace std;

int n, x[102], w[102], weightedSum, weightOfSums;

int main() {
    cin>>n;
    for(int i=0; i<n; i++) cin>>x[i];
    for(int i=0; i<n; i++) {
        cin>>w[i];
        weightedSum += x[i] * w[i];
        weightOfSums += w[i];
    }
    printf("%.1f\n",weightedSum*1.0 / weightOfSums);
    return 0;
}
