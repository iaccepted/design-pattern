#ifndef __ASUBJECT_H__
#define __ASUBJECT_H__

class Observer;

class Subject
{
public:
	virtual void addObserver(Observer *o) = 0;
	virtual void deleteObserver(Observer *o) = 0;
	virtual void notifyObservers() = 0;
};

#endif