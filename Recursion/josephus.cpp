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

// k + 0 -> 0
// k + 1 -> 1
// k + 2 -> 2
// k + 3 -> 3
// k + i -> i

int josh(int n, int k)
{
    if (n == 1)
        return 0;
    return (k + josh(n - 1, k)) % n;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    // /INPUT

    cout << josh(n, k) << line;
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