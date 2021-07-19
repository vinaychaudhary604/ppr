#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T> using Tree = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
#include<numeric>
#define ll long long
#define mod 1000000007
const int INF = (int)1e9;
const int N = 200005;
std::vector<int> adj[N];
bool vis[N];
int dp[N], depth[N], nodes, edges;

void dfs(int s){
    dp[s] = 1;
    for(auto u : adj[s]){
        depth[u] = depth[s]+1;
        dfs(u);
        dp[s] += dp[u];
    }
}
int main() {
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(0);

    int n; cin >> n;
    for(int i = 0; i < n-1; i++){
        int u; cin >> u; u--;
        adj[u].push_back(i+1);
    }
    dfs(0);
    for(int i = 0; i < n; i++){
        cout << dp[i]-1 <<" \n"[i == n];
    }
    /*
    for(int i = 1; i <= n; i++){
        cout << deg[i] <<" "<< dis[i] <<"\n";
    }*/
    return 0;
}
/*
  * “A seed grows with no sound 
  * but a tree falls with huge noise 
  * destruction has noise but creation is quiet. 
  * This is the power of silence… grow silently”
*/
// AIM ABOVE THE MARK TO HIT THE MARK // 
// Need to learn how to learn
///////HUNT OR GET HUNT/////////
/* always look for :
   
   * int overflow, array bounds
   * special cases (n = 1 ?)
   * do somth instead of nothing and stay organized 
   * write stuff down
   * don't get stuck on one approach
   
*/     