
#include<iostream>
#include<string>

using namespace std;
int main()
{
	std::string s ;
	while(getline(cin,s))
		cout<<s<<endl;//ÿ�ζ�һ�п���ͨ������ָʾ�����Ķ��ļ������������
	std::string c;
	while(cin>>c)
		cout<<c<<endl;//word

	/*
	cout<<"����������֣� "<<endl;
    cin>> s;//ÿ�������뵽�ո�ͽ���
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
