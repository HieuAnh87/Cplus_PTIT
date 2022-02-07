#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int check[1000];

void input(long long a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void temp(){
    for(int i = 0; i <= 1000; i++) {
        check[i] = 0;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        temp();
        int n;  cin >> n;
        long long a[n+1];
        input(a,n);
        
        for(int i=0; i<n; i++){
            while(a[i] > 0){
                check[a[i]%10] = 1;
                a[i] /=  10;
            }
        }
        for(int i=0; i<1000; i++){
            if(check[i]==1)
                cout << i << " ";
        }
        cout << endl;
    }
}

// Cho xâu ký tự S bao gồm các ký tự số. Nhiệm vụ của bạn là hãy điền các phép toán + 
// hoặc nhân giữa các chữ số để có được giá trị lớn nhất.
// Input: 
// x Dòng đầu tiên đưa vào số lượng bộ test T.
// x Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S. 
// x T, S thỏa mãn ràng buộc: 1≤ T ≤100; 0≤ Length(S) ≤105
// .
// Output:
// x Đưa ra kết quả mỗi test theo từng dòng. 
// Input: 
// 2
// 01230
// 891
//  Output:
// 9
// 73