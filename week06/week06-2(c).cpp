#include <iostream>
#include <vector>
#include <algorithm> //step 05
using namespace std;
int main()
{
	vector<int> a; //step 03
	int now;
	while(cin>>now) //step 01
	{
		a.push_back(now); //step 03 vector array
		sort(a.begin(),a.end()); //step 05

		int N=a.size();
		if(N%2==1)
			cout<<a[N/2]<<"\n";
		else
			cout<<(a[N/2-1]+a[N/2])/2<<"\n"; //step 06

		//for(int b:a)
			//cout<<b<<' ';
		//cout<<"\n"; //step 04 print array
		//cout <<now<<"\n"; //step02 output
	}
}
