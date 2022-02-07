#include <iostream>
#include <math.h>
using namespace std;

bool So_lien_ke (string n) {
    for (int i=0; i<n.length()-1; i++) {
        int check = abs ((int)n[i+1] - (int) n[i]);
        if ( check!=1) return 0;
    }
    return 1;
}

int main()
{
    int t; cin>>t;
    while (t--) {
        string n; cin>>n;
        if (So_lien_ke(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


// Viết chương trình kiểm tra số nguyên dương N có thỏa mãn tính chất: tất cả các chữ số cạnh nhau chỉ sai khác nhau đúng một đơn vị hay không. Ví dụ: số 123212 là số thỏa mãn, số 34578 không thỏa mãn.

// Input

// Dòng đầu ghi số số test (không quá 20). Mỗi test là 1 số nguyên dương N có ít nhất 2 chữ số, nhưng không quá 18 chữ số.

// Output

// Ghi ra YES hoặc NO

// Ví dụ

// Input
// 3
// 123212
// 5654345676
// 10233211123
// Output
// YES
// YES
// NO