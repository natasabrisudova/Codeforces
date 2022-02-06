/*
https://codeforces.com/contest/427/problem/A

If there is no police officer free (isn't busy with crime) 

during the occurrence of a crime, it will go untreated.
Given the chronological order of crime occurrences and recruit hirings, 
find the number of crimes which will go untreated.

Input
The first line of input will contain an integer n (1 ≤ n ≤ 105),
the number of events. The next line will contain n space-separated integers.
If the integer is -1 then it means a crime has occurred. 
Otherwise, the integer will be positive, the number of officers
recruited together at that time. No more than 10 officers will be 
recruited at a time.

Output
Print a single integer, the number of crimes which will go untreated.

Examples
Input
3
-1 -1 1

Output
2

Input
8
1 -1 1 -1 -1 1 1 1

Output
1

*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, a;
    cin >> n;
    
    int p=0, ans=0;
    for (int i=0; i<n; i++){
        cin >> a;
        if (a==-1) {
            if (p==0) ans++;
            else p--;
        }
        else p+=a;
    }
    
    cout << ans << endl;
    return 0;
}

