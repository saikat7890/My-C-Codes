#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> bfsOfGraph(int startNode, int n, vector<int>adj[]){
    // int visit[n+1] = {0};
    vector<int> bfs;
    vector<int> visit(n+1, 0);
    queue<int> q;

    visit[startNode] = 1; //starting node as visited
    q.push(startNode);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        //traversing index wise every node for its edges to check visited or not
        for(auto neighbor: adj[node]){
            if(!visit[neighbor]){
                visit[neighbor] = 1;
                q.push(neighbor);
            }
        }
    }
    return bfs;
}
void dfsRecursion(int node, vector<int> &visit, vector<int>adj[], vector<int> &ans){
    visit[node]=1;
    ans.push_back(node);

    for(auto neighbor: adj[node]){
        if(!visit[neighbor]){
            dfsRecursion(neighbor, visit, adj, ans);
        }
    }

}
vector<int> dfsOfGraph(int startNode, int n, vector<int>adj[]){
    vector<int> ans;
    vector<int> visit(n+1, 0);
    dfsRecursion(startNode, visit, adj, ans);
    return ans;
}
bool dfsSolve(int node, vector<int> &visit, vector<int>adj[], vector<int> &path){
    visit[node]=path[node] = 1;

    for(auto neighbor: adj[node]){
        if(!visit[neighbor] && dfsSolve(neighbor, visit, adj, path)){
            return true;
        }
        else if(path[neighbor]){
            return true;
        }
    }
    path[node] = 0;
    return false;

}
bool isCyclic(int n, vector<int>adj[]){
    vector<int> path(n, 0);
    vector<int> visit(n, 0);
    for(int i=0; i<n; i++){
        if(visit[i] == 0){
            if(dfsSolve(i, visit, adj, path)) return true;
        }
    }
    
    return false;
}
int main(){
    int n, m;
    cin >>n >> m;
    
    //Storing graph with adjacency matrix
    // int adj[n+1][m+1];
    // for (int i = 0; i < m; i++)
    // {
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u][v] = 1;
    //     adj[v][u] = 1;
    // }
    //storing graph with adjacency list
    vector<int> adj[n+1];
    for (int i = 0; i < m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int startNode;
    cout<<"Enter the starting Node: ";
    cin>>startNode;
    
    vector<int> bfs = bfsOfGraph(startNode, n, adj);
    vector<int> dfs = dfsOfGraph(startNode, n, adj);
    
    cout<<"BFS Traversal: ";
    for(int i=0; i< bfs.size(); i++){
        cout<<bfs[i]<<" ";
    }cout<<endl;
    cout<<"DFS Traversal: ";
    for(int i=0; i< dfs.size(); i++){
        cout<<dfs[i]<<" ";
    }cout<<endl;
    
    return 0;
}