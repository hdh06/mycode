#include <bits/stdc++.h>

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...) 1606
#endif

using namespace std;
#define all(x) x.begin(), x.end()
#define mp make_pair
#define st first
#define nd second
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)x.size()
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define file "fiel"

typedef long long ll;
typedef unsigned long long ull;
typedef long double ldb;
typedef string str;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef array<int, 3> iii;
typedef array<ll, 3> lll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;
typedef vector<bool> vb;
typedef vector<ldb> vd;

bool const SINGLE_TEST = 0;

void solve(){	
	int n; cin >> n;
	
	vii z;
	for (int i = 1; i <= n; i++){
		int m; cin >> m;
		ii minn = {INT_MAX, INT_MAX};
		for (int j = 1; j <= m; j++){
			int x; cin >> x;
			if (minn.st > x){
				minn.nd = minn.st;
				minn.st = x;
			}else if (minn.nd > x)
				minn.nd = x;
		}
		
		swap(minn.st, minn.nd);
		z.pb(minn);
	}
	
	sort(all(z));
	
	ll ans = 0; int minn = z[0].nd;
	for (int i = 1; i < z.size(); i++)
		ans += z[i].st, minn = min(minn, z[i].nd);
	cout << ans + minn << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);//      the
	cin.tie(0);cout.tie(0);// 	    magical lines	
	// freopen(file".inp", "r", stdin);
	// freopen(file".out", "w", stdout);
	int t;
	if (SINGLE_TEST) t = 1;
	else cin >> t;
	while (t--) solve();
	return 0;
}//khong phai _HDH, _HDH ko xai template!!!