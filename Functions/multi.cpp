/* 
 
Problem Description

Given two numbers A and B, return their product.

Problem Constraints

1≤𝐴≤10^4
1≤A≤10^4

1≤𝐵≤10^4
1≤B≤10^4

Input Format

First argument is an integer A.

Second argument is an integer B.

Output Format

Return a single integer which is the product of A and B.

Example Input

Input 1:
A = 4, B = 3

Input 2:
A = 14, B = 34

Example Output

Output 1:
12

Output 2:
476

Example Explanation

Explanation 1:

4
×
3
=
12
4×3=12

Explanation 2:

14
×
34
=
476
14×34=476
*/

#include<iostream>

using namespace std;

int multi(int x,int y){
    return x*y;
}
int main(){
    int x,y;
    cin >> x >>y;
   cout<<multi(x,y)<<endl; 
   return 0;
}
