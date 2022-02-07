#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void run()
{
    int n, k;
    cin>>n>>k;
    int a[n+1];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    long long res=0;
    for(int i=0; i<n; i++)
    {   
        int it=lower_bound(a,a+n,a[i]+k)-a; //trả về vị trí đầu tiên bé hơn hoặc bằng value trong dãy.
                                            // chỉ sử dụng khi dãy sx tăng dần , xdinh vị trí từ đầu dãy 
        res+=(it-1-i); // đếm số lần cặp
        // cout << a[it] << " ";
        // cout << "lower_bound at position " << it <<  " "  << a[i]+k <<" "<< res << endl;
    }
    cout << res <<endl;
}
int main()
{
    int t;  cin>>t;
    while(t--)  run();
}


// Ý tưởng : thay vì tìm cặp hiệu a[i] - a[j] < k. Dùng lower_bound của a[j]+k để tìm số còn lại



// Cho mảng A[] gồm n số nguyên dương và số k. Nhiệm vụ của bạn là đếm số các cặp phần tử có hiệu nhỏ hơn k. Ví dụ A[] = {1, 10, 4, 2 }, k=3 ta nhận được kết quả là 2 tương ứng với hiệu các cặp (1, 2), (4, 2).

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[] và số k; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤105; 1≤ k ≤103; 1≤ A[i] ≤105.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:

// Output:

// 2
// 4 3
// 1 10 4 2
// 3 5
// 2 3 4

// 2
// 3
 