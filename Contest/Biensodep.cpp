//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
bool check(string s){
    // cout << s << endl;
    int k = 0;
    if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3] && s[3] == s[4])
        return true;
    if(s[0] < s[1] && s[1] < s[2] && s[2] < s[3] && s[3] < s[4])
        return true;
    if(s[0] == s[1] && s[1] == s[2] && s[3] == s[4])
        return true;
    for (int i = 0; i < s.length();i++){
        if(s[i] != '6' && s[i] != '8'){
            k++;
        }
    }
    if(k == 0)
        return true;
    return false;
}
string solution(string s){
    string res = "";
    for (int i = s.length() - 1; i >= 0;i--){
        if(s[i] == '-'){
            break;
        }
        if(s[i] != '.'){
                res = s[i] + res;
        }
    }
    if(check(res) == 0)
        return "NO";
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


// Input
// 7

// 29T1–123.45

// 29T1–555.55

// 29T1–222.33

// 29T1–686.88

// 29T1–123.33

// 29T1–555.54

// 29T1–606.88
// Output
// YES

// YES

// YES

// YES

// NO

// NO

// NO