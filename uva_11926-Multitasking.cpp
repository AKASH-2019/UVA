///uva 10264

#include<bits/stdc++.h>
#define ll long long
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

/// 1<<n   2^n      

int MAX=1000110;


int main()
{
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    
   
       int n,m;
       
       while(1)
       {
		      scanf("%d%d",&n,&m);
		      if(n==0 && m==0)break;
		      
		      bool flag[1001111],ans=true;
		      fill_n(flag,MAX,true);
		      
		      for(int i=0;i<n;i++)
		      {
				  int s,t;
				  scanf("%d%d",&s,&t);
				  if(ans)
				     for(int j=s+1;j<=t;j++)
				     {
					       if(flag[j]==false)
					       {
						        ans=false;
						        break;
					       }
					       else flag[j]=false;
				     }
			  }
			  
			  for(int i=0;i<m;i++)
		      {
				  int s,t,k;
				  scanf("%d%d%d",&s,&t,&k);
				  
				  if(ans)
				     while(s<=MAX){
						 for(int j=s+1;j<=min(t,MAX);j++)
				         {
							 if(j>1000000)break;
					         if(flag[j]==false)
					         {
						          ans=false;
						          break;
					         }
					         else flag[j]=false;
				         }
				         s=s+k;
				         t=t+k;
				         if(!ans)break;
					 }
				     
			  }
			  if(ans)printf("NO CONFLICT\n");
			  else printf("CONFLICT\n");
       }
    
    return 0;
}
