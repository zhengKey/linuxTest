#include<iostream>
using namespace std
int main()
{
	std::cout<<"hello"<<std::endl;
	std::cout<<"are you ok"<<std::endl;
	int *p = new int();
	*p = 4;
	char *psz = (char*) "hello china";
	std::cout<<psz;
	return 2;
}
