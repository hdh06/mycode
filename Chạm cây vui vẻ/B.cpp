#include <bits/stdc++.h>

using namespace std;

int const N = 2e5 + 5;

vector<int> g[N];

typedef long long ll;

int trv[N], val[N], sz[N], id = 0;
ll dis[N];

void DFS(int v, int p){
	trv[v] = ++id, sz[v] = 1, dis[id] = dis[trv[p]] + val[v];
	for (auto u: g[v]) if (u != p){
		DFS(u, v);
		sz[v] += sz[u];
	}
}

ll tree[N];
void upd(int x, ll k){
	for (int i = x; i < N; i += (i & -i)) tree[i] += k;
}
ll get(int x){
	ll ans = 0;
	for (int i = x; i > 0; i -= (i & -i)) ans += tree[i];
	return ans;
}

int main(){
	int n, q; cin >> n >> q;
	for (int i = 1; i <= n; i++)
		cin >> val[i];
	for (int i = 1; i < n; i++){
		int a, b; cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	DFS(1, 0);

	for (int i = 1; i <= n; i++)
		upd(i, dis[i] - dis[i - 1]);

	while (q--){
		int t; cin >> t;
		if (t == 1){
			int s, x; cin >> s >> x;
			upd(trv[s], -val[s]);
			upd(trv[s] + sz[s], val[s]);
			val[s] = x;
			upd(trv[s], val[s]);
			upd(trv[s] + sz[s], -val[s]);
		}else{
			int s; cin >> s;
			cout << get(trv[s]) << "\n";
		}
	}
	return 0;
}