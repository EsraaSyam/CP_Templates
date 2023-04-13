#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define all(s) s.begin(), s.end()
#define Mod 1'000'000'007
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define Floor(n, m) (((n) / (m)) - ((n) % (m) ? 0 : 1))
#define fixed(n) fixed << setprecision(n)

const double PI  = acos(-1.0);

typedef complex<double> point;
#define X real()
#define Y imag()
#define vec(a,b) ((b)-(a))
#define same(p1,p2) (dp(vec(p1,p2),vec(p1,p2)) < EPS) // square of length
#define dp(a,b) ( (conj(a)*(b)).real() ) // a*b cos(T), if zero -> prep
#define cp(a,b) ( (conj(a)*(b)).imag() ) // a*b sin(T), if zero -> parllel
#define length(a) (hypot((a).imag(), (a).real()))
#define normalize(a) (a)/length(a)
#define rotateO(p,ang) ((p)*exp(point(0,ang)))
#define rotateA(p,ang,about) (rotateO(vec(about,p),ang)+about)
#define reflectO(v,m) (conj((v)/(m))*(m))
#define EPS 1e-9

using namespace std;

template < typename T = int > istream& operator >> (istream &in, vector < T > & v){
    for(auto & x : v) in >> x;
    return in;
}

template < typename T = int > ostream& operator << (ostream &out, const vector < T > & v){
    for(const T & x : v) out << x << " ";
    return out;
}

double to_degreeFromMinute(double x){ // to degree from minute
    return x/60.0;
}

double to_degreeFromRadian(double x){ // to degree from radian
    if(x < 0) x += 2 * PI;
    return x * 180.0 / PI;
}

double to_radianFromDegree(double x){ // to radian from degree
    return x * PI / 180.0;
}

double fixAngle(double A){
    return A > 1 ? 1 : (A < -1 ? -1 : A);
}
// sin(A) / a = sin(B) / b = sin(C) / c
double get_side_a_bAB(double b , double B , double A){
    return b * sin(A) / sin(B);
}

double get_angle_A_abB(double a , double b , double B){
    return asin(fixAngle((a * sin(B)) / b));
}

// a ^ 2 = b ^ 2 + c ^ 2 - 2 * b * c * cos(A)
double get_angle_A_abc(double a , double b , double c){
    return acos(fixAngle((b * b + c * c - a * a) / (2 * b * c)));
}

// sin(a + b) = sin(a) * cos(b) + cos(a) * sin(b)
// sin(a - b) = sin(a) * cos(b) - cos(a) * sin(b)
// cos(a + b) = cos(a) * cos(b) - sin(a) * sin(b)
// cos(a - b) = cos(a) * cos(b) + sin(a) * sin(b)
// tan(a + b) = (tan(a) + tan(b)) / (1 - tan(a) * tan(b))
// tan(a - b) = (tan(a) - tan(b)) / (1 + tan(a) * tan(b))







void esraa()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}

void solve(){

}

int main()
{
    esraa();
    int t = 1;
    //cin >> t;
    //cin.ignore();
    while(t--){
        solve();
    }
    return 0;
}
