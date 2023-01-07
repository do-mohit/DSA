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

vi primefactor(int n)
{
    if (n == 1)
        return {-1};

    vi temp;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            temp.PB(i);
            n /= i;
        }
    }
    // imp bcz last one may be prime
    if (n > 1)
        temp.PB(n);
    return temp;
}

void solve()
{
    int n;
    cin >> n;
    // /INPUT

    vi primefact = primefactor(n);
    for (auto &i : primefact)
        cout << i << " ";
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