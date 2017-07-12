#include <cstdio>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int n, arr[2502], sum, maxFreq, mode = 1e5+1;
float mean, median;
map<int,int> freq;

int main() {
    //freopen("in.txt","rt",stdin);
    //freopen("out.txt","wt",stdout);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
        freq[arr[i]]++;
    }
    mean = sum*1.0 / n;

    sort(arr,arr+n);
    median = (n % 2 == 0)? (arr[n/2] + arr[n/2-1]) / 2.0 : arr[n/2];

    for(int i=n-1; i>=0; i--) if(freq[arr[i]] >= maxFreq){
        mode = arr[i];
        maxFreq = freq[arr[i]];
    }

    printf("%.1f\n%.1f\n%d\n", mean, median, mode);
    return 0;
}
