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
    ll n;cin>>n;ll ans=-1;vll A(n);
    for(int i=0;i<n;i++) cin>>A[i];
    map<ll,bool> seen;
    int l=0;
    for(int i=0;i<n;i++) {
        if(seen.find(A[i])==seen.end())
            seen[A[i]]=true;
        else {
            while(A[l]!=A[i])
                seen.erase(A[l]),l++;
            seen.erase(A[l]),l++;
            seen[A[i]]=true;
        }
        ans=max(ans,i-l+1LL);
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
