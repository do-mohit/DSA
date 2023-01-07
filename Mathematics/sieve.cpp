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

// binary
// 10 : 1 0 1 0
//    : 8 4 2 1
LL binExp(int m, int n)
{
    LL ans = 1;
    while (n)
    {
        if (n & 1)
            ans *= m;
        m *= m;
        n >>= 1;
    }
    return ans;
}

void solve()
{
    int m, n;
    cin >> m >> n;
    // /INPUT

    LL ans = binExp(m, n);
    cout << ans << line;
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