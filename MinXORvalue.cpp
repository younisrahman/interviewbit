#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

int findMinXor(vector<int> &A)
{
    int n = A.size();
    int ans = INT_MAX;
    sort(A.begin(), A.end());
    for (int i = 0; i < n - 1; i++)
    {
        ans = min(ans, A[i] ^ A[i + 1]);
    }
    return ans;
}

int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    for (int i = 0; i < 4; i++)
    {
        cin >> a;
        vector.push_back(a);
    }
    n = findMinXor(vector);
    std::cout << n << std::endl;
    return 0;
}