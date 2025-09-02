#include<iostream> 
using namespace std;

int main(){
    int n;
    cin >> n;
    bool isSpecial = false;
    for(long long int i  = 2;i*i<=n;i++){
       long long pow = i;
       while(pow<=n){
           pow *=i;
           if(pow == n){
               isSpecial = true;
               break;
           }

       }
        if(isSpecial)break;
    }
    if (isSpecial) cout << "true" << endl;
    else cout << "false" << endl; 
    return 0;
}

