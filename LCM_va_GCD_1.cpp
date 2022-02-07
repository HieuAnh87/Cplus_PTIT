#include <iostream>
#include<cmath>

using namespace std;

long long gcd(long long a, long long b){
	 if (a == 0 || b == 0){
        return a + b;
    }
	while(a*b != 0){
    	if(a>b) a%=b;
    	else    b%=a;
    }
    return a + b;
}
int main(){
    int t;
    cin >> t;
    long long a, b;
    while(t--){
		cin >> a >> b;
		cout << a*b /gcd(a,b) <<" "<< gcd(a,b) << endl;
    }
    return 0;
}