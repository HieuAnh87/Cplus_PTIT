#include<iostream>
#include<algorithm>
using namespace std;

void run(){
    int n; cin >> n;
    int a[n+1][n+1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }    
    for(int i=0; i<n; i++){
        if(i==0||i==n-1){
            for(int j=0; j<n; j++){
                cout << a[i][j] << " ";
            }
        }
        else{
            for(int j=0; j<n; j++){
                if(j==0||j==n-1){
                    cout << a[i][j] << " ";
                }
                cout <<  " ";
            }
        }
        cout << endl;
    }

}

int main(){
    int t;  cin >> t;
    while(t--) run();
}