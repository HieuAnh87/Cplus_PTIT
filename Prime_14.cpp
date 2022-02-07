//Số có đúng cxac 3 ước só => là số bình phương => Check SNT => ^2
#include<iostream>
#include<cmath>
using namespace std;

bool snt(int n) {
	if (n<2) return false;
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0) return false;
	return true;
}

int main(){
    int n, t; cin >> t;
    while(t--){
        cin >> n;
        for(int i=2; i<=sqrt(n); i++){
            if(snt(i)){
                cout << i*i << " ";
            }
        }
        cout << endl;
    }
}