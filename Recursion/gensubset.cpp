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

string s;
vs ans;

void gensubset(string &str, int i)
{
    if (i == s.length())
    {
        ans.PB(str);
        return;
    }
    gensubset(str, i + 1);
    str.PB(s[i]);
    gensubset(str, i + 1);
    str.POP();
}

void solve()
{
    cin >> s;
    // /INPUT

    string mystr = "";
    gensubset(mystr, 0);
    for (auto &i : ans)
        cout << i << line;
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