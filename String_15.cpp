#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();//= > dùng cin.ignore() để xóa ký tự đầu tiên trong bộ nhớ đệm.
    while (t--){
        string s;
        int res;
        getline(cin, s);// vì là cả 1 câu nên phải dùng getline() để lấy chuỗi có khoảng trắng.
        res = s.size();
        for(int i = 0; i < s.size()-1; i++) {
            for(int j = i+1; j < s.size(); j++) {
                if(s[i] == s[j]){
                    res++;
                }
            }
        }
        cout << res << endl;
    }
}


// Input:
// 2
// abcab
// aba

// Output:
// 7
// 4