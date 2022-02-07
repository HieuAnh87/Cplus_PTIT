#include<bits/stdc++.h>
using namespace std;
bool subStr2ofstr1(string str1, string substr) {
    map<char, int>mpstr1, mpsubstr;// khai báo 2 map mpstr1, mpsubstr
    for (int i = 0; i < str1.length(); i++) mpstr1[str1[i]]++;// ðêm s? l?n xu?t hi?n
    for (int i = 0; i < substr.length(); i++) mpsubstr[substr[i]]++;// ð?m s? l?n
    //map[key]=value
    for (map<char, int>::iterator it= mpsubstr.begin(); it != mpsubstr.end(); it++){
        if (mpstr1[it->first] < mpsubstr[it->first]) return false;
    }
    return true;
}

int main(){
    cin.tie(0); ios_base::sync_with_stdio(false);
    int t; cin >> t;
    while (t--) {
        string str1, subStr;  cin >> str1 >> subStr;
        int MIN = 150;// khai báo MIN >100là ðc, ta ch?n MIN=150
        string ans;// chu?i k?t qu?
        bool check = false;
        for (int i = 0; i < str1.length(); i++) {
            string res;
            for (int j = i; j < str1.length(); j++) {
                res.push_back(str1[j]);
                if (subStr2ofstr1(res, subStr) == true && res.length() <MIN) {
                    MIN = res.size();//t?m chu?i ans có ð? dài ngãn
                    ans = res;// c?p nhâp l?i chu?i ans
                    check = true;// ðánh d?u là t?n t?i k?t qu? bài
                }
            }
        }
        if (check == true) cout << ans;
        else                cout << -1;// n?u không t?n t?i k?t qu? th? in -1
        cout << endl;
    }
    return 0;
}

// Cho hai xâu ký tự S1 và S2. Nhiệm vụ của bạn là hãy tìm xâu con nhỏ nhất của S1 chứa đầy đủ các ký tự của S2. Nếu không tồn tại xâu con thỏa mãn yêu cầu bài toán, hãy đưa ra -1.

// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là bộ đôi S1 và xâu ký tự S2 được viết trên các dòng khác nhau.
// T, S1, S2 thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S1), Length(S2) ≤100.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// timetopractice
// toc
// zoomlazapzo
// oza

// Output:
// toprac
// apzo