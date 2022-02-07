#include<iostream>
#include<cmath>
using namespace std;

void run(){
    string s;  getline(cin, s);
    for(int i=0; i<s.size()-1; i++){
        int sum=1;
        for(int j=i+1; j<s.size(); j++){
            if(s[i]==s[j]){
                sum=0;
                s[j]='$';
            }
        }
        if (!sum) s[i] = '$';
    }
    for(int i = 0; i < s.size(); ++i) {
        if(s[i]!='$')
            cout << s[i];
        }
    cout << endl;
}
int main(){
    int t;   cin >> t;
    cin.ignore();
    while (t--) run();
}

//Ý tưởng: cho chạy i và j. SO sánh i và j. 
// Nếu trùng thì đổi luôn ký tự cả 2 để tránh lặp lại


// Input:
// 2
// ABCDEAABC
// ABC
// Output:
// DE
// ABC