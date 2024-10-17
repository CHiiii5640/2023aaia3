#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector <int> a; //step 03
	int now;
	while(cin>>now) //step 01
	{
		a.push_back(now); //step 03 vector array
		for(auto b:a)
			cout<<b<<' ';
		cout<<"\n";//step 04 print array
		//cout<<now<<"\n"; //step02 output
	}
}
