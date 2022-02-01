/*
https://codeforces.com/contest/112/problem/A

Little Petya loves presents. His mum bought him two strings of the same size.
The strings consist of uppercase and lowercase Latin letters. 
Now Petya wants to compare those two strings lexicographically. 

Input
Each of the first two lines contains a bought string. 
The strings' lengths range from 1 to 100 inclusive. 
It is guaranteed that the strings are of the same length.

Output
If the first string is less than the second one, print "-1".
If the second string is less than the first one, print "1". 
If the strings are equal, print "0". 

Examples

Input
aaaa
aaaA

Output
0

Input
abs
Abz

Output
-1

*/

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
 {
     string a,b;
     int i;
     
     cin >> a >> b;
     
     for(i=0; i<a.size(); i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
     }
     
     if(a==b) cout << "0" << endl;
        
     else{
        for(i=0;i<a.size();i++){
            if(a[i]<b[i]){
                cout << "-1" << endl;
                break;
            }
            if(a[i]>b[i]){
                cout << "1" << endl;
                break;
            }
        }
     }

     return 0;
}
