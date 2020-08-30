#include<bits/stdc++.h>
#define ll long long
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{

    FastRead
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    vector<ll>v;
    
    ll n;
    
    while(scanf("%lld",&n)==1)
    {

		v.push_back(n);
		sort(v.begin(),v.end());
		int ln=v.size();
		int ind=int(ln/2);
		
		if(ln==1)cout<<v[0]<<endl;
		else if(ln%2==0)
		{
			cout<<(v[ind-1]+v[ind])/2<<endl;
		}
		else {
			cout<<v[ind]<<endl;
		}
	}
    
    
    
    return 0;
}
