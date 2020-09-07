///uva 10264

#include<bits/stdc++.h>
#define ll long long
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

/// 1<<n   2^n

inline bool neighbor(int i,int j)    ///  inline Function call overhead doesn’t occur.
{
	int n = i^j;                   /// this two instruction use to find the neighbour corner / point
    return ((n & (-n))==n);
}


int main()
{
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
   
       int n;
       
       while(scanf("%d",&n)!=EOF){
		   
		   n=(1<<n);
		   int potencies[n];
		   fill_n(potencies, n, 0);
		   
		   for(int i=0;i<n;i++)
		   {
			   int x;cin>>x;
			   for(int j=0;j<n;j++)
			   {
				   if(neighbor(i,j) && i!=j){
					       potencies[j]+=x;
			       }
			   }
		   }
		   int mx=0,s;
		   for(int i=0;i<n;i++)
		   {
			   for(int j=0;j<n;j++)
			   {
				   if(i==j)continue;
				   if(neighbor(i,j)){
					      s= potencies[i]+potencies[j];
			       }
			       if(s>mx)mx=s;
			   }
		   }
		   
		   cout<<mx<<endl;
		   
       }
    
    return 0;
}
