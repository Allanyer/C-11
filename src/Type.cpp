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
		//修改形参的值为9999，该函数返回后，实参的值就变成了9999
		alias =9999;
	}
}
void changeNoRef(int x){
	//修改形参的值为9999，该函数返回后，实参的值不受影响
	x = 9999;
}
