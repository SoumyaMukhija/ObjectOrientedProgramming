#include<iostream>
#include<string>
using namespace std; 
int strend(char s[], char t[10])
{
	int j, i, a=0, b=0, count=0 ; 
	for(i=0; s[i]!='\0'; ++i)
		a++; 
	for(j=0; t[j]!='\0'; ++j)
		b++;
	for(i=b-1, j=a-1; i>=0, j>=0; --i, --j)
	{
			if(s[j]==t[i])
			{
				count++;
				continue;
			}
			else
				break; 				
	}
	if(count==a)
		return 1; 
	else
		return 0; 
}
int main()
{
	char s[10], t[10]; 
	cout<<"Enter the first string:"; 
	cin>>s; 
	cout<<"Enter the second string:"; 
	cin>>t; 
	if(strend)
	{
		cout<<"The second string is present after the first.";
	}
	else
		cout<<"The second string is not present in the first.";
	return 0; 
}
