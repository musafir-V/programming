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
const ll mxN = (ll)1e5 + 3;

void solve() {
	ll n,x; cin>>n>>x;
	vll A(n); for(int i=0;i<n;i++) cin>>A[i];	
	vector<vll> bits(n,vll(33,0LL));
	for(int i=0;i<n;i++) {
		ll pos=0,num=A[i];
		while(num) bits[i][pos++]=num%2,num/=2; 
	}
	for(int i=0;i+1<n&&x;i++) 
		for(int j=32;j>=0&&x;j--)
			if(bits[i][j])
				x--,bits[i][j]=0,temp^=(1LL<<j);
	for(int i=32;i>=0;i--) 
		if(temp&(1LL<<i))
			for(int j=0;j<n;j++)
				if(bits[j][i]) 
					{bits[j][i]=0;temp^=(1LL<<j)break;}
	for(int i=0;i<n;i++) {
		ll sum=0; for(int j=0;j<33;j++) sum+=bits[i][j]*(1LL<<j);
		A[i]=sum;
	}
	A[n-1]^=temp;

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
	ll t;cin >> t;while (t--)
		solve();
}

