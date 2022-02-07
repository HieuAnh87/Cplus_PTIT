#include<iostream>
using namespace std;

void run(){
    string n; cin >> n;
    int l = n.length();
    if(n[l-1]=='6' && n[l-2]=='8') cout << "1" <<endl;
    else cout << "0" << endl;
}

int main(){
    int t; cin >> t;
    while(t--) run();
}


// John rất thích con số 86 vì theo John đó là con số may mắn. Khi bắt gặp một số nguyên X John muốn kiểm tra xem trong dạng biểu diễn của nó kết thúc là số 86 hay không? Ví dụ số 111539786 kết thúc là  số 86, còn số 123456789 thì không.


// Nhiệm vụ của bạn là viết một chương trình đọc số nguyên X và kiểm tra xem trong dạng biểu diễn của nó kết thúc là số 86 hay không?

// Input
// Dữ liệu vào gồm nhiều bộ dữ liệu tương ứng với nhiều test. Dòng đầu tiên chứa một  số nguyên dương không lớn hơn 20 là số lượng các bộ dữ liệu. Các dòng tiếp theo chứa các bộ dữ liệu, các số không quá 9 chữ số.

// Output
// Với mỗi bộ dữ liệu, ghi ra trên một dòng câu trả lời, ghi số 1 nếu trong dạng biểu diễn của nó kết thúc là số 86, ghi số 0 trong trường hợp ngược lại.

// Ví dụ
// Input:
// 3 
// 111539786 
// 123456789 
// 8686 
// Output:
// 1
// 0
// 1