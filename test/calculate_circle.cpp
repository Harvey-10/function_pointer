//#include<iostream>
//
//using namespace std;
//
////���û�����һ��Բ�İ뾶���������Բ���ܳ���������������������λС����
//
//#define PI 3.14;
//
//int main()
//{
//	double r = 0;
//	double per = 0;
//	double s = 0;
//	cout << "������һ���뾶��" << endl;
//	cin >> r;
//	per = 2 *r* PI;
//	s = r * r * PI;
//
//	cout.precision(2);
//	cout.flags(cout.fixed);
//
//	cout << "�ܳ�per:" << per << " ���s:" << s << endl;
//}

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name;
	int i = 0;
	while (cin >> name)
	{
		cout << "������֣�" << name << endl;
		i++;
	}
	cout << i << endl;
	system("pause");
	return 0;
}