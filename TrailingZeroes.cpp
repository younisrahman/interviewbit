#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int solve(int a)
{
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (((a >> i) & 1) == 1)
        {
            break;
        }
        count++;
    }
    return count;
}
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;
    int ans = solve(n);
    cout << ans << endl;
    return 0;
}