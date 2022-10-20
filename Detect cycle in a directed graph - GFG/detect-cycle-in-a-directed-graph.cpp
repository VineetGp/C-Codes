//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
//   private:
//     bool check(int node, vector<int> adj[], vector<int>& vis, vector<int>& preVis){
//         vis[node] = 1;
//         preVis[node] = 1;
        
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 if(check(it, adj, vis, preVis)) return true;
//             }
//             else if(preVis[node] == 1) return true;
//         }
        
//         preVis[node] = 0;
//         return false;
//     }
    
//   public:
//     bool isCyclic(int V, vector<int> adj[]) {
//         vector<int> vis (V,0);
//         vector<int> preVis (V,0);
        
//         for(int i = 0; i<V; i++){
//             if(!vis[i]){
//                 if(check(i, adj, vis, preVis)) return true;
//             }
//         }
//         return false;
//     }
// };
private:
	bool dfsCheck(int node, vector<int> adj[], int vis[], int pathVis[]) {
		vis[node] = 1;
		pathVis[node] = 1;

		// traverse for adjacent nodes
		for (auto it : adj[node]) {
			// when the node is not visited
			if (!vis[it]) {
				if (dfsCheck(it, adj, vis, pathVis) == true)
					return true;
			}
			// if the node has been previously visited
			// but it has to be visited on the same path
			else if (pathVis[it]) {
				return true;
			}
		}

		pathVis[node] = 0;
		return false;
	}
public:
	// Function to detect cycle in a directed graph.
	bool isCyclic(int V, vector<int> adj[]) {
		int vis[V] = {0};
		int pathVis[V] = {0};

		for (int i = 0; i < V; i++) {
			if (!vis[i]) {
				if (dfsCheck(i, adj, vis, pathVis) == true) return true;
			}
		}
		return false;
	}
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends