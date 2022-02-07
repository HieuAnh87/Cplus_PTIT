#include <bits/stdc++.h>
using namespace std;
int solution(int a[], int n) {
    int res = -1;
    for (int i = 1; i < n;i++){
        for (int j = 0; j < i;j++){
            if(a[i] > a[j] && a[i] - a[j] > res){
                res = a[i] - a[j];
            }
        }
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << solution(a, n) << endl;
    }
    return 0;
}