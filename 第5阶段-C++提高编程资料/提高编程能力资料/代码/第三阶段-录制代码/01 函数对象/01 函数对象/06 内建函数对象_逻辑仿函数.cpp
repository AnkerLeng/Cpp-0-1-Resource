//#include<iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <functional>
//
////内建函数对象_逻辑仿函数
////逻辑非  logical_not
//
//void test01()
//{
//	vector<bool>v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//利用逻辑非  将容器v 搬运到 容器v2中,并执行取反操作
//	vector<bool>v2;
//	v2.resize(v.size());
//
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
//
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
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