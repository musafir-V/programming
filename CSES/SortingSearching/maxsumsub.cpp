#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;

using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using ld = long double;

const ll mod = (ll)1e9 + 7;
const ll mxN = (ll)1e3 + 3;


void solve() {
    ll n;cin>>n;ll ans=-mod,msf=-mod;;
    vll A(n);for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<n;i++) {
        msf=max(A[i],A[i]+msf);
        ans=max(ans,msf);
    }
    cout<<ans<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(20);
    cout << fixed;
#ifdef LOCAL_DEFINE
    freopen("in.txt", "rt", stdin);
    freopen("out.txt", "wt", stdout);
#endif
// ll t;cin>>t;while(t--) 
            solve();
}
