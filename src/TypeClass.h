#ifndef _TYPE_CLASS_H_
#define _TYPE_CLASS_H_
namespace type_class {
	void test();
	class Base{
	public:
		Base();//Ĭ�Ϲ��캯��
		Base(int a);//��ͨ���캯��
		Base(const Base& other);//�������캯��
		Base& operator = (const Base& other);//�������ƺ���

		Base(Base&& other);//�ƶ����캯��
		Base& operator = (Base&& other);//�ƶ���ֵ����
		~Base();//��������

	protected:
		int getMemberB(){//��Ա��������ͷ�ļ���ֱ��ʵ��
			return memberB;
		}
		int deleteC(int a, int b = 100,
				bool test = true);//��Ա������ͷ�ļ�������Դ�ļ�ʵ��

	private:
		int memberA;//��Ա����
		int memberB;
		static const int size = 512; //��̬��Ա����
		int* pMemberC;
	};
}
