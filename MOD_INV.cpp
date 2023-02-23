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
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}
const int MOD = 998244353;

ll modinv(ll a, ll m = MOD){ 
    ll y = 0, x = 1;
    if (m == 1) return 0;
    while (a > 1){
        ll q = a / m;
        ll t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0) x += MOD;
    return x;
}

ll add(ll x, ll y){
    return ((x % MOD + y % MOD) % MOD + MOD) % MOD;
}

ll mul(ll x, ll y){
    return(x % MOD * 1ll * y % MOD) % MOD;   
}

ll divide(ll x, ll y){
    return mul(x, modinv(y));
}
vector < ll > fact(1e6 + 1, 1);
void factorial(){
    for(int i = 2; i <= 1e6; i++)
        fact[i] = (fact[i - 1] * i) % MOD;
}

ll nCr(ll n, ll r){
    if(r > n) return 0;
    return (fact[n] * modinv(fact[r]) % MOD * modinv(fact[n - r]) % MOD) % MOD;
}

// if m is prime
ll bin_exp(ll a, ll b, ll m = Mod){
    a %= m;
    ll res = 1;
    while (b > 0){
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll modinv(ll a, ll m = Mod){ 
    return bin_exp(a, m - 2, m);
}
void solve(){
    
}
int main()
{
    esraa();
    int t = 1;
    cin >> t;
    //cin.ignore();
    while(t--)
      solve();
    return 0;
}  
