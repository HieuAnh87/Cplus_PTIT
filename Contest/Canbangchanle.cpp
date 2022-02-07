#include <iostream> 
#include <math.h> 
using namespace std; 
int ChanLe(int n){ 
    int check=0; 
    while(n>0){ 
        int i=n%10; 
        if(i%2==0) check++; 
        else check--; 
        n/=10; 
        } 
        if(check==0) return 0; 
        else return 1; 
} 

int main(){ 
    int n,dem=0; cin>>n; 
    for(int i=pow(10,n-1); i<pow(10,n);i++){ 
        if(ChanLe(i)==0){ 
            cout<<i<<" "; 
            dem++; 
        } 
        if(dem==10){ 
            cout<<endl; 
            dem=0; 
        } 
    } 
    return 0; 
}


// Một số được gọi là “cân bằng chẵn lẻ” nếu số chữ số chẵn và số chữ số lẻ là bằng nhau. Tất nhiên khi đó số chữ số của nó phải là chẵn.

// Cho số N là một số chẵn (1<N<7). Hãy liệt kê các số cân bằng chẵn lẻ có N chữ số. Mỗi dòng ghi ra 10 số thỏa mãn.
// Input
// Chỉ có duy nhất số N (chẵn)
// Output
// Ghi ra các số cân bằng chẵn lẻ có N chữ số theo thứ tự từ nhỏ đến lớn. Mỗi dòng ghi 10 số.
// Ví dụ
// Input
// 2
// Output

// 10 12 14 16 18 21 23 25 27 29

// 30 32 34 36 38 41 43 45 47 49

// 50 52 54 56 58 61 63 65 67 69

// 70 72 74 76 78 81 83 85 87 89

// 90 92 94 96 98