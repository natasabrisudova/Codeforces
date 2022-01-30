/*
https://codeforces.com/contest/791/problem/A

Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?
Input

The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.
Output

Print one integer, denoting the integer number of years after which Limak will become strictly larger than Bob.
Examples

Input
4 7
Output
2

Input
4 9
Output
3

*/

#include<iostream>
using namespace std;

int main(){
     
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a >> b;
    
    int i=0;
    while (a<=b){
        a = 3*a;
        b = 2*b;
        i++;
    }
    
    cout << i;

}
