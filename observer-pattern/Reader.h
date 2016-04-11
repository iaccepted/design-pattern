#ifndef __READER_H__
#define __READER_H__

#include "Observer.h"

class Reader : public Observer
{
public:
	Reader(string name) : _name(name){}
	void update(Subject *s, string content);

public:
	string _name;
};

#endif