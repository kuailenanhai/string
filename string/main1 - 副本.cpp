#include <iostream>
#include <string>

int main()
{
	
	std::string s("david");//字符串尽量多用这种方法进行初始化，拷贝初始化是要有一个临时的默认初始化后的变量赋值
	std::cout<< s << std::endl;
	std::cout<< "david"<<std::endl;//这是在c++中以字符串数组进行保存的后面有一个空字符\0
	system("pause");
	return 0;
}