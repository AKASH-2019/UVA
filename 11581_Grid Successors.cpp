#include<bits/stdc++.h>
#define ll long long
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int arr[4][4],n;

void sum()
{
	int temp[4][4];
	temp[1][1]=(arr[1][2]+arr[2][1])%2;
	temp[1][2]=(arr[1][1]+arr[1][3]+arr[2][2])%2;
	temp[1][3]=(arr[1][2]+arr[2][3])%2;
	
	temp[2][1]=(arr[1][1]+arr[3][1]+arr[2][2])%2;
	temp[2][2]=(arr[1][2]+arr[2][1]+arr[2][3]+arr[3][2])%2;
	temp[2][3]=(arr[3][3]+arr[1][3]+arr[2][2])%2;
	
	temp[3][1]=(arr[3][2]+arr[2][1])%2;
	temp[3][2]=(arr[3][1]+arr[3][3]+arr[2][2])%2;
	temp[3][3]=(arr[3][2]+arr[2][3])%2;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			arr[i][j]=temp[i][j];
		}
	}
}

bool zero()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(arr[i][j]>0)
			   return false;
		}
	}
	return true;
}


int main()
{

    FastRead
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
		n=3;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			    scanf("%1d",&arr[i][j]);
		}
			      		
		int ans=-1;
		
		while(!zero())
		{
			sum();
			ans++;
		}
		
		cout<<ans<<endl;
    }
    
    return 0;
}
