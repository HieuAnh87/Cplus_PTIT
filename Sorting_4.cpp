#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void run(){
    int n, m;  cin >> n >> m;
    int a[n+1], b[m+1], check[100000], c[m+n+1];
    for(int i = 0; i <= 100000; ++i) {
            check[i] = 1;
        }
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            c[i] = a[i];
        }
        for(int i = 0; i < m; ++i) {
            cin >> b[i];
            c[i+n] = b[i];
        }
        sort(c, c+n+m);
        for(int i = 0; i < n+m; ++i) {
            if(check[c[i]]==1){
                cout << c[i] << " ";
                check[c[i]] = 0;
            }
        }
        cout << endl;
        for(int i = 0; i < n; ++i) {
            if(!check[a[i]]){
                for(int j = 0; j < m; ++j) {
                    if(a[i] == b[j]){
                        cout << b[j] << " ";
                        check[a[i]] = 1;
                        break;
                    }
                }
            }
        }
        cout << endl;
}


int main(){
    int t;  cin >> t;
    while(t--) run();
        
}

// Input:


// 1
// 5 3
// 1 2 3 4 5
// 1 2 3
 
// Output:

// 1 2 3 4 5

// 1 2 3


 
