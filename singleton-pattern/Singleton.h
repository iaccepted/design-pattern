#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include <stdlib.h>
#include <iostream>

class Singleton
{
public:
	static Singleton *getInstance()
	{
		//这种写法不能在多线程环境下使用，如果在多线程环境下使用，可以使用加锁双重检查的写法
		//即先判断是NULL则加锁，所内再次判断是NULL方进行对象的生成
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