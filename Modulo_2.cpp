#include<iostream>
#include<cmath>
using namespace std;

int main(){
    short t;   cin >> t;
    while(t--){
    int a,b;  cin >> a >> b;
    int p=-1;
    for(int i=0; i<b; i++){
        if((a * i) % b==1){ //tim mod be nhat nen tm dc thi break luon
            p = i;
            break;
        }
    }
        cout << p <<  endl;
    }
}