#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
	string s; 
	cout<<"Enter a string: "; 
	cin>>s; 
	string t; 
	cout<<"Enter your second string: "; 
	cin>>t; 
	int a=s.length(); 
	int b=t.length();
	string *p=&s;
	string *q=&t;  
	string finalarr = (*p) + (*q);
	cout<<finalarr;  
	
	return 0; 
}
