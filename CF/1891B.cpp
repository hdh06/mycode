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

int const N = 1e5 + 1, L = 31;

int arr[N];

void solve(){	
	int n, q; cin >> n >> q;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	

	vi z;
	while (q--){
		int x; cin >> x;
		if (z.empty() || z.back() > x)
			z.pb(x);
	}
	for (int i = 1; i <= n; i++){
		for (auto x: z) if (arr[i] % (1 << x) == 0) arr[i] |= (1 << (x - 1));	
		cout << arr[i] << " ";
	}
	cout << "\n";
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