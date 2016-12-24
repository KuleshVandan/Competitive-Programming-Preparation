// Author : Kulesh Vandan
// Smart Phone - ZCO 2014
#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a[n];
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    long long maxrevenue = 0;
    long long revenue;
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < 2; j++){
            revenue = (a[i] - j) * (n-i);
            maxrevenue = max(maxrevenue, revenue);
        }
    }
    cout << maxrevenue << endl;
    return 0;
}
