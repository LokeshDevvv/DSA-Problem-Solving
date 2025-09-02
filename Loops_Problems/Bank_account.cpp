#include<iostream>
using namespace std;

int main(){
    int a,op,x;
    cin >> a>> op >> x;
    int bank = 0;
    if(op == 1){
        bank = a+x;
    }
    else if( op == 2){
        if(a > x){
        bank = a-x;
        cout<<bank<<endl;
        }
        else cout<<"Insufficient Funds"<<endl;
    }
    return 0;
}
