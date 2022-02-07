#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
        int n;
        cin >> n;
        int a[n][3];
        for (int i = 0; i < n;i++){
            for (int j = 0; j < 3;j++){
                cin >> a[i][j];
            }
        }
        int is1 = 0;
        int count = 0;
        for (int i = 0; i < n;i++){
            is1 = 0;
            for (int j = 0; j < 3;j++){
                if(a[i][j] == 1)
                    is1++;
            }
            if(is1 >= 2){
                count++;
            }
        }
        cout << count << endl;
}


// Cho ma trận A[] có N hàng và 3 cột, trong đó các vị trí là các giá trị nhị phân (0 hoặc 1). Hãy đếm xem có bao nhiêu hàng mà số lượng số 1 nhiều hơn số lượng số 0.

// Input

// Dòng đầu ghi số nguyên dương N (không quá 1000).

// N dòng tiếp theo, mỗi dòng ghi 3 giá trị nhị phân.

// Output

// Ghi ra số dòng mà số lượng số 1 nhiều hơn số lượng số 0.

// Ví dụ

// test 1:
// 3
// 1 1 0
// 1 1 1
// 1 0 0
// Output
// 2
// test 2:
// Input
// 2
// 1 0 0
// 0 1 1
// 1