#include<iostream> 
using namespace std;

int main(){
    int n;
    cin >> n;
    int prev1 = 0 ;
    int prev2 = 1;
    int fib = 1;
    int i =2;
    while(i <= n){
        fib = prev1+prev2;
        prev1 = prev2;
        prev2 = fib;
        i++;
    }

    cout<<fib<<endl;
    return 0;
}

