// (a ^ b) % M = ((a % M) ^ b) % M.
// Thuat toan ngay tho
#include<iostream>
#include<cmath>
using namespace std;

long long power(long long a, long long b, long long c) {
    long long ans = 1;
    for(int i = 1; i <= b; i++) {
        ans *= a;
        ans %= c;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int x, y, p;
        cin >> x >> y >> p;
        cout << power(x, y , p) << endl;
    }
}


// Cho ba số nguyên dương x, y, p. Nhiệm vụ của bạn là tính (xy) %p. Ví dụ với x = 2, y = 3, p = 5 thì (23)%5=3.
// Input:
// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp mỗi dòng đưa vào một test. Mỗi test là bộ ba x, y, p được viết cách nhau một vài khoảng trống.
// T, x, y, p thỏa mãn ràng buộc : 1≤T≤100; 1≤x, y≤106; 1≤P≤109+7.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// Output:
// 2
// 2 3 5
// 3 2 4
// Output:
// 3
// 1
