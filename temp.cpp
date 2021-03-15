#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;
 
#define F               first
#define S               second
#define int             long long
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define endl "\n"
#define mem(a,x) memset(a,x,sizeof(a))
#define all(a) a.begin(),a.end()
void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int ceil(int a, int b) {return ((a / b) + ((a % b) != 0));}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
int gcd(int a,int b){if(a<b) swap(a,b);if(b==0) return a;a%=b;return gcd(b,a);}
int lcm(int a,int b){return (a*1LL*b)/gcd(a,b);}
// mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//const int dx[8]={1,0,-1,0,1,1,-1,-1},dy[8]={0,1,0,-1,-1,1,-1,1};
//const int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1}; 
/*vector<bool> p(N+1, true);
void sieve()
{
  p[0] = p[1] = false;
  int i,j;
  for (i = 2; i*i <= N; i++) 
  {
      if (p[i]) 
      {
          for (j = i * i; j <=N; j += i)
            {
        p[j] =false;
        }
      }
  }
}*/
/*ll power(ll a1, ll b1){ll res = 1;while(b1 > 0){if(b1 % 2){res = 1LL * res * a1 % mod;}a1 = 1LL * a1 * a1 % mod;b1 /= 2;}return res;}
ll invmod(ll a1,ll b1){return power(a1,b1-2);}*/
/*ll ncr(int n1,int c1){
  if(n1<c1)
    return 0;
  if(n1==c1||c1==0)
    return 1;
  ll n=n1,c=c1;
  vll fact(n+1,1);
  for1(i,1,n+1){
    fact[i]=fact[i-1];
    fact[i]*=i;
    fact[i]%=mod;
  }
  ll fact1=fact[n];
  ll fact2=fact[c];
  ll fact3=fact[n-c];
  fact1*=invmod(fact2,mod);fact1%=mod;
  fact1*=invmod(fact3,mod);fact1%=mod;
return fact1;
}*/
const int N=2e5+5;
const int INF = 1e9+5;




void solve(){
    int ;
}


int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    c_p_c();
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}
