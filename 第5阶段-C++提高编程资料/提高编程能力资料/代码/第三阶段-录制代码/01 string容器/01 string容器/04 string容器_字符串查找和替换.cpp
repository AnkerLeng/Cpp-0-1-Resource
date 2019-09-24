//#include<iostream>
//using namespace std;
//#include <string>
//
////字符串查找和替换
//
////1、查找
//void test01()
//{
//	string str1 = "abcdefgde";
//
//	int pos = str1.find("de");
//
//	if (pos == -1)
//	{
//		cout << "未找到字符串" << endl;
//	}
//	else
//	{
//		cout << "找到字符串，pos = " << pos << endl;
//	}
//	
//	//rfind 和find区别
//	//rfind从右往左查找   find从左往右查找
//	pos = str1.rfind("de");
//
//	cout << "pos = " << pos << endl;
//}
//
////2、替换
//void test02()
//{
//	string str1 = "abcdefg";
//
//	//从 1号位置起 3个字符 替换为"1111"
//	str1.replace(1, 3, "1111");
//
//	cout << "str1 = " << str1 << endl;
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}