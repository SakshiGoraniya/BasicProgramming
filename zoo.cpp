#include <iostream>

using namespace std;

int main() {
	string zoo;
	cin >> zoo;		
	int x,y,l=zoo.size();

char arr[l];
    for(int i = 0; i < l; i++){

        arr[i] = zoo[i];

    }

	while(l--)
		{
			if (arr[l]=='z')
				x=x+1;
			if (arr[l]=='o')
				y=y+1;
		}
		if(2*x==y)
		cout<<"Yes";
		else
		cout<<"No";
}
