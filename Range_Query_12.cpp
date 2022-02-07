#include<bits/stdc++.h>
using namespace std;
long long n;
vector<long long> a1, a2;
void Run()
{
    cin>>n;
    a1.clear();
    a2.clear();
    a1.resize(n+1);
    a2.resize(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>a1[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>a2[i];
    }
    int maxx=0;
    for(int i=0; i<n; i++)
    {
        long long tmp1=0, tmp2=0;
        for(int j=i; j<n; j++)
        {
            tmp1+=a1[j];
            tmp2+=a2[j];
            if(tmp1==tmp2) maxx=max(maxx, j-i+1);
        }
    }
    cout<<maxx<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}

// In
// 1
// 6
// 0 1 0 0 0 0
// 1 0 1 0 0 1
// Out
// 4


// //  @author: QUÁCH_ĐÌNH_KIÊN
// #include <bits/stdc++.h>
// const long long mod = 1e9 + 7;
// #define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
// #define reset(a) memset(a,0,sizeof(a))
// #define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// using namespace std;
// int solution(int a[], int b[], int n){
//     for (int i = 0; i < n;i++){
//         for (int j = 0; j < n;j++){

//         }
//     }
// }
// int main(){
//     fastIO;
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int a[n], b[n];
//         input(a, n);
//         input(b, n);
//         int sum1 = 0, sum2 = 0;
//         int max = 0;
//         for (int i = 0; i < n;i++){
//             sum1 = 0, sum2 = 0;
//             int k = 0;
//             for (int j = i; j >= 0;j--){
//                 sum1 += a[j];
//                 sum2 += b[j];
//                 if(sum1 == sum2){
//                     k = i - j + 1;
//                 }
//             }
//             if(k > max)
//                 max = k;
//         }
//         cout << max << endl;
//     }
// }
