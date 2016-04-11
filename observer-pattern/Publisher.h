#ifndef __PUBLISHER_H__
#define __PUBLISHER_H__

#include <unordered_set>
#include <string>
#include "Subject.h"

using namespace std;

//��Ϣ������
class Publisher : public Subject
{
public:
	void addObserver(Observer *o);
	void deleteObserver(Observer *o);
	void notifyObservers();

	//ģ����Ϣ�ı�
	void setContent(string content)
	{
		_content = content;
		this->notifyObservers();
	}

private:
	string _content;
	unordered_set<Observer *> obs;
};

#endif