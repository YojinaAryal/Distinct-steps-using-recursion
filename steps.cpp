#include <bits/stdc++.h>
using namespace std;

int f(int i, int n, vector<int> &memo)
{
    if (n == i)
    {
        return memo[4] = 1;
    }
    if (!(memo[i] < 0))
    {
        return memo[i];
    }
    int right = 0;
    if (i + 2 <= n)
    {
        right = f(i + 2, n, memo);
    }
    return memo[i] = f(i + 1, n, memo) + right;
}

int main()
{
    int i = 0;
    int steps = 0; // ladder steps
    int n;
    cout << "ENTER THE LADDER WITH STEPS " << endl;
    cin >> n;
    vector<int> memo(n + 1, INT_MIN);
    int ways = f(0, n, memo);

    cout << ways;
}