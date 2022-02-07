#include<iostream>
using namespace std;

int main(){
    int t,n,k;  cin >> t;
    while(t--){
        cin >> n >> k;

        int mark,point,num;  mark=point=0;
        for(int i=2; i<=n; i++){
            while(n%i==0){
                n/=i;
                point++;
                if(point==k){
                    num=i;
                    mark=1;
                    break;
                }
            }
            if(mark==1) break;
        }
        if(mark==0) cout << -1 << endl;
        else cout << num << endl;
    }
 return 0;
}
//  ước số nguyên tố thứ k của N.
// 2                        
// 225 2                      3
// 81  5                      -1