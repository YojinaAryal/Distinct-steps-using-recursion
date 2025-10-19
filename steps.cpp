#include <bits/stdc++.h>
using namespace std;

// int f(int i, int n, vector<int> &memo)
// {
//     if (n == i)
//     {
//         return memo[4] = 1;
//     }
//     if (!(memo[i] < 0))
//     {
//         return memo[i];
//     }
//     int right = 0;
//     if (i + 2 <= n)
//     {
//         right = f(i + 2, n, memo);
//     }
//     return memo[i] = f(i + 1, n, memo) + right;
// }
// using dynamic programming
int main()
{
    int i = 0;
    int steps = 0; // ladder steps
    int n;
    cout << "ENTER THE LADDER WITH STEPS " << endl;
    cin >> n;
    vector<int> memo(n + 1, INT_MIN);
    // base case
    int a = 1;
    int b = 0;
    for(int x = n-1; x >= 0; x--){
        int c = a +  b;
        b = a;
        a = c;
    }
    cout << "ways \t" << a;
}