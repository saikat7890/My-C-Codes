#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> bfsOfGraph(int n, vector<int> adj[]) {
    vector<int> bfs;
    vector<int> visit(n+1, 0);
    queue<int> q;

    // Start BFS from node 0 (assuming graph is 0-indexed)
    q.push(6);
    visit[6] = 1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto neighbour : adj[node]) {
            if (!visit[neighbour]) {
                visit[neighbour] = 1;
                q.push(neighbour);
            }
        }
    }
    return bfs;
}
void traverse(vector<int> adj[], vector<int> &visit, vector<int> &ans, int node){
    visit[node]=1;
    ans.push_back(node);
    for(auto it: adj[node]){
        if(!visit[it]){
            traverse(adj, visit, ans, it);
        }
    }
}
void dfsTraverse(vector<int> adj[], int n){
    vector<int> visit(n+1, 0);
    vector<int> ans;
    traverse(adj, visit, ans, 6);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> adj[n+1];

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> bfs = bfsOfGraph(n, adj);

    for (int i = 0; i < bfs.size(); i++) {
        cout << bfs[i] << " ";
    }
    cout << endl;
    dfsTraverse(adj, n);

    return 0;
}
