#include<iostream> 
using namespace std;

int main(){
    int n,p;
    cin >> n >> p;
    int r = 1;
    for(int i  = 0;i<p;i++){
        r *= n;
    }
    cout<<r<<endl;
    return 0;
}

