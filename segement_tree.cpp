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
   // freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}

typedef int item;
struct segtree{
    int size;
    vector < item > values;
    item NEUTRAL_ELEMENT = 0;

    item merge(item a , item b){
        return b + a;
    }

    item single(int v){
        return v;
    }

    void init(int n){
        size = 1;
        while(size < n) size *= 2;
        values.resize(2 * size);
    }

    void build(vector < ll > &a , int x , int lx , int rx){
        if(rx - lx == 1){
            if(lx < sz(a)) values[x] = single(a[lx]);
            return;
        }
        int m = (lx + rx) / 2;
        build(a , 2 * x + 1 , lx , m);
        build(a , 2 * x + 2 , m , rx);
        values[x] = merge(values[2 * x + 1] , values[2 * x + 2]);
    }

    void build(vector < ll > &a){
        build(a , 0 , 0 , size);
    }

    void set(int i , int v , int x , int lx , int rx){
        if(rx - lx == 1){
            values[x] = single(v);
            return;
        }

        int m = (lx + rx) / 2;
        if(i < m) set(i , v , 2 * x + 1 , lx , m);
        else set(i , v , 2 * x + 2 , m , rx);
        values[x] = merge(values[2 * x + 1] , values[2 * x + 2]);
    }

    void set(int i , int v){
        set(i , v , 0 , 0 , size);
    }

    item calc(int l , int r , int x , int lx , int rx){
        if(lx >= r or l >= rx) return NEUTRAL_ELEMENT;
        if(lx >= l and rx <= r) return values[x];
        int m = (lx + rx) / 2;
        item s1 = calc(l , r , 2 * x + 1 , lx , m);
        item s2 = calc(l , r , 2 * x + 2 , m , rx);
        return merge(s1 , s2);
    }

    item calc(int l , int r){
        return calc(l , r , 0 , 0 , size);
    }

    int find(int k , int x , int lx , int rx){
        if(rx - lx == 1) return lx;
        int m = (lx + rx) / 2;
        int right = values[2 * x + 2];
        if(right >= k) return find(k , 2 * x + 2 , m , rx);
        else return find(k - right , 2 * x + 1 , lx , m);
    }

    int find(int k){
        return find(k , 0 , 0 , size);
    }

    int first_above(int v , int l , int x , int lx , int rx){
        if(values[x] < v) return -1;
        if(rx <= l) return -1;
        if(rx - lx == 1) return lx;
        int m = (lx + rx) / 2;
        int res = first_above(v , l , 2 * x + 1 , lx , m);
        if(res == -1) res = first_above(v , l , 2 * x + 2 , m , rx);
        return res;
    }

    int first_above(int v , int l){
        return first_above(v , l , 0 , 0 , size);
    }

};

void solve(){

}
int main()
{
    esraa();
    int t = 1;
   // cin >> t;
    //cin.ignore();
    while(t--)
      solve();
    return 0;
} 
