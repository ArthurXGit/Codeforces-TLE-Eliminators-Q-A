/* 
    Problem : A Jagged Swaps
    Approach : if starting value of the array is 1 , then it can be sorted as stated in the question conditions. 
               if starting value of the array is not 1 , then not possible to sort according to the condition given in the question.
    mistake i did : not properly analyse testcases.....
*/

#include <bits/stdc++.h>

using namespace std;

string is_sorting_possible(vector<int>& a)
{
    // if(a[0] == 1) return "YES";
    // else return "NO";

    // int count {};
    int flag {};

    for(int i = 0; i < a.size() - 1; i++)
    {
        if(a[i + 1] != a[i] + 1)
        {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0) return "YES";

    else
    {
        for(int i = 1; i < a.size() - 1; i++)
        {
            // mistake : n - 1 in place of 0
            if(a[0] != 1) return "NO";
            else if(a[i] > a[i - 1] && a[i] > a[i + 1]) return "YES";
        }
  
        return "NO";
    }
    
}

int main() 
{
    int testcases;
    cin >> testcases;

    for(int i = 0; i < testcases; i++)
    { 
        int target;
        cin >> target;

        vector<int> a;
        for(int j = 0; j < target; j++)
        {
            int input;
            cin >> input;

            a.emplace_back(input);
        }

        cout << is_sorting_possible(a) << "\n";
    }
    return 0;
}