#include <bits/stdc++.h>

using namespace std;

int minfuelReturn(const vector<int> & array , int stations, int last_coordinate)
{
    int sz = array.size();

    set<int> st;

    for(int i = 0; i < sz; i++)
    {
        int subs;

        if(i == 0) subs = array[i] - 0; 
        else subs = array[i] - array[i - 1];

        st.insert(subs);
    }

        if(stations == 1)
        {
            int dist1 = array[0] - 0;
            int dist2 = (last_coordinate - array[0]) * 2;

            int max_value = max(dist1 , dist2);
            return max_value;
        }
    
        int last_spaces = last_coordinate - array[sz - 1];
    
        int max_val = last_spaces * 2;
    
        for(auto set_element : st)
        {
            if(set_element > max_val) max_val = set_element;
        }
    
        return max_val;
    
}

int main() 
{
    int testcase;
    cin >> testcase;

    int n , x;

    for(int i = 0; i < testcase; i++)
    {
        vector<int> stationCD;
        cin >> n >> x;

        for(int j = 0; j < n; j++)
        {
            int number;
            cin >> number;
            stationCD.emplace_back(number);
        }

        cout << minfuelReturn(stationCD , n , x) << endl;
    }
    return 0;
}
