include <iostream>

using namespace std;

int main() {
	long long int t,d;
	cin>>t;
	while(t--)
	{
		long int count=0;
		cin>>d;
		for(long long int i=1;i<d+1;i++)
		{
			if(d/i<i || d/i==i)
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}