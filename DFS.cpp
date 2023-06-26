#include<bits/stdc++.h>
#define nl "\n"
#define fi first
#define se second
#define pi 3.14159
#define ll long long
#define odd(a)  (a&1)
#define even(a)  !(a&1)
#define Mod 1'000'000'007
#define INF 2'000'000'000
#define sz(x) int(x.size())
#define charToInt(s) (s - '0')
#define ull unsigned long long
#define number_line iota(all(vec) , 1)
#define all(s) s.begin(), s.end()
#define rall(v) v.rbegin() , v.rend()
#define fixed(n) fixed << setprecision(n)
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define to_decimal(bin) stoll(bin, nullptr, 2)
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define Floor(n, m) (((n) / (m)) - ((n) % (m) ? 0 : 1))
#define Upper(s) transform(all(s), s.begin(), ::toupper);
#define Lower(s) transform(all(s), s.begin(), ::tolower);
#define cout_map(mp) for(auto& [f, s] : mp) cout << f << "  " << s << "\n";
//  ----- bits-------
#define pcnt(n) __builtin_popcount(n)  
#define pcntll(n) __builtin_popcountll(n)
#define clz(n) __builtin_clz(n)    // <---100
#define clzll(n) __builtin_clzll(n)
#define ctz(n) __builtin_ctz(n)  // 0001---->
#define ctzll(n) __builtin_ctzll(n)

using namespace std;

template < typename T = int > istream& operator >> (istream &in, vector < T > & v){
    for(auto & x : v) in >> x;
    return in;
} 

template < typename T = int > ostream& operator << (ostream &out, const vector < T > & v){ 
    for(const T & x : v) out << x << " "; 
    return out;
}

void esraa()
{
    //freopen("shuffle.in", "r", stdin), freopen("shuffle.out", "w", stdout);
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}
vector < vector < int > > adj;
vector < int > color , time_in , time_out;
int timer = 0;
// time in is the time when we enter the node
// time out is the time when we exit the node as we finish all the children
void dfs(int node , int par = -1){
    time_in[node] = timer++; 
    color[node] = 1;
    for(auto child : adj[node]){
        if(child == par) continue;
        if(color[child] == 0){
            dfs(child , node);
        }
        else if(color[child] == 1){
            cout << "Cycle\n";
        }
    }
    color[node] = 2;
    time_out[node] = timer++;
}
////////////////////////////////////
// to check if there is a cycle in the graph
vector < vector < int > > adj;
vector < int >  topology , color;
bool cycle = false;
void dfs(int node){
    color[node] = 1;
    for(auto child : adj[node]){
        if(color[child] == 0){
            dfs(child);
        }
        else if(color[child] == 1){
            cycle = true;
        }
    }
    color[node] = 2;
    topology.push_back(node);
}
// Kahn’s Algorithm
// to find the topological sort of the graph and check if there is a cycle
vector < vector < int > > adj;
vector < int > in_degree , topology;
bool cycle = false;
void dfs(){
    queue < int > q;
    for(int i = 0; i < in_degree.size(); i++){
        if(in_degree[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
        topology.push_back(node);
        for(auto & child : adj[node]){
            in_degree[child]--;
            if(in_degree[child] == 0){
                q.push(child);
            }
        }
    }
    if(topology.size() != in_degree.size()){
        cycle = true;
    }
}

void solve(){
}
int main()
{
    esraa();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
