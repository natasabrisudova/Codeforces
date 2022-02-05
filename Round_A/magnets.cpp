/*
https://codeforces.com/contest/344/problem/A

Input
The first line of the input contains an integer n (1 ≤ n ≤ 100000) 
— the number of magnets. Then n lines follow. The i-th line (1 ≤ i ≤ n) 
contains either characters "01", if Mike put the i-th magnet in the "plus-minus"
position, or characters "10", if Mike put the magnet in the "minus-plus" position.

Output
On the single line of the output print the number of groups of magnets.

Input
6
10
10
10
01
10
10

Output
3
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int m[100000], c=0, i, t;
    cin >> t;
    for (i=0; i<t; i++){
        cin >> m[i];
    }
    for (i=0; i<t; i++){
        if (m[i]!=m[i+1]) c++;
    }

cout << c << endl;
return 0;
}
