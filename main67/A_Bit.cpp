#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x{};

    int n;
    cin >> n;

    string inp;

    for (int i = 0; i < n; i++)
    {
        cin >> inp;

        if (inp == "++X" || inp == "X++")
            x = x+1;
        if (inp == "--X" || inp == "X--")
            x--;

    }

    cout << x;

    return 0;
}