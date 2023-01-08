#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

#define F first
#define S second
#define B begin()
#define E end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define pi pair<int, int>
#define PB push_back
#define POP pop_back
#define MP make_pair
#define LL long long int
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define RREP(i, a, b) for (int i = a; i >= b; i--)
#define line "\n"

// optimisation
// Backtracking
// Pseudo Polynomial
int subsetsum(int arr[], int n, int sum)
{
    if (n == 0)
        return (sum == 0) ? 1 : 0;
    return (subsetsum(arr, n - 1, sum) + subsetsum(arr, n - 1, sum - arr[n - 1]));
}

void solve()
{
    int n, sum;
    sum = 0;
    cin >> n;
    int arr[n];
    REP(i, 0, n - 1)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    // /INPUT

    subsetsum(arr, n, sum);
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}