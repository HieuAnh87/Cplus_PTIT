#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
string s;
long long solve(int k){
	int dem=0;
	for(int i=0;i<s.length();i++){
		int sum=0;
		for(int j=i;j<s.length();j++){
			sum=sum*10+s[j]-'0';
			sum=sum%k;
			if(sum==0){
				dem++;
			}
		}
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<solve(8)-solve(24)<<endl;
	}
}


// Cho xâu ký tự S bao gồm các số từ 0 đến 9. Nhiệm vụ của bạn là đếm số các xâu con của S là số chia hết cho 8 và không chia hết cho 3.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự số S.
// T, S thỏa mãn ràng buộc: 1≤ T ≤100; 0≤ Length(S) ≤103.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 888
// 6564525600
// Output:

// 5
// 15