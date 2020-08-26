#include<bits/stdc++.h>
#define ll long long
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{

    FastRead
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,m;
    while(1){
		cin>>n>>m;
		if(n==0 && m==0)break;
		
		char big[n+1][n+1],small[m+1][m+1];
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>big[i][j];
			}
		}
		
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				cin>>small[i][j];
			}
		}
		
		int phase=0;
		
		while(1){
		
		int ans=0;
		for(int i=0;i<n-m+1;i++)
		{
			for(int j=0;j<n-m+1;j++)
			{
				bool f1=false,f2=false;
				for(int c=0;c<m ;c++)
				{
					for(int d=0; d<m;d++)
					{
						if(big[c+i][d+j]!=small[c][d]) {
							f1=true;
							break;
						}
					}
					if(f1){ f2=true; break;}
				} 
				if(f2==false)ans++;
			}
		}
		cout<<ans;
		phase++;
		if(phase==4)break;
		cout<<" ";
		
		char temp[m+1][m+1];
		
		for(int i=0;i<m;i++)
		   for(int j=0;j<m;j++)
		      temp[j][m-i-1]=small[i][j];
		      
		for(int i=0;i<m;i++)
		   for(int j=0;j<m;j++)
		      small[i][j]=temp[i][j];
	} 
	cout<<endl;
  }
    
    return 0;
}
