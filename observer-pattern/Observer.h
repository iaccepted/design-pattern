#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <string>

using namespace std;

class Subject;

class Observer
{
public:
	virtual void update(Subject *s, string content) = 0;
};

#endif