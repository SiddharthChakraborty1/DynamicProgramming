// longest balanced paranthesis()
#include<bits/stdc++.h>
using namespace std;

int maxReturn(char str[], int n)
{
	int sum = 0;
	int maxi = 0;
	
	for(int i = 0;i<n;i++)
	{
		if(str[i] == '(')
		sum+=1;
		else
		sum-=1;
		
		
		if(sum==0)
		maxi = i;
		
	}
	return maxi+1;
}

int main()
{
	char str[] = "(()())";
	int n = strlen(str);
	cout<<maxReturn(str,n);
	
	
	
	
	
	
}
