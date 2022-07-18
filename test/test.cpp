//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//
//int readfile(string filename, vector<double>&v)
//{
//	ifstream ifs;
//	ifs.open(filename, ios::in);
//
//	double x = 0;
//
//	while (ifs >> x)
//	{
//		v.push_back(x);
//	}
//
//	ifs.close();
//
//	return 1;
//}
//
//int main()
//{
//	vector<double>v1;
//	vector<double>v2;
//	vector<double>v3;
//	readfile("standard.txt", v1);
//	readfile("result.txt", v2);
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		v3.push_back(v1.at(i) - v2.at(i));
//	}
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v3.at(i) << endl;
//	}
//
//	system("pause");
//	return 0;
//}