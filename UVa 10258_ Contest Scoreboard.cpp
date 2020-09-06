
#include<bits/stdc++.h>
#define ll long long
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int solved[101][11],pen[101][11];
vector<int>con;

bool cmp(int a,int b)
{
	int as=0,bs=0,ap=0,bp=0;
	for(int i=0;i<10;i++)
	{
		if(solved[a][i])
		{
			ap+=pen[a][i];
			as++;
		}
	}
	for(int i=0;i<10;i++)
	{
		if(solved[b][i])
		{
			bp+=pen[b][i];
			bs++;
		}
	}
	if(as>bs)return true;
	else if(as<bs) return false;
	else if(ap<bp) return true;
	else if(ap>bp) return false;
	else return a<b;
	
	
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int t;
    cin>>t;
    cin.ignore();
    cin.ignore();
    for(int T=0;T<t;T++)
    {
	    int a,b,c;
	    char d;
	    
	    for(int i=0;i<101;i++)
	    {
			memset(solved[i],0,sizeof(solved[i]));
			memset(pen[i],0,sizeof(pen[i]));
		}
		string s;
		con.clear();
		
		while(getline(cin,s) && !s.empty())
		{
			stringstream ss(s);
			ss>> a >> b >> c >>d;
			
			if(!solved[a][b] && d=='I')
			{
				pen[a][b]+=20;
			}
			else if(d=='C' && !solved[a][b])
			{
				solved[a][b]=1;
				pen[a][b]+=c;
			}
			
			if(find(con.begin(),con.end(),a)==con.end())
			   con.push_back(a);
		}
		
		sort(con.begin(),con.end(),cmp);
		
		for(int k : con)
		{
			int sco=0,ps=0;
			for(int i=0;i<10;i++)
			{
				if(solved[k][i])
				{
					sco+=pen[k][i];
					ps++;
				}
			}
			cout<<k<<" "<<ps<<" "<<sco<<endl;
		}
		if(T<t-1)
		   cout<<endl;
	    
	}	
    
    return 0;
}
