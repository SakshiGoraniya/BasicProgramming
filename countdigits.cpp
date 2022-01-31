#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Declare variables to store count of vowels
    int one = 0, two = 0, three = 0, four= 0, five= 0;
	  int six = 0, seven = 0, eight= 0, nine= 0, zero= 0;
    string s;
    // Read given string from STDIN
    cin >> s;

    int s_len = s.length();
    // Iterate over each character in the string
    for(int j=0; j<s_len; j++) {

       
        if(s[j] == '0')
		 {
            zero++;
        }
		 else if(s[j] == '1') 
		 {
            one++;
        }
		else if(s[j] == '2') 
		{
            two++;
        } 
		else if(s[j] == '3')
		 {
            three++;
        } else if(s[j] == '4') 
		{
            four++;
        }
		else if(s[j] == '5') 
		{
            five++;
        }else if(s[j] == '6') 
		{
            six++;
        }else if(s[j] == '7') 
		{
            seven++;
        }else if(s[j] == '8') 
		{
            eight++;
        }else if(s[j] == '9') 
		{
            nine++;
        }
    }
    // Print out the result to STDOUT
    cout << "0 " << zero << endl;
    cout << "1 " << one << endl;
    cout << "2 " << two << endl;
    cout << "3 " << three << endl;
    cout << "4 " << four << endl;
	cout << "5 " << five << endl;
    cout << "6 " << six << endl;
    cout << "7 " << seven << endl;
    cout << "8 " << eight << endl;
    cout << "9 " << nine << endl;
    return 0;
}