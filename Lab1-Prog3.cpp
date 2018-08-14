#include<iostream>
#include<cmath>
using namespace std; 
int is_square(int num)
{
	if(num<=0)
		return 0; 
	int s=sqrt(num); 
	if(s*s==num)
		return 1; 
	return 0;
}
int main(void)
{
	for (int i=1; i<=9; ++i)
	{
		for(int j=0; j<=9; ++j)
		{
			int num=1100*i + 11*j; 
			if(is_square(num))
				cout<<num<<endl;
		}
	}
}
