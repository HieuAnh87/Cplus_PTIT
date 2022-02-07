#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        char Pc101[] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
        char Pc102[] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
        float score = 0;
        int PostCode;
        cin >> PostCode;
        int ch = 15;
        char choose;
        int i = 0;
        int k = 0;
        if(PostCode == 101){
            while(ch--){
                cin >> choose;
                if(choose == Pc101[i]){
                    k++;
                }
                i++;
            }
        }else {
            while(ch--){
                cin >> choose;
                if(choose == Pc102[i]){
                    k++;
                }
                i++;
            }
        }
        float tmp = (float)10 / 15;
        score = (float)k * tmp;
        cout << fixed  << setprecision(2) << score << endl;
    }
}

// Nhiệm vụ của bạn là chấm điểm cho bài thi của các thí sinh trong một phòng thi. Điểm thi được chấm trên thang điểm 10, làm tròn đến 2 chữ số phần thập phân.
// Input:
// Dòng đầu tiên đưa vào số bài thi T.
// Các dòng tiếp theo mỗi đưa vào mã đề thi và các đáp án làm bài của thí sinh cách nhau bởi một khoảng trống. Giả sử tất cả các đáp án đều được điền đầy đủ.
// T thỏa mãn điều kiện 0 < T <= 1000
// Output:
// Điểm thi được làm tròn đến hai chữ số phần thập phân.
// Input
// 1
// 101 A B B A D C C A B D C C A B D
// Output
// 10.00