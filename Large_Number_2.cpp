#include<iostream>
#include<cmath>

using namespace std;

string Add (string a, string b){
    while(a.size() < b.size())
        a = '0' + a;
    while (a.size() > b.size()) // lam 2 xau co do dai bang nhau
        b = '0' + b;
    string res = "";
    int remember = 0;        
    for(int i = a.size()-1; i >= 0; --i) { // duyet tu cuoi len
        int temp = int(a[i]- '0') + int(b[i]- '0') + remember; // cong 2 so cuoi + nhớ
        res = char(temp%10+ '0') + res; // 
        remember = temp/10;
    }
    if(remember > 0) res = char(remember + '0') + res;
    return res;    
}

int main(){
    int t;  cin >> t;
    while(t--){
        string x, y;  cin >> x >> y;
        cout << Add(x,y) << endl;
    }
}


// Cho hai số rất lớn X và Y được biểu diễn như hai xâu ký tự. Nhiệm vụ của bạn là 
// tìm X+Y?
// Input: 
// x Dòng đầu tiên đưa vào số lượng test T.
// x Những dòng kế tiếp đưa vào các bộ test. Mỗi test gồm hai dòng: dòng thứ nhất đưa xâu 
// X; dòng tiếp theo đưa vào xâu Y. 
// x T, X, Y thỏa mãn ràng buộc : 1≤T≤100; 0≤length(X), length(Y)≤103
// .
// Output:
// x Đưa ra số kết quả mỗi test theo từng dòng. 
// Input:
// 1
// 12
// 198111
// Output:
// 198123