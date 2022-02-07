#include<bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
void Run()
{
    cin>>n>>k;
    a.clear();
    a.resize(n);
    int count=0;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        if(a[i]<=k) count++;
    }
    int bad=0;
    for(int i=0; i<count; i++) 
    {
        if(a[i]>k) bad++;
    }
    int ans=bad;
    for(int i=0, j=count; j<n; j++, i++)
    {
        if(a[i]>k) bad--;
        if(a[j]>k) bad++;
        ans=min(ans, bad);
    }
    cout<<ans;
    cout<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}


// Cho mảng A[] gồm n số nguyên dương và số k. Nhiệm vụ của bạn là hãy sắp đặt lại các phần tử của mảng sao cho các số nhỏ hơn hoặc bằng k đứng cạnh nhau. Ví dụ với mảng A[] = {2, 1, 5, 6, 3}, k = 3 ta chỉ cần thực hiện 1 phép đổi chỗ để có mảng A[] = {2, 1, 3, 6, 5}.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[] và số k; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.
// T, n, k, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤107; 1≤ A[i], k ≤107;
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 5  3
// 2  1  5  6  3
// 7  5
// 2  7  9  5  8  7  4

// Output:
// 1
// 2