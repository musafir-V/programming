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
    ll n,m;cin>>n>>m;
    set<pll>A;
    for(int i=0,x;i<n;i++) {
        cin>>x;
        A.insert({x,i});
    }
    for(int i=0,x;i<m;i++) {
        cin>>x;
        auto itr = A.upper_bound({x,mod});
        if(itr==A.begin()) {cout<<"-1\n";}
        else {
            itr--;  
            cout<<(*itr).first<<"\n";
            A.erase(itr);
        }
    }
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
