#include <bits/stdc++.h> // Include every standard library 
using namespace std; 
  
typedef long long ll; 
typedef pair<int, int> pii; 
typedef pair<ll,ll> pll; 
typedef pair<string, string> pss; 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<pii> vii; 
typedef vector<pll> vll;
typedef vector<ll> vl; 
typedef vector<vl> vvl; 
  
double EPS = 1e-9; 
int mod = 1000000007; 
long long modl = 1000000000000000005LL; 
double PI = acos(-1); 
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 }; 
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 }; 
  
#ifdef TESTING 
#define DEBUG fprintf(stderr, "====TESTING====\n") 
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl 
#define debug(...) fprintf(stderr, __VA_ARGS__) 
#else 
#define DEBUG 
#define VALUE(x) 
#define debug(...) 
#endif 
  
#define f(a, b, c) for (int (a) = (b); (a) < (c); ++(a)) 
#define fn(a, b, c) for (int (a) = (b); (a) <= (c); ++(a)) 
#define fd(a, b, c) for (int (a) = (b); (a) >= (c); --(a)) 
#define fsq(a, b, c) for (int (a) = (b); (a) * (a) <= (c); ++(a)) 
#define fc(a, b, c) for (char (a) = (b); (a) <= (c); ++(a)) 
#define fe(a, b) for (auto&(a) : (b)) 
#define rep(i, n) f(i, 0, n) 
#define repn(i, n) fn(i, 1, n) 
#define sqr(x) ((LL)(x) * (x)) 
#define RESET(a, b) memset(a, b, sizeof(a)) 
#define fi first 
#define se second 
#define mp make_pair 
#define pb push_back 
#define all(v) v.begin(), v.end() 
#define alla(arr, sz) arr, arr + sz 
#define SIZE(v) (int)v.size() 
#define rev(v) reverse(all(v)) 
#define sorta(arr, sz) sort(alla(arr, sz)) 
#define reva(arr, sz) rev(alla(arr, sz)) 
#define PERMUTE next_permutation 
#define TC(t) while (t--)
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define in(a) rep(i,(int)a.size()) cin>>a[i]
#define out(a) rep(i,(int)a.size()) cout<<a[i]<<" "