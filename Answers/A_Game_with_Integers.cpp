/*
    * Problem : A Game with Integers
    * Approach : if n is div by 3 -> vova wins
                 if not -> vanya wins

    * "If 10 moves have passed and Vanya has not won, then Vova wins." just story , nothing to do with question.
*/

#include <bits/stdc++.h>

using namespace std;

string winner(int n)
{
    if(n % 3 == 0) return "Second";
    else return "First";
}

int main() 
{
    int testcase;
    cin >> testcase;

    for(int i = 0; i < testcase; i++)
    {
        int n;
        cin >> n;
        cout << winner(n) << "\n";
    }
    return 0;
}

