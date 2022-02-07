#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    int n, k, b;
    cin >> n >> k >> b;
    int a[b];
    int check[n];
    reset(check);
    reset(a);
    int res = INT_MAX;
    for (int i = 0; i < b;i++){
        cin >> a[i];
        check[a[i] - 1] = 1;
    }
    // if(check[i] == 0)
    for (int i = 0; i < n - k + 1;i++){
        int isBroken = 0;
        for (int j = i; j < i + k;j++){
            if(check[j] == 1){
                isBroken++;
            }
        }
        // cout << i << " " << i + k << " " << isBroken << endl;
        res = min(res, isBroken);
    }
    cout << res << endl;
}


// Tuyến đường ven biển của thành phố Highland có N chiếc đèn. Không may cơn bão vừa rồi đã làm hỏng B chiếc đèn.

// Để khắc phục sự cố và nhanh chóng khôi phục lại hoạt động du lịch, chính quyền thành phố đã quyết định sửa tạm thời một số đèn đường bị hỏng sao cho có ít nhất một khu vực có K chiếc đèn liên tiếp hoạt động.
// Các bạn hãy xác định xem số đèn đường cần phải sữa chữa ít nhất là bao nhiêu?
// Input
// Dòng đầu tiên gồm 3 số nguyên dương N, K và B (1 ≤ B, K ≤ N ≤ 100 000).
// B dòng tiếp theo, mỗi dòng chứa vị trí của một chiếc đèn bị hỏng.
// Output
// In ra số đèn đường cần sửa ít nhất sao cho có một khu vực có nhiều hơn hoặc bằng K chiếc đèn hoạt động.
// Ví dụ:
// Input
// 10 6 5
// 2
// 10
// 1
// 5
// 9
// Output
// 1
