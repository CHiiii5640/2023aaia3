#include <iostream>
using namespace std;
int f(int n)
{
	int ans=0;
	while(n>0)
	{
		ans+=n%10;
		n/=10;
	}
	return ans;
}
int g(int n)
{
	while(n>=10)
	{
		n=f(n);
	}
	return n;
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		n=g(n);
		cout<<n<<endl;
	}
}
