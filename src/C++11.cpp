//============================================================================
// Name        : C++11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// 1.1.1 基本数据类型
	//整形
	int i = 0, j = {1}, k{123};
	cout << "整形，长度="<< sizeof(int) << endl;
	cout << "i= " << i << " j= " << j << " k= " << k << endl;
	//短整型
	short ashort = 0xab;
	cout << "短整型，长度= " << sizeof(short) << " ashort= " << ashort <<endl;
	//长整形
	long along = 1234;
	cout << "长整形，长度= " << sizeof(long) << " " << along << endl;
	//长整形
	long long alonglong = 0xffffffff00000000;
	cout << "长整形，长度= " << sizeof(long long) << " " << alonglong << endl;
	//布尔型
	bool abool = false;
	cout << "布尔型，长度= " << sizeof(bool) << " " << abool <<endl;
	//字符型
	//char achar = 'x';
	//cout << "字符型，长度= " << sizeof(char) << " " << achar <<endl;
	//单精度浮点
	float afloat = 1.234567890;
	cout << "单精度浮点，长度" << sizeof(float) << " " << afloat << endl;
	//双精度浮点
	double adouble = 1.123456789;
	cout << "双精度浮点，长度= " << sizeof(double) << " " << adouble << endl;

	//1.1.2 指针、引用和void 类型
	int *pint = &i; //指针，由"类型 *" 定义
	int &aliasOfJ = j; // 引用 ，由“ 类型 &” 定义
	cout << "i的内存地址为"<<pint<<"  内存地址存储的内容为:" << (*pint) << endl;
	cout << "j= "<<j<<"  anotherInt= "<<aliasOfJ<<endl;

	//void空类型
	void* px = nullptr;
	cout<<"px的值为"<<px<<endl <<endl;

	// 1.1.3 字符 字符串
	char iamchar = 'c';
	cout << "iamchar= "<< iamchar<<endl;
	iamchar = 0x12;
	cout<<"iamchar=" << iamchar<<endl<<endl;

	//1.1.4数组
	int intarray[] = {1,2,3,4,5};
	cout<<"array size= "<<sizeof(intarray)/sizeof(intarray[0])<<endl;



	return 0;
}
