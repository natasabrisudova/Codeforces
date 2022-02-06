/*
https://codeforces.com/contest/381/problem/A

The rules of the game are very simple. The players have n cards in a row. 
Each card contains a number, all numbers on the cards are distinct. 
The players take turns, Sereja moves first. During his turn a player can take one card:
either the leftmost card in a row, or the rightmost one. 
The game ends when there is no more cards. 
The player who has the maximum sum of numbers on his cards by the end of the game, wins.

Each of them chooses the card with the larger number during his move.


Input
The first line contains integer n (1 ≤ n ≤ 1000) — the number of cards on the table.
The second line contains space-separated numbers on the cards from left to right.
The numbers on the cards are distinct integers from 1 to 1000.

Output
On a single line, print two integers. The first number is the number of Sereja's 
points at the end of the game, the second number is the number of Dima's points 
at the end of the game.

Examples
Input
4
4 1 2 10

Output
12 5
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int i, t, s=0, d=0; 
    int c[1000];
    
    cin>>t;

    for (i=1; i<=t; i++){
        cin >> c[i];
    }

    int l=1; //left
    int r=t; //right
    
    i=1; // rounds
    while (l<=r){
        
        //first S starts
        if(i%2==1){ 
            if (c[l]>c[r]) {
                s+=c[l];
                l++;
            }
            else {
                s+=c[r];
                r--;
            }
        }

        // then D
        else{
            if (c[l]>c[r]) {
                d+=c[l];
                l++;
            }
            else {
                d+=c[r];
                r--;
            }
        }
    i++;
    }

    cout << s << ' ' << d << endl;
    return 0;

}
