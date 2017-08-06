#include <iostream>
using namespace std;
//�񺺵���
class Singleton
{
public:
	static Singleton* GetInstance() //����һ����̬�Ķ���ָ��
	{
		return instance;
	}
	static void DestroyInstance() //���ٶ���
	{
		delete instance;
		instance = NULL;
	}
private:
	Singleton() //���캯����Ϊ˽��
	{
		cout << "Singleton()" << endl;
	}
	static Singleton* instance;//��̬��Ա��ָ��Singleton�����ָ��
};
Singleton* Singleton::instance = new Singleton(); //��̬��Ա��������ʼ��
int main()
{
	cout << "main run..." << endl; //��֤��̬����Ĵ�����main֮ǰ
	Singleton* _s1 = Singleton::GetInstance();
	Singleton* _s2 = Singleton::GetInstance();
	cout << _s1 << endl;
	cout << _s2 << endl;
	system("pause");
	return 0;
}