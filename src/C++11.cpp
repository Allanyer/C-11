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

	// 1.1.1 ������������
	//����
	int i = 0, j = {1}, k{123};
	cout << "���Σ�����="<< sizeof(int) << endl;
	cout << "i= " << i << " j= " << j << " k= " << k << endl;
	//������
	short ashort = 0xab;
	cout << "�����ͣ�����= " << sizeof(short) << " ashort= " << ashort <<endl;
	//������
	long along = 1234;
	cout << "�����Σ�����= " << sizeof(long) << " " << along << endl;
	//������
	long long alonglong = 0xffffffff00000000;
	cout << "�����Σ�����= " << sizeof(long long) << " " << alonglong << endl;
	//������
	bool abool = false;
	cout << "�����ͣ�����= " << sizeof(bool) << " " << abool <<endl;
	//�ַ���
	//char achar = 'x';
	//cout << "�ַ��ͣ�����= " << sizeof(char) << " " << achar <<endl;
	//�����ȸ���
	float afloat = 1.234567890;
	cout << "�����ȸ��㣬����" << sizeof(float) << " " << afloat << endl;
	//˫���ȸ���
	double adouble = 1.123456789;
	cout << "˫���ȸ��㣬����= " << sizeof(double) << " " << adouble << endl;

	//1.1.2 ָ�롢���ú�void ����
	int *pint = &i; //ָ�룬��"���� *" ����
	int &aliasOfJ = j; // ���� ���ɡ� ���� &�� ����
	cout << "i���ڴ��ַΪ"<<pint<<"  �ڴ��ַ�洢������Ϊ:" << (*pint) << endl;
	cout << "j= "<<j<<"  anotherInt= "<<aliasOfJ<<endl;

	//void������
	void* px = nullptr;
	cout<<"px��ֵΪ"<<px<<endl <<endl;

	// 1.1.3 �ַ� �ַ���
	char iamchar = 'c';
	cout << "iamchar= "<< iamchar<<endl;
	iamchar = 0x12;
	cout<<"iamchar=" << iamchar<<endl<<endl;

	//1.1.4����
	int intarray[] = {1,2,3,4,5};
	cout<<"array size= "<<sizeof(intarray)/sizeof(intarray[0])<<endl;



	return 0;
}
