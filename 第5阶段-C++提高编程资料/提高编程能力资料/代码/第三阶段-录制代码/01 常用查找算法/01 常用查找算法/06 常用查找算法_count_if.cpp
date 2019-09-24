#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>

//常用查找算法  count_if

//统计内置数据类型
class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);

	int num = count_if(v.begin(), v.end(), Greater20());

	cout << "大于20的元素个数为： " << num << endl;
}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

class AgeGreater20
{
public:
	bool operator()(const Person & p)
	{
		return p.m_Age > 20;
	}
};

//统计自定义数据类型
void test02()
{
	vector<Person>v;
	
	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 40);
	Person p5("曹操", 20);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//统计  大于20岁人员个数
	int num = count_if(v.begin(), v.end(), AgeGreater20());
	cout << "大于20岁的人员个数为：" << num << endl;
}

int main() {

	//test01();

	test02();

	system("pause");

	return 0;
}