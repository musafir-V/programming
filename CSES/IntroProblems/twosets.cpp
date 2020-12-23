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
    if(n%4==0 || n%4==3) {
        cout<<"YES\n";
        vll A[2];
        
        if(n%4==3) {
           A[0].pb(1);A[0].pb(2);A[1].pb(3);
           for(int i=4,j=n;i<j;i++,j--)
            A[i%2].pb(i),A[i%2].pb(j);
        } else {
            A[0].pb(1);A[0].pb(4);A[1].pb(3);A[1].pb(2);
            for(int i=5,j=n;i<j;i++,j--)
            A[i%2].pb(i),A[i%2].pb(j);
        } 
        
        for(int i=0;i<2;i++) {
            cout<<A[i].size()<<"\n";
            for(auto j:A[i])
                cout<<j<<" ";
            cout<<"\n";
        }
    } else {
        cout<<"NO\n";
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
