#include <iostream>
using namespace std;
int factorial(int num)
{
	if(num<=1)
		return 1; 
	return num*factorial(num-1);
}
int main() 
{
	int num;
	cout<<"Hi! Enter a number:";
	cin>>num;
	int fact=factorial(num);
	cout<<"\nThe factorial is "<<fact;
	return 0;
}
