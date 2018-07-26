#include<iostream>
#include<string>

int main()//b比较字符串的长度而不是大小
{
	std::string s1,s2;
	std::cin>>s1>>s2;
	std::cout<<"compare"<<std::endl;
	std::string::size_type a,b;
	a=s1.size();
	b=s2.size();
	if(s1.size()==s2.size())
		std::cout<<"they are equall"<<std::endl;
	else if(a>b)
		std::cout<<s1<<std::endl;
	else if(a<b)
		std::cout<< s2<<std::endl;
	system("pause");
	
	return 0 ;
}
