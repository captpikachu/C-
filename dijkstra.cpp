void Dijkstra(int s, int n, vector<long long> &dist, vector<int> &parent, vector<pair<int, ll>> *adj) {
	dist.assign(n, INT_MAX);
	parent.assign(n, -1);
	dist[s] = 0;
	priority_queue <pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> q;
	q.push({0, s});
	while (!q.empty()) {
		pair<long long, int> here = q.top();
		q.pop();
		int v = here.ss;
		long long d_v = here.ff;
		if (d_v != dist[v])
			continue;
		for (auto edge : adj[v]) {
			if (dist[v] + edge.ss < dist[edge.ff]) {
				dist[edge.ff] = dist[v] + edge.ss;
				parent[edge.ff] = v;
				q.push({dist[edge.ff], edge.ff});
			}
		}
	}
}