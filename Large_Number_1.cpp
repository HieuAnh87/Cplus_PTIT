#include<iostream>
#include<cmath>

using namespace std;

string Sub(string a, string b){
    string res = "";
    int remember = 0;
    while (a.size() < b.size()) // lam 2 xau co do dai bang nhau
        a = '0' + a;
    while (a.size() > b.size()) // lam 2 xau co do dai bang nhau
        b = '0' + b;
    if (a < b) swap(a, b);
    
    for(int i = a.size()-1; i >= 0; --i) { // duyệt từ cuối
        int temp = int(a[i]- '0') - int(b[i]- '0') - remember; // tinh hiệu 2 só cuối - nhớ
        if(temp < 0) {  // Nếu hiệu < 0 ====> + 10 thành dương
            res = char(temp + 10 +'0') + res;
            remember = 1;
        }else{
            res = char(temp + '0') + res;  // nếu không thì cộng result như bình thường
            remember = 0;
        }
    }
    return res;
}

int main(){
    int t;  cin >> t;
    while(t--){
        string x, y;  cin >> x >> y;
        cout << Sub(x,y) << endl;
    }
}

// Cho hai số rất lớn X và Y được biểu diễn như hai xâu ký tự. Nhiệm vụ của bạn là 
// tìm |X-Y|?
// Input: 
// x Dòng đầu tiên đưa vào số lượng test T.
// x Những dòng kế tiếp đưa vào các bộ test. Mỗi test gồm hai dòng: dòng thứ nhất đưa xâu 
// X; dòng tiếp theo đưa vào xâu Y. 
// x T, X, Y thỏa mãn ràng buộc : 1≤T≤100; 0≤length(X), length(Y)≤103
// .
// Output:
// x Đưa ra số kết quả mỗi test theo từng dòng. 
// Input:
// 2
// 978
// 12977
// 100
// 1000000
// Output:
// 11999
// 0999900