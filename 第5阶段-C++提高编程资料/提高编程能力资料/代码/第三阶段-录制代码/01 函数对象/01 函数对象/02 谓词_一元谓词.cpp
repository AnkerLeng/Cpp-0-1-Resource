//#include<iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
////仿函数 返回值类型是bool数据类型，称为谓词
////一元谓词
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//查找容器中 有没有大于5的数字
//	//GreaterFive() 匿名函数对象
//	vector<int>::iterator it =  find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了大于5的数字为： " << *it << endl;
//	}
//
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}