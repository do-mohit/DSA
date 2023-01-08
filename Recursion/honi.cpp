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

// a : source
// b : aux
// c : destination
void honi(int n, char a, char b, char c)
{
    if (n == 0)
        return;
    honi(n - 1, a, c, b);
    cout << "Move disc " << n << " from " << a << " to " << c << line;
    honi(n - 1, b, a, c);
}
void solve()
{
    int n;
    cin >> n;
    // /INPUT

    honi(n, 'a', 'b', 'c');
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