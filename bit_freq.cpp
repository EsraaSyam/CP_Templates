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
    for(const T & x : v) out << x << nl; 
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
struct bit_freq{
    vector<int> freq;
    bit_freq(){
        freq.assign(32 , 0);
    }
    
    void update(int upd , int x){
        for(int i = 0 ; i < 32 ; i++){
            if(x & (1 << i)){
                freq[i] += upd;
            }
        }
    }

    bool good(){
        for(int i = 0 ; i < 32 ; i++){
            if(freq[i] > 1){ // if the frequency of a bit is greater than 1 then the xor of all the numbers in the range [l , r] will be 0
                return false;
            }
        }
        return true;
    }

    void query(int l , int r){ // to get the frequency of each bit in the range [l , r]
        for(int i = 0 ; i < 32 ; i++){
            if(freq[i] % 2 == 1){
                cout << i << " ";
            }
        }
        cout << nl;
    }

};
void solve(){
    bit_freq bit;
}
int main()
{
    esraa();
    int t = 1;
    //cin >> t;
    //cin.ignore();
    while(t--)
      solve();
    return 0;
} 
