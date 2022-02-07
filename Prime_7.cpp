#include<iostream>
#include<cmath>
using namespace std;

bool snt(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0) return false;
    return true;
}

void run(){
    int n;  cin >> n;
    int count=0;
    for(int i=2; i<=n; i++){
        if(n%i==0 && snt(i)){
            count++;
            n/=i;
        }
    }
    if(count==3 && n==1) cout << 1 << endl;
    else                 cout << 0 << endl;
}

int main(){
    short t; cin >> t;
    while(t--) run();
}

// idea: chạy bộ đếm -> nếu =3 và n=1 thì out.

// Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba số khác nhau. Ví dụ N=30 là số Sphenic vì 30 = 2×3×5;  N = 60 không phải số Sphenic vì 60 = 2×2×3×5. Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Spheic hay không?

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số nguyên dương N.
// T, N thỏa mãn ràng buộc : 1≤T≤100; 1≤N≤10000.
// Output:

// Đưa ra 1 hoặc 0 tương ứng với N là số Sphenic hoặc không của mỗi test theo từng dòng.

// Input:
// 2
// 30
// 60
// Output:

// 1
// 0