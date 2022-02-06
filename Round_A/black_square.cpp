/*
https://codeforces.com/contest/431/problem/A

In this game, the phone's screen is divided into four vertical strips.
Each second, a black square appears on some of the strips.
According to the rules of the game, Jury must use this second to touch the
corresponding strip to make the square go away. As Jury is both smart and lazy,
he counted that he wastes exactly ai calories on touching the i-th strip.

You've got a string s, describing the process of the game and numbers
a1, a2, a3, a4. Calculate how many calories Jury needs to destroy 
all the squares?

Input
The first line contains four space-separated integers a1, a2, a3, a4.

The second line contains string s (1 ≤ |s| ≤ 105), 
where the і-th character of the string equals "1", if on the i-th second 
of the game the square appears on the first strip, "2", if it appears on the 
second strip, "3", if it appears on the third strip, "4", if it appears on the fourth strip.

Output
Print a single integer — the total number of calories that Jury wastes.

Examples
Input
1 2 3 4
123214

Output
13
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int a,b,c,d;
    char s[100001];
    
    cin >> a >> b >> c >> d >> s;
    
    int ans=0;
    for (int i=0; i<strlen(s); i++){
        if (s[i]=='1') ans+=a;
        else if (s[i]=='2') ans+=b;
        else if (s[i]=='3') ans+=c;
        else if (s[i]=='4') ans+=d;
    }
    
    cout << ans << endl;
    return 0;
}
