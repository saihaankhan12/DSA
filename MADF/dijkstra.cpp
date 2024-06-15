#include<iostream>
#include<vector>
#include<queue>
using namespace std;


vector<int> dijkstra(int v , vector<vector<int>> adj[], int src) // v is the number of vertices, adj is the adjacency list and src is the source vertex
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; // min heap
    vector<int> dist(v);
    for(int i=0;i<v;i++)
    {
        dist[i]=1e9; // initialise all distances to infinity
    }
    dist[src]=0;
    pq.push({0,src});
    while(!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(vector<int> it:adj[node]) // iterate through the adjacency list of the node
        {
            int edgewt = it[1];
            int adjnode = it[0];
            if(dis + edgewt < dist[adjnode])
            {
                dist[adjnode] = dis + edgewt;
                pq.push({dist[adjnode],adjnode});
            }
          
        }
    }
    return dist;
}

int main()
{
    int n,m;
    cout<<"Enter the number of vertices and edges"<<endl;
    cin>>n>>m;
    vector<vector<int>> adj[n];
    cout<<"Enter the edges and their weights"<<endl;
    for(int i=0;i<m;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    int src;
    cout<<"Enter the source vertex"<<endl;
    cin>>src;
    vector<int> res = dijkstra(n,adj,src);
    cout<<"The shortest distance of all vertices from the source vertex is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}