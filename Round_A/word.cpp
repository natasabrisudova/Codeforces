/*

https://codeforces.com/contest/59/problem/A

Input
The first line contains a word s — it consists of uppercase 
and lowercase Latin letters and possesses the length from 1 to 100.

Output
Print the corrected word s. If the given word s has strictly more 
uppercase letters, make the word written in the uppercase register, 
otherwise - in the lowercase one.

Input
HoUse

Output
house

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    cin >> s;
    int lw=0,up=0;
    
    for (int i=0; i<s.size(); i++){
        if (isupper(s[i])) up++;
        else lw++;
    }
    
    for (int i=0; i<s.size(); i++){
        if (up>lw) s[i] = toupper(s[i]); 
        else s[i] = tolower(s[i]);
    }
    
cout << s;
}
