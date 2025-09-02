#include<iostream>

using namespace std;

int binary_to_decimal(int n){
    int last_digit;
    int r;
    int pow_2 = 1;
    while(n != 0){
        last_digit  = n % 10;
        r = r + last_digit*pow_2;
        n = n/10;
        pow_2 = pow_2*2;
    }
    return r;
}

int main(){
    int n;
    cin >> n;
    cout<<binary_to_decimal(n)<<endl;
    return 0;
}
