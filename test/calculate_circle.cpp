//#include<iostream>
//
//using namespace std;
//
////让用户输入一个圆的半径，计算这个圆的周长和面积，并输出（保留两位小数）
//
//#define PI 3.14;
//
//int main()
//{
//	double r = 0;
//	double per = 0;
//	double s = 0;
//	cout << "请输入一个半径：" << endl;
//	cin >> r;
//	per = 2 *r* PI;
//	s = r * r * PI;
//
//	cout.precision(2);
//	cout.flags(cout.fixed);
//
//	cout << "周长per:" << per << " 面积s:" << s << endl;
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
		cout << "你的名字：" << name << endl;
		i++;
	}
	cout << i << endl;
	system("pause");
	return 0;
}