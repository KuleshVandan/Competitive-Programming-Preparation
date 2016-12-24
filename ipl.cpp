// Author : Kulesh Vandan
// IPL - ZCO 2014
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int best[n];
    for(int j = 0; j < n; j++){
        if(j == 0){
            best[0] = a[0];
        } else if(j == 1){
            best[1] = a[0] + a[1];
        } else if(j == 2){
            best[2] = a[2] + max(a[0], a[1]);
        } else {
            int x = max(best[j-1], a[j] + a[j-1] + best[j-3]);
            best[j] = max(x, a[j] + best[j-2]);
        }
    }
    cout << best[n-1] << endl;
    return 0;
}
