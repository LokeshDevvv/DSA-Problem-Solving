#include<iostream>

using namespace std;
void check_palindrome(int n){
    int rev =0;
    int temp = n;
    while(temp > 0){
        int ld = temp%10;
        rev = rev*10+ld;
        temp = temp/10;
    }
if(n == rev) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
int main(){
    int n;
    cin >>n;
    check_palindrome(n);
}
