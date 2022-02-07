#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
long long a[1000006],flag[1000006];

void run(){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            flag[i] = -1; // mark the matrix
        }

        for(int i = 0; i < n; i++){
            if(a[i] >= 0 && a[i] < n) // lọc số không âm và < n
                flag[a[i]] = a[i];   //   flag[4] = 4;
        }

        for(int i = 0; i < n; i++) 
            cout << flag[i] << " ";
            cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) run();
}

// Ý tưởng : Tạo 1 mảng flag[i]=-1 để đánh dấu các số input. 
//            

// Input:
// 2
// 10
// -1 -1 6 1 9 3 2 -1 4 -1
// 6
// 0  -3  1  -2  3 - 4
// Output:
// -1 1 2 3 4 -1 6 -1 -1 9
// 0 1 -1 3 -1 -1