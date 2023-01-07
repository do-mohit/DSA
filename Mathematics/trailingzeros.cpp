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

int trail(int n)
{
    if (n < 0)
        return -1;
    int cnt = 0;
    for (int i = 5; i <= n; i *= 5)
        cnt += n / i;
    return cnt;
}

void solve()
{
    int n;
    cin >> n;
    // /INPUT

    cout << trail(n) << line;
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