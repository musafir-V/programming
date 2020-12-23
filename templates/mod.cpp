#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef long double ld;

const ll MOD = (ll)1e9 + 7;
const ll inf = (ll)1e18 + 6;

ll add(ll x, ll y)
{
    x += y;
    if (x >= MOD)
        return x - MOD;
    return x;
}

ll sub(ll x, ll y)
{
    x -= y;
    if (x < 0)
        return x + MOD;
    return x;
}

ll mult(ll x, ll y)
{
    return (x * y) % MOD;
}

ll bin_pow(ll x, ll p)
{
    if (p == 0)
        return 1;
    if (p & 1)
        return mult(x, bin_pow(x, p - 1));
    return bin_pow(mult(x, x), p / 2);
}

ll rev(ll x)
{
    return bin_pow(x, MOD - 2);
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(20);
    cout << fixed;
#ifdef LOCAL_DEFINE
    freopen("input.txt", "rt", stdin);
#endif




}
