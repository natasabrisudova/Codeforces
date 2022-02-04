/*
https://codeforces.com/problemset/problem/236/A

This is his method: if the number of distinct characters in one's 
user name is odd, then he is a male, otherwise she is a female. 
You are given the string that denotes the user name, please help 
our hero to determine the gender of this user by his method.

Input
The first line contains a non-empty string, that contains
only lowercase English letters — the user name. 
This string contains at most 100 letters.

Output
If it is a female by our hero's method, 
print "CHAT WITH HER!" (without the quotes), 
otherwise, print "IGNORE HIM!" (without the quotes).

Examples
Input
wjmzbmr

Output
CHAT WITH HER!

Input
xiaodao

Output
IGNORE HIM!

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    cin >> s;
    int same = 0, dif=0; 
    
    for (int i=0; i<s.size(); i++){
        for (int j=i+1; j<s.size(); j++){
            if (s[i]==s[j]) same++;
        }
        
        if (same==0) dif++;
        same = 0;
    }

    if (dif % 2 == 0) cout <<  "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

}
