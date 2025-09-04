/*Problem Description
Given a number A. Return the square root of the number if it is a perfect square, otherwise return -1.

Problem Constraints
1 <= A <= 10^8

Input Format
First and the only argument is an integer A.

Output Format
Return an integer which is the square root of A if A is a perfect square, otherwise return -1.

Example Input
Input 1:
A = 4
Input 2:
A = 1001

Example Output
Output 1:
2
Output 2:
-1

Example Explanation
Explanation 1:
sqrt(4) = 2
Explanation 2:
1001 is not a perfect square.
*/
#include<iostream>
#include <cmath>
using namespace std;
int sqrt_fun(int x){
    int root = sqrt(x);
    if(root * root == x){
    return sqrt(x);
    }
    return -1;
}
int main(){
    int x;
    cin >> x;
    cout<<sqrt_fun(x)<<endl;
    return 0;
}
