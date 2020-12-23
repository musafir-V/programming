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
    string s;cin>>s;
    ll odd=0;
    const ll n=s.length();
    ll cnt[26]={0};
    for(auto i:s) cnt[i-'A']++;
    // for(auto i:cnt) cout<<i<<" ";
    for(int i=0;i<26;i++) odd+=(cnt[i]&1);
    // cout<<odd;
    if(odd>1) {cout<<"NO SOLUTION\n";return;}
    string ans="";
    for(int i=0;i<26;i++) 
        for(int j=0;j<cnt[i]/2;j++)
            ans+=char(i+'A');
    cout<<ans;
    for(int i=0;i<26;i++) 
        if(cnt[i]&1)
            cout<<char(i+'A');
    reverse(all(ans));
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
