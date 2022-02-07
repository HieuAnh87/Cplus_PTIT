#include<iostream>
#include<algorithm>
using namespace std;
/*
    day con tang dai nhat.
    https://vietcodes.github.io/algo/lis
*/
const int maxN = 1e3+5;
int n,a[maxN] , f[maxN];
void input(){
    cin >> n ;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
}
void solve(){   
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        f[i] = 0;
        for(int j = 0 ; j < i ; j++){
            if ( a[i] > a[j])
                f[i] = max(f[i],f[j]);
        }
        f[i]++;
        res = max(res,f[i]);
    }
    cout << res << endl;
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


// Cho mảng A[] gồm n số được sinh ra ngẫu nhiên. Hãy tìm độ dài dãy tăng dài nhất các phần tử của mảng. Chú ý, dãy con của mảng không nhất thiết là liên tục. Hai phần tử giống nhau của mảng ta chỉ xem là 1 trong độ dài dãy tăng. Ví dụ với mảng A[] = {5, 8, 3, 7, 9, 1}, ta có kết quả là 3.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[]; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤103; 0≤ A[i] ≤103;
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 16
// 0 8 4 12 2 10 6 14 1 9 5 13 3 11 7 15
// 6
// 5 8 3 7 9 1
// Output:
// 6
// 3