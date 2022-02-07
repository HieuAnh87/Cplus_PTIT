#include <iostream>
using namespace std;
 
 void check(int n){
     for(int i = 2; i <= n; i++){
            int dem = 0;
            while(n % i == 0){
                ++dem;
                n /= i;
            }
            if(dem){
                cout << i;
                if(dem >= 1) cout << " " << dem;
                if(n > i){
                    cout << " ";
                }
            }
        }
 }
int main(){
    int n,t;
    cin >> t;

    while(t--){
        cin >> n;
        check(n);
        
        cout << endl;
    }
}
// Cho số tự nhiên N. 
//Nhiệm vụ của bạn là hãy đưa ra tất cả các ước số nguyên tố của N cùng lũy thừa của nó.

// Input: 
// 2
// 100
// 35
// Output:
// 2 2 5 2
// 5 1 7 1
