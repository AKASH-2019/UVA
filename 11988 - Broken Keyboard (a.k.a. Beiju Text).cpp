///uva 10264

#include<bits/stdc++.h>
#define ll long long
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

/// 1<<n   2^n      



int main()
{
       //freopen("input.txt", "r", stdin);
       //freopen("output.txt", "w", stdout);
    
   
       
       string s;
       
       while(getline(cin,s)){     
           list<char>li;
           list<char>:: iterator it;    
           it=li.begin();
           for(int i=0;s[i];i++)
           {
			   if(s[i]=='[')
			   {
				   it=li.begin();
			   }
			   else if(s[i]==']')
			   {
				   it=li.end();
			   }
			   else 
			   {
				   li.insert(it,s[i]);
			   }
		   }
           
           for(it=li.begin();it!=li.end();it++)
           {
		       cout<<*it;
	       }
	       cout<<endl;
	   
      }
          
    return 0;
}
