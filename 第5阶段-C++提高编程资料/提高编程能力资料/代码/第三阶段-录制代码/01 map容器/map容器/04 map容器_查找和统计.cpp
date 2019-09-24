//#include<iostream>
//using namespace std;
//#include <map>
//
////map容器 查找和统计
//void test01()
//{
//	//查找
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(3, 40));
//
//	map<int,int>::iterator pos = m.find(3);
//
//	if (pos != m.end())
//	{
//		cout << "查到了元素 key = " << (*pos).first << " value = " << pos->second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	//统计
//	//map不允许插入重复key 元素 ，count统计而言 结果要么是0 要么是1
//	//multimap的count统计可能大于1
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}