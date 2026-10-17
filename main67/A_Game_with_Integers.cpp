/*
    * Problem : A Game with integers
    * Approach : If n is div by 3 -> vova wins
                 if n is not div by 3 -> vanya wins
    * "If 10 moves have passed and Vanya has not won, then Vova wins." it has nothing to do with question , just a story added
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

