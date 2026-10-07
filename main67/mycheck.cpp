#include <bits/stdc++.h>

using namespace std;

vector<int> reverses(vector<int>& halloumi_store , int k , int n)
{
    int i {}; 
    int s;
    const int baseval = k;

    while(k < n)
    {   
        sort(halloumi_store.begin() + i , halloumi_store.begin()+k);
        i++;
        k++;
    }

    if(k == n)
    {
        k = baseval;
        i = 0;
        s++;
    }

    if(s == n-1) return halloumi_store;

}

int main() 
{
    int t;
    cin >> t;

    int n;
    int k;
    cin >> n >> k;

    vector<int> halloumi_store(n);

    for(int i = 0; i < halloumi_store.size(); i++)
    {
        cin >> halloumi_store[i];
    }

    vector<int> ans = reverses(halloumi_store , k , n);

    for(auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}