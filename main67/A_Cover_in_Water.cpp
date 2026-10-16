#include <bits/stdc++.h>

using namespace std;

int minVal(vector<char> str)
{
    int pos1;
    int flag {};
    
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '.') 
        {
            pos1 = i;
            flag = 1;
            break;
        }
    }
    
    int count {};
    int minvalCnt{};

    if(flag == 1)
    {
        for(int i = pos1; i < str.size(); i++)
        {
            // minvalCnt += count;
            if(str[i] == '.') 
            {
                count++;
                minvalCnt++;
                if(count > 2) return 2;
            }
    
            else if(str[i] != '.')
            {
                count = 0;
            }
            // count = 0;
        }
    
        return minvalCnt;
    }

    else return 0;
}

int main() 
{
    int testcases;
    cin >> testcases;

    for(int i = 0; i < testcases; i++)
    {
        int inputVal;
        cin >> inputVal;

        vector<char> str;

        for(int j = 0; j < inputVal; j++)
        {
            char c;
            cin >> c;

            str.emplace_back(c);
        }

        cout << minVal(str) << "\n";
    }
    return 0;
}