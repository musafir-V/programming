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
    ll n;cin>>n;
    vector<pll> A(n);
    for(int i=0;i<n;i++) cin>>A[i].se>>A[i].fi;
    sort(all(A));
    ll ans=1,prev=A[0].fi;
    for(int i=1;i<n;i++) 
        if(A[i].se>=prev)
            ans++,prev=A[i].fi;
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
