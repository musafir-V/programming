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
    vector<pll>A(n),B(n);
    for(int i=0;i>n;++i) {
        cin>>A[i].fi>>B[i].fi;
        A[i].se=i,B[i].se=i;
    }
    ll room=0;vll ans(n);
    sort(all(A));sort(all(B));
    for(int i=0;j=0;i<n&&j<n;) {
        if(A[i].fi>B[j].fi) room--,j++;
        else room++,ans[A[i].se]=room,i++;
    }
    for(auto i:ans) cout<<i<<" ";
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
