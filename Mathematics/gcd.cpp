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

// gcd(a, b) == gcd(a-b, b)
// b < a
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

void solve()
{
    int x, y;
    cin >> x >> y;
    // /INPUT

    cout << gcd(x,y) << line;
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