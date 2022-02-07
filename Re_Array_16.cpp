#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void run(){
    string s; cin>>s;
    int mark=-1; //vi tri can swap 1
    int n=s.size();
    for(int i=n-2; i>=0; i--){
        if(s[i]>s[i+1]){
            mark=i; //vi tri dau tien ma cs trc lon hon cs sau , 2413357,mark=1 (or 14335,mark=1)
            break;
        }
    }

    int min=s[mark] - s[mark+1];  // min = 3(2413357) or min=1(14335)
    int pos=mark+1;  // vi tri can swap 2, 
                    //Lấy mark + 1 bởi vì nếu mà số cần tìm ngay ở ngay cạnh thì sẽ lưu kqua
                    //để tránh bị trôi bởi vì điều kiện (tmp < min) vdu 14335 thì pos = 2
    for(int i=mark+1; i<n; i++){
        int tmp = s[mark] - s[i];
        if(s[mark] > s[i] && tmp < min ){ 
            pos = i;            //2413357, mark=1, pos=3
            min = tmp;          //14335, mark=1, pos vẫn =2 (vì không tmp nào < min=1 cả)
        }
    }
    if(mark==-1){ // s là dãy số tăng dần - không thay đổi
        cout << -1 << endl;
        return;
    }
    else{
        swap(s[mark], s[pos]); // đổi chỗ 2 số đã tìm
        cout << s << endl;
    }
}

int main(){
    int t;   cin >> t;
    while(t--)  run();
}



// Input
// 2

// 12435

// 12345
// Output

// 12345

// -1