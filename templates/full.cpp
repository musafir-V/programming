#include <bits/stdc++.h>

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef long double ld;

const ll N = (ll)5e5 + 2;
const ll MOD = (ll)1e9 + 7;
const ll MOD1 = (ll)998244353;
const ll inf = (ll)1e18 + 6;

template <class T>
bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template <class T>
bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

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

inline bool f(ll x, ll a, ll b)
{
    return ((x % a) % b) != ((x % b) % a);
}

bool palin(ll n)
{
    ll temp = n;
    ll rev = 0;
    while (temp)
        rev = rev * 10 + temp % 10, temp /= 10;
    return rev == n;
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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x = 0;
        while (1)
        {
            if (x > 0)
        }
    }
}