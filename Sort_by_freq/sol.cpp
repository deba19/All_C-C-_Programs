#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long int
#define LL long int
#define f(a,n) for(ll i=a;i<n;i++)
#define f1(a,n) for(ll i=n-1;i>=a;i--)
#define MOD 10000007
#define mod 1000000007
#define MAX 26
using namespace std;

bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    if(a.second == b.second)
    return a.first < b.first;
    return a.second > b.second;
}
int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],i,cn=0;
        f(0,n) cin>>a[i];
        sort(a,a+n);
        unordered_map<ll,ll>m;
        vector<pair <ll,ll>>v;
        f(0,n)
        m[a[i]]++;
        for(auto i : m)
        {
            v.push_back(make_pair(i.first, i.second));
            cn++;
        }
        sort(v.begin(), v.end(), sortbysec);

        for(i=0;i<cn;i++)
        {
            ll x=v[i].second;
            ll y=v[i].first;
            while(x--)
            cout<<y<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

