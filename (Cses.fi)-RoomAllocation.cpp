#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    ll count=0;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++)
      {
        ll f,s;cin>>f>>s;
        v.push_back(make_pair(f,s));
      }
    sort(v.begin(),v.end());
    for(ll i=0;i<n-1;i++)
    {
      if(v[i].second>v[i+1].first)
        count++;
    }
    cout<<count<<endl;
  }
}