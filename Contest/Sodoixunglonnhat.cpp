#include<iostream>
#include<algorithm>
using namespace std;

string s;
int dem[10] = {0};
void input(){
    cin >> s;
    for(int i = 0 ; i < 10 ; i++)
        dem[i] = 0;
}
bool khongchuasochan(){
    for(int i = 1 ; i <= 9 ; i++){
        if ( dem[i] % 2 == 0 && dem[i] != 0) return false;
    }
    return true;
}
void solve(){
    for(int i = 0 ; i < s.length() ; i++)
        dem[s[i]-'0']++;
    if( khongchuasochan() == true){
        int res = 0;
        int cs ;
        for(int i = 1 ; i <= 9 ; i++){
            if(dem[i] != 0){
                if( dem[i] > res){
                    res = dem[i];
                    cs = i;
                }
                if ( dem[i] == res)
                    cs = max(cs,i);
            }
        }
        while(res--) cout << cs ;
        cout << endl;
    }
    else{
        int res = 0;
        int cs ;
        for(int i = 9 ; i >= 0 ; i--){
            if(dem[i] % 2 == 0){
                int x = dem[i]/2;
                while(x--) cout << i ;
            }
            else{
                if( dem[i] > res){
                    res = dem[i];
                    cs = i;
                }
                if ( dem[i] == res)
                    cs = max(cs,i);
            }
        }
        while(res--) cout << cs ;
        for(int i = 0 ; i < 10 ; i++){
            if(dem[i] % 2 == 0){
                int x = dem[i]/2;
                while(x--) cout << i ;
            }
        }
        cout << endl;
    }


}
int main(){
    int t=1; 
    cin>>t; 
    while(t--){ 
        input();
        solve();
    }
    return 0;
}


// Cho số nguyên dương gồm N chữ số. Bạn chỉ được phép thực hiện hai thao tác:

// Thao tác A: loại bỏ tất cả các chữ số giống nhau.

// Thao tác B: sắp đặt lại vị trí các chữ số.

// Hãy tìm số nguyên đối xứng lớn nhất có thể được tạo ra bằng cách thực hiện hai thao tác A hoặc B ở trên. Ví dụ với số N = 1122233300000998, ta có thể tạo ra số đối xứng lớn nhất là 910000019 bằng cách thực hiện các thao tác A, B như sau:

// Thao tác A: loại bỏ các chữ số 2 ta nhận được số 1133300000998.

// Thao tác A: loại bỏ các chữ số 3 ta nhận được số 1100000998.

// Thao tác A: loại bỏ các chữ số 8 ta nhận được số 110000099.

// Thao tác B: sắp đặt lại các số còn lại 110000099 để được số 910000019.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số nguyên dương có N chữ số.
// T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤1000.
// Output:

// Đưa ra số nguyên lớn nhất được tạo ra bởi thao tác A, B của mỗi test theo từng dòng.
// Input:
// Output:
// 6

// 12345000

// 11233300000998

// 3335

// 333566

// 33355500
 
// Output:
// 5

// 910000019

// 333

// 63336

// 555