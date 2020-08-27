#include<bits/stdc++.h>
#define ll long long
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{

    FastRead
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int n;
    while(1)
    {
		cin>>n;
		if(n==0)break;
		vector<pair<string,string> > v;
		for(int i=0;i<n;i++)
		{
			string a,b;
			cin>>a>>b;
			//cout<<a<<" "<<b<<endl;
			v.push_back(make_pair(a,b));
		}
		/*for(int i=0;i<n;i++)
		   cout<<v[i].first<<" "<<v[i].second<<endl;*/
		int ans[n+1];
		memset(ans,-1,sizeof(ans));
		int k=0;
		for(int i=0;i<n;i++){
			string s=v[i].second;
			int l=s.length();
			//cout<<s<<endl;
			while(1)
			{
				if(ans[k]==-1)--l;
				if(l==0){ans[k]=i; k++; if(k==n)k=0; break;}
				k++;
				if(k==n)k=0;
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<v[ans[i]].first;
			if(i!=n-1)cout<<" ";
		}
		cout<<endl;
		
    }
    
    return 0;
}
