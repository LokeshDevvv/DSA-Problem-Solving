#include<iostream>
using namespace std;
//6 1 2 3 
bool prefect_num(int n){
    int sum = 1;
    for(int i = 2;i*i<=n;i++){
        if(n%i == 0){
            sum +=i;
            if(i != n/i){
                sum += n/i;
            }
    }
    }
if(sum == n) return true;
return false;
}
int main(){
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int n ;
        cin >> n;
        if(prefect_num(n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
