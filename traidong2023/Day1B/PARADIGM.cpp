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
#define file "paradigm"

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

int const N = 1e5 + 1;

int n;
int w[N];

int link[N];
int maxx[N];

int find(int v){return link[v] = link[v] == v? v: find(link[v]);}

bool unite(int a, int b){
	a = find(a), b = find(b);
	if (a == b) return false;
	link[a] = b;
	maxx[b] = max(maxx[b], maxx[a]);
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);//      the
	cin.tie(0);cout.tie(0);// 	    magical lines	
	#ifdef ONLINE_JUDGE
		freopen(file".inp", "r", stdin);
		freopen(file".out", "w", stdout);
	#endif
	
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> w[i];
		
	int 

	return 0;
}//khong phai _HDH, _HDH ko xai template!!!