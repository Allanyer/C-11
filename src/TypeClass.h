#ifndef _TYPE_CLASS_H_
#define _TYPE_CLASS_H_
namespace type_class {
	void test();
	class Base{
	public:
		Base();//默认构造函数
		Base(int a);//普通构造函数
		Base(const Base& other);//拷贝构造函数
		Base& operator = (const Base& other);//拷贝复制函数

		Base(Base&& other);//移动构造函数
		Base& operator = (Base&& other);//移动赋值函数
		~Base();//析构函数

	protected:
		int getMemberB(){//成员函数：在头文件里直接实现
			return memberB;
		}
		int deleteC(int a, int b = 100,
				bool test = true);//成员函数在头文件声明，源文件实现

	private:
		int memberA;//成员变量
		int memberB;
		static const int size = 512; //静态成员变量
		int* pMemberC;
	};
}
