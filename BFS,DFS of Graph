#include <bits/stdc++.h>
using namespace std;
void bfs(vector<int>adj[], int m) {
	vector<int>ans;
	vector<int>vis(m + 1, 0);
	queue<int>q;
	q.push(0);
	vis[0] = 1;
	while (!q.empty()) {
		int temp = q.front();
		q.pop();
		ans.push_back(temp);
		for (auto x : adj[temp]) {
			if (!vis[x]) {
				vis[x] = 1;
				q.push(x);
			}
		}
	}
	for (auto &it : ans) {
		cout << it << " ";
	}
	cout << endl;
}
void addEdge(vector < int > adj[], int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void dfs(int node, vector<int>adj[], vector<int>&ans, vector<int>&vis) {
	ans.push_back(node);
	vis[node] = 1;
	for (auto x : adj[node]) {
		if (!vis[x]) {
			//vis[it]=1;
			dfs(x, adj, ans, vis);
		}
	}
}
int main() {
	isPrime(1);
	vector < int > adj[5];

	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 0, 3);
	addEdge(adj, 2, 4);
	vector<int>ans;
	vector<int>vis(5, 0);
	bfs(adj, 5);
	dfs(0, adj, ans, vis);
	for (auto it : ans) {
		cout << it << " ";
	}
	cout << endl;
	return 0;
}
