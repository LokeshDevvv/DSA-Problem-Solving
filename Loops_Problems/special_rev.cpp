#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int sign = 1;
    if(n<0) sign = -1;
    int rev = 0;
    int temp =abs(n);
    while(temp != 0){
        int ld = temp%10;
        rev = rev*10+ld;
        temp /=10;
    }
    cout<<rev*sign<<endl;

}
