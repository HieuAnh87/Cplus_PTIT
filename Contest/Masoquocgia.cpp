#include <iostream>
#include <string.h>
using namespace std;

string Xoa_084 (string s) {
    int n=s.length();
    s.erase(s.find("084"),3);
return s;
}
int main()
{
    int t; cin>>t;
    while (t--) {
        string s;
        cin>>s;
        cout<<Xoa_084(s)<<endl;
    }
    
    
    return 0;
}


// Trong mã hàng hóa  người ta thường ghi kèm theo mã số quốc gia sản xuất. Nếu sản xuất tại Việt Nam thì mã tương ứng là 084. Bài toán đặt ra là cho một dãy mã dạng số nguyên không quá 18 chữ số. Hãy loại bỏ đoạn mã 084 ra khỏi mã ban đầu.

// Dữ liệu đảm bảo dãy mã luôn có duy nhất một lần cụm 084.

// Input

// Dòng đầu ghi số bộ test. Mỗi test là một số nguyên có ít nhất 4 chữ số nhưng không quá 18 chữ số.

// Output

// Ghi ra kết quả sau khi loại bỏ 084

// Ví dụ

// Input
// 3

// 123084567

// 3300478808445

// 1084
// Output
// 123567

// 3300478845

// 1