// Author : Kulesh Vandan
// Vuideo game - ZCO 2014

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> moves;
    int mov;
    cin >> mov;
    while(mov > 0){
        moves.push_back(mov);
        cin >> mov;
    }
    int crane = 0, curr = 0;
    for(int i  = 0; i < moves.size(); i++){
        mov = moves[i];
        if(mov == 1 && curr > 0){
            curr--;
        } else if(mov == 2 && curr < n-1){
            curr++;
        } else if(mov == 3 && crane == 0 && a[curr] > 0){
            crane++;
            a[curr]--;
        } else if(mov == 4 && crane == 1 && a[curr] < h){
            crane--;
            a[curr]++;
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
