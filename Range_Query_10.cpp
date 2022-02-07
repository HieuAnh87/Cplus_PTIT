#include <iostream>

using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		int a[1000]; 
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int count=0;
		int left = 0, right = n - 1;
		while(left <= right) { 
			if(a[left] == a[right]) { 
				left++;
				right--;
			}
			else if(a[left]<a[right]){
				left++;
				a[left]+=a[left-1];
				count++;
			}
			else{
				right--;
				a[right]+=a[right+1];
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}