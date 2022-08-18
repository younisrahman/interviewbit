#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

int findXorIng(vector<int> &A)
{
    int ans = 0;
    if (A.size() % 2 == 0)
        return 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (i % 2 == 0)
            ans = ans ^ A[i];
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
    n = findXorIng(vector);
    std::cout << n << std::endl;
    return 0;
}