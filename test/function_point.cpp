//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//#include<string>
//using namespace std;
//
//int function(void const* a, void const* b)
//{
//	//cout << "���ô˺���" << endl;
//	int* m = (int*)a;
//	int* n = (int*)b;
//	return *m - *n;
//}
//
//int function_char(void const* a, void const* b)
//{
//	//cout << "���ô˺���" << endl;
//	//char* m = (char*)a;
//	//char* n = (char*)b;
//
//	//if (*m > 'A' && *m < 'Z')
//	//	*m = *m + 32;
//
//	//if (*n > 'A' && *n < 'Z')
//	//	*n = *n + 32;
//
//	//return *m - *n;
//
//	char m = *((char*)a);
//	char n = *((char*)b);
//
//	if (m > 'A' && m < 'Z')
//		m = m + 32;
//
//	if (n > 'A' && n < 'Z')
//		n = n + 32;
//
//	return m - n;
//}
//
//int main()
//{
//	cout << "function��ַ"<<&function << endl;
//
//	int a = 10;
//	int b = 5;
//
//	//����ָ�� �������������� ��������Ϊ��*����ָ�����ƣ�
//	int (*fp)(void const*, void const*);
//
//	fp = &function;
//
//	(*fp)(&a, &b);//������ָͨ������ķ�ʽ���е��� *fp=function
//	fp(&a, &b);//ֱ�ӵ���
//
//	int arr[] = {2,10,20,40,22,1};
//
//	qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), &function);
//
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	char arr1[] = {"acdbQWERADT"};
//
//	qsort(arr1, sizeof(arr1) / sizeof(char)-1, sizeof(char), &function_char);
//
//	for (int i = 0; i < sizeof(arr1) / sizeof(char)-1; i++)
//	{
//		cout << arr1[i] << endl;
//	}
//
//	system("pause");
//	return 0;
//
//}