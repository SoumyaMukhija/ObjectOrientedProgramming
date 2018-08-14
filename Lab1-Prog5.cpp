#include<iostream>
#include<string>
using namespace std; 
int main()
{
	char arr[40]; 
	cout<<"Welcome to my 5th program! Enter your string:";
	gets(arr); 
	int i; 
	int count=0; 
	for(i=0; arr[i]!='\0';++i)
	{
		count++; 
	}
	cout<<"The string length is:"<<count; 
}
