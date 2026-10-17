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

