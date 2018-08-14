#include<iostream>
#include<cstdio>
using namespace std; 
int main(void)
{
	cout<<"Enter a number:";
	int num; 
	cin>>num;  
	cout<<"Enter the number it is to be divided by:"; 
	int div; 
	cin>>div; 
	int rem=num/div; 
	int(number)=div*rem; 
	if(number<num)
		number+=div; 
	cout<<"The obtained number is:"<<number; 
	return 0; 
}
