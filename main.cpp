#include<iostream>

using namespace std;

int fact(int val)
{
	
	int result=1;
	//cout<<"һ�����Ľ׳�:"<<endl;
	while(val>0)
	{		
		/*result*=i;
		i=i-1;*/
		result*=val--;
	}
	/*cout<<"���Ϊ:"<<result<<endl;*/
	/*system("pause");*/
	return result;
}
int main()
{
	int i=fact(5);
	cout<<"5��Ϊ"<<i<<endl;
	system("pause");
	return 0;
}