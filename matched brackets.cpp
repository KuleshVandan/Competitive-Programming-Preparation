// Author : Kulesh Vandan
// Matched Brackets - ZCO 2012
#include<iostream>

using namespace std;

int level[2] = {0, 0};
int count[2];
int index[2];

int main(){
    long long n;
    cin >> n;
    long long a[n];
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    int t, curr = 0, s = 1, mcurr = 0, len = 0, mlen = 0, mpos = 0, mlpos = 0;
    for(long long i = 0; i < n; i++){
        t = a[i];
        if(t == 1){
            curr++;
            len++;
            if(curr > mcurr){
                mcurr = curr;
                mpos = i+1;
            }
        } else {
            curr--;
            len++;
            if(curr == 0){
                if(len > mlen){
                    mlen = len;
                    mlpos = s;
                }
                len = 0;
                s = i+2;
            }
        }
    }
    cout << mcurr << " " << mpos << " " << mlen << " " << mlpos << endl;
    return 0;
}
