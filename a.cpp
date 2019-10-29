#include <bits/stdc++.h>
using namespace std;

 int main()
 {
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		int n,m,ans,k=0,i;
 		cin>>n>>m;
 		int a[n];
 		for(i=0;i<n;i++)
 		cin>>a[i];
 		for(i=0;i<n;i++)
 		{

 			if(a[i]%m==0)
 			k++;
 		}
 		ans= pow(2,k);
 		cout<<"\n"<<ans-1;
 	}
 	return 0;
 }
