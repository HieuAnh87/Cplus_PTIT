#include <bits/stdc++.h>
using namespace std;

void run(){
    int n; cin >> n;
    int a[n+1];
    for(int i=0; i<n; i++) cin >> a[i];
    int l,r; cin >> l >> r;
    int max = l, min = r;
        for (int i = l; i < r;i++){
            if(a[i] >= a[max]){
                max = i;
            }else
                break;
        }
        for (int i = max; i < r;i++){
            if(a[i] < a[i+1]){
                cout << "No" << endl;
                return;
            }
        }
        cout << "Yes" << endl;
    }


int main(){
    int t; cin >> t;
    while(t--) run();
}
// Cho mảng A[] gồm n phần tử và một câu hỏi Q. Mỗi câu hỏi Q là bộ đôi hai số L và R. Nhiệm vụ của bạn là xác định xem dãy con của A[] trong khoảng [L, R] có tạo nên một dãy Mountain hay không ? Dãy Mountain là dãy được chia thành hai phần : phần thứ nhất tăng phần thứ hai giảm. Ví dụ với mảng A[] = {2, 3, 2, 4, 4, 6, 3, 2}, các câu hỏi Q: [0, 2], [2, 7], [2, 3], [1, 3] ta sẽ có các câu trả lời : Yes, Yes, Yes, No tương ứng với các dãy Mountain [2, 3, 2], [2, 4, 4, 6, 3, 2], [2, 4], [3, 2, 4]. 

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào n, L, R là số phần tử của mảng A[] và câu hỏi Q; phần tiếp theo đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.
// T, n, L, R,  A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ L≤ R ≤n, ≤104; 1≤ A[i] ≤103;
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:

// Output:

// 2
// 8
// 2 3 2 4 4 6 3 2
// 0 2
// 8
// 2 3 2 4 4 6 3 2
// 1 3

// Yes
// No