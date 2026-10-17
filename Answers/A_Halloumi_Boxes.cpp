#include <bits/stdc++.h>

using namespace std;

string checker(const vector<int>& array, int k1)
{
    if (is_sorted(array.begin(), array.end()))
        return "YES";

    else if (k1 == 1)
        return "NO";

    return "YES";
}

int main()
{
    int testcase;
    int n, k;

    cin >> testcase;

    for (int i = 1; i <= testcase; i++)
    {
        cin >> n >> k;
        vector<int> halloumi_array;

        for (int j = 0; j < n; j++)
        {
            int number;
            cin >> number;
            halloumi_array.emplace_back(number);
        }

        cout << checker(halloumi_array , k) << endl;
    }

    return 0;
}