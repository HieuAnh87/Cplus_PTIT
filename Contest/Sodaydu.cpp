//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string solution(string s){
    int a[11];
    reset(a);
    if(s[0] == '0')
        return "INVALID";
    for (int i = 0; i < s.length();i++){
        if (s[i] >= '0' && s[i] <= '9'){
            a[s[i] - 48] = 1;
        } else{
            return "INVALID";
        }
    }
    for (int i = 0; i <= 9;i++){
        if(a[i] == 0)
            return "NO";
    }
    return "YES";
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << solution(s) << endl;
    }
}



// Cho một số nguyên dương lớn có nhiều hơn 20 chữ số nhưng không quá 1000 chữ số. Hãy kiểm tra xem số đó có đầy đủ tất cả các chữ số từ 0 đến 9 hay không.

// Dữ liệu vào

// Dòng đầu ghi số bộ test, không quá 10
// Mỗi bộ test là một dãy ký tự có độ dài không quá 1000, không có khoảng trống
// Kết quả

// Nếu dữ liệu vào không phải là một số nguyên hợp lệ (có ký tự không phải số hoặc bắt đầu bằng chữ số 0) thì in ra INVALID
// Nếu dữ liệu vào thỏa mãn đầy đủ thì in ra YES, nếu không in ra NO
// Ví dụ

// Input
// 3

// 01234aa32432432432534545b987978

// 123444444444444566666666667890

// 324562783924723543243243242354354354333234324
// Output

// INVALID

// YES

// NO