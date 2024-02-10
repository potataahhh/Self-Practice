#include<bits/stdc++.h>
using namespace std;


vector<int> BFS(int n , vector<int> adj[]){
	int vis[n] = {0};			 // to keep the track of visited nodes
	vis[0]=1;					 // once visited mark it 1

	queue<int> q;				 // queue to insert the element
	q.push(0);

	vector<int> bfs;			// resultant vector 

	if(!q.empty()){
		int node = q.front();	
		q.pop();
		bfs.push_back(node);

	for(auto it: adj[node]){
		if(!vis[it]){
			vis[it]=1;
			q.push(it);
			}					
		}
	}
	return bfs;
}

int main(){
	int n = 5; 							// Number of vertices
    vector<int> adj[n];

    									// Adding edges to the graph
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(3);

    vector<int> result = BFS(n, adj);

    cout << "BFS Traversal:";
    for (int node : result) {
        cout << " " << node;
    }
    cout << endl;

    return 0;
}