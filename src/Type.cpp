#include "Type.h"

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

namespace my_type{
	void test(){
		cout<<"this is test"<<endl;
	}
	void chandeRef(int & alias){
		//�޸��βε�ֵΪ9999���ú������غ�ʵ�ε�ֵ�ͱ����9999
		alias =9999;
	}
}
void changeNoRef(int x){
	//�޸��βε�ֵΪ9999���ú������غ�ʵ�ε�ֵ����Ӱ��
	x = 9999;
}
