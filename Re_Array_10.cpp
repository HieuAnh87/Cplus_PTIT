#include<iostream>
#include<stack>
using namespace std;
const int N = 1e5 + 5;
/*
    dung` stack  : http://www.cplusplus.com/reference/stack/stack/
    neu s[i] = 'D' push i + 1 vao stack;
    neu s[i] = 'I' hoac i == len(s) thi day het cac phan tu trong stack ra.
*/
string s;
void input(){
    cin >> s;
}
void solve(){
    stack < int > res;
    for(int i = 0 ; i <= s.length() ; i++){
        if ( i == s.length() || s[i] == 'I'){
            cout << i + 1;
            while(!res.empty()){
                cout << res.top();
                res.pop();
            }
        }
        else if ( s[i] == 'D')
            res.push(i+1);
    }
    cout << endl;
}
int main(){
    int t=1; 
    cin>>t; 
    while(t--){ 
        input();
        solve();
    }
    return 0;
}

// Cho mảng A[] chỉ bao gồm các ký tự I hoặc D. Ký tự I được hiểu là tăng (Increasing) ký tự D được hiểu là giảm (Degreeasin). Sử dụng các số từ 1 đến 9, hãy đưa ra số nhỏ nhất được đoán nhận từ mảng A[]. Chú ý, các số không được phép lặp lại. Dưới đây là một số ví dụ mẫu:
// A[] = “I”               : số tăng nhỏ nhất là 12.
// A[] = “D”              : số giảm nhỏ nhất là 21
// A[] =”DD”            : số giảm nhỏ nhất là 321
// A[] = “DDIDDIID”: số thỏa mãn 321654798
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ID
// T, Length(A) thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(A) ≤9; .
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 4
// I
// D
// DD
// DDIDDIID

// Output:
// 12
// 21
// 321
// 321654798