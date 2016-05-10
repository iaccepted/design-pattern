#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include <stdlib.h>
#include <iostream>

class Singleton
{
public:
	static Singleton *getInstance()
	{
		//����д�������ڶ��̻߳�����ʹ�ã�����ڶ��̻߳�����ʹ�ã�����ʹ�ü���˫�ؼ���д��
		//�����ж���NULL������������ٴ��ж���NULL�����ж��������
		if (_instance == NULL)
		{
			_instance = new Singleton();
		}
		return _instance;
	}

	void print()
	{
		std::cout << this << std::endl;
	}

private:
	static Singleton *_instance;
	Singleton()
	{
	}
};

#endif