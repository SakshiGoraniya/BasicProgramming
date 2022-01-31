#include <iostream>

using namespace std;

int main() {
	int num,t;
	cin >> t;	
	while(t>0)
	{
		cin>>num;
		int count=0;
		while(num)
		{
			num=num & (num-1);
			count++;
		}
		t--;
		cout<<count<<endl;
	}

	
}

