#include<iostream>

using namespace std;

int fact(int val)
{
	
	int result=1;
	//cout<<"一个数的阶乘:"<<endl;
	while(val>0)
	{		
		/*result*=i;
		i=i-1;*/
		result*=val--;
	}
	/*cout<<"结果为:"<<result<<endl;*/
	/*system("pause");*/
	return result;
}
int main()
{
	int i=fact(5);
	cout<<"5！为"<<i<<endl;
	system("pause");
	return 0;
}