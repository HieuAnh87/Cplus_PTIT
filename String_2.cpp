#include<iostream>
#include<cmath>
using namespace std;


void run(){
    string s; cin >> s;
    int chan,le; chan=le=0;
    for(int i=0; i<s.size(); i++){
        if(i%2==0){
            chan += (s[i]-'0') ;
        }
        else{
            le += (s[i]-'0');
        }
    }
    if(abs(chan-le)%11==0) cout << "1" << endl;
    else                   cout << "0" << endl;
}

int main(){
    int t;  cin >> t;
    while(t--)  run();
}
// Ý tưởng : chia hết cho 10 => Tổng(chẵn -lẻ) các chữ số chia hết cho 10
//           =>> chia đôi chẵn lẻ rồi check xem % 11==0 ??

// Input:
// 2
// 76945
// 363588395960667043875487
// Output:
// 1
// 0