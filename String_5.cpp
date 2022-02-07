#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
string s;
void input(){
    cin >> s;
}
void solve(){
    vector < int > cnt(26,0);
    for(int i = 0 ; i < s.length() ; i++) cnt[s[i]-'a'] ++;
    sort(cnt.begin(),cnt.end());
    int sum = 0;
    for(int i = 24 ; i >= 0 ; i--){
        sum += cnt[i];
        if ( sum + 1 >= cnt[25] ){
            cout << 1 << endl;
            return;
        }
    }
    cout <<  0  << endl; 
}
int main(){
    int t=1; 
    cin>>t; cin.ignore();
    while(t--){ 
        input();
        solve();
    }

    return 0;
}

// Cho xâu ký tự S bao gồm các ký tự ‘a’,..,’z’. Các ký tự trong S có thể lặp lại. Nhiệm vụ của bạn sắp đặt lại các ký tự trong S sao cho các ký tự kề nhau đều khác nhau.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S.
// T, S thỏa mãn ràng buộc: 1≤ T ≤100; 0≤ Length(S) ≤103.
// Output:

// Đưa ra 1 hoặc 0 nếu có thể hoặc không thể sắp đặt lại các ký tự trong xâu S thỏa mãn yêu cầu bài toán.
// Input:
// 3
// geeksforgeeks
// bbbabaaacd
// bbbbb

// Output:
// 1
// 1
// 0