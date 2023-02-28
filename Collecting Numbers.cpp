#include<bits/stdc++.h>
#include <cstdlib>
#define ll long long int
#define mod 1000000007
# define M_PI 3.14159265358979323846  /* pi */
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define ff first
#define ss second
#define vl vector<ll>
#define vll vector<pair<ll,ll>>
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define endl '\n'
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define arr_In(a) for(auto &it:a) {cin>>it;}
#define vec_In(x,n,v) for(ll i=0;i<n;i++) {cin>>x;v.pb(x);}
#define fill_n(arr,n,a) fill_n(arr,n,a) // Using because we can't initialize a complete array with any value other than 0 by doing this=> arr[n]={a}
typedef long double ld;
using namespace std;

//---Mostly used---// 
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll modu) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % modu; a = (a * a) % modu; b = b >> 1;} return res;}
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

//---Check---//
ll highestPowerof2(ll n){ ll p = (ll)log2(n);   return (ll)pow(2, p);}
bool isPowerOfTwo(int n){ if(n==0)   return false;   return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

//---Compare---//
bool comparator(const pair<ll,ll> &a, const pair<ll,ll> &b){if (a.first != b.first) {return a.first < b.first;}return a.second > b.second;}

//---Bits---//
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
ll countSetBits(ll n){ ll count=0;  while(n){ count+=n&1; n>>=1;  }  return count;}

//---Miscellaneous---//
string removeLeadingZeros(string str){const regex pattern("^0+(?!$)");str = regex_replace(str, pattern, ""); return str;}

//---------------------------------------------CODE STARTS FROM HERE-----------------------------------------------------------------//




void solve()
{
  ll n;
  cin>>n;
  ll x[n+1];
  map<ll,ll>m;
  for(ll i=1;i<=n;i++)
  {
    ll a;
    cin>>a;
    x[i]=a;
    m[x[i]]=i;
  }
  ll count=1;
  for(ll i=2;i<=n;i++)
  {
    if(m[i]>m[i-1]) continue;
    else count++;
  }
  cout<<count;
}


int main()
{
  // ll t;
  // cin>>t;
  // while(t--)
  // {
    solve();
  // }
}
