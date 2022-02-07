#include<bits/stdc++.h>
using namespace std;
string s;
int m,n;
long long slove(){
	long long dp[m+5][n];
	memset(dp,0,sizeof(dp));
	dp[0][(s[0]-'0')%n]++;
	for(int i=1;i<m;i++){
		dp[i][(s[i]-'0')%n]++;
		for(int j=0;j<n;j++){
			dp[i][j]+=dp[i-1][j];
			dp[i][(j*10 +(s[i]-'0'))%n]+=dp[i-1][j];
		}
	}
	return dp[m-1][0];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>m>>n>>s;
		cout<<slove()<<endl;
	}
}

// Cho xâu ký tự S chỉ bao gồm các ký tự số. Nhiệm vụ của bạn là đếm các xâu con của S chia hết cho N. Ví dụ S =”1234”, N = 4 ta nhận được kết quả là 4 tương ứng với 4 xâu con chia hết cho 4: 4, 12, 24, 124. Xâu con có thể chứa các kí tự không liên tiếp nhau.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số M, N, trong đó M là độ dài xâu S; phần tiếp theo là xâu S gồm M số.
// T, M, N, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ M, N <= 100, 1 <= Length(S)≤50.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 4 4
// 1234

// 3 6
// 676
// Output:
// 4
// 3

 