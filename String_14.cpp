#include<iostream>
#include<cmath>
using namespace std;

void run(){
     string s;  cin.ignore(); //= > dùng cin.ignore() để xóa ký tự đầu tiên trong bộ nhớ đệm.
    getline(cin,s); // vì là cả 1 câu nên phải dùng getline() để lấy chuỗi có khoảng trắng.
    int dem=1;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' ' ||s[i]=='\t') dem++;
    }
    cout << dem << endl;
}


int main(){
    int t; cin >> t;
    while(t--) run();
}


// Input:
// 2
// Print the number of words
// Print the number of words present in the string

// Output:
// 5
// 9