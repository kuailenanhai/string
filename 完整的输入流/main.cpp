
#include<iostream>
#include<string>

using namespace std;
int main()
{
	std::string s ;
	while(getline(cin,s))
		cout<<s<<endl;//每次读一行可以通过命令指示快速阅读文件例如哈利波特
	std::string c;
	while(cin>>c)
		cout<<c<<endl;//word

	/*
	cout<<"输入你的名字： "<<endl;
    cin>> s;//每个单词入到空格就结束
	cout<< s <<endl;
	*/
	/*string b;
	cout<<"write your name :"<<endl;
	getline(cin,b);
	cout<<s<<endl;
	*/
	system("pause");


	return 0;
}
