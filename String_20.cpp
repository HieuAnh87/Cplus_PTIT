#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;  
    cin >> t;
    cin.ignore();
    while(t--){
        string s;  getline(cin,s);
        int n=s.size();
        int pos=n;
        for(int i=n-1; i>=0;i--){
            if(s[i]==' '){
                for(int j=i+1; j<pos;j++){
                    cout << s[j];
                }
                pos=i;
                cout << " ";
            }
            if(i==0) for(int j=i;j<pos; j++) cout << s[j];
        }
        cout << endl;
    }
}


// Cho xâu ký tự S. Nhiệm vụ của bạn là đảo ngược các từ trong S. Ví dụ S =  “I like this program very much”, ta nhận được kết quả là “much very program this like I”.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S.
// T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S)≤103.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input
// 2
// I like this program very much
// much very program this like I
// Output:
// much very program this like I
// I like this program very much

 