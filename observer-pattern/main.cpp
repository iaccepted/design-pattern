#include <iostream>
#include <string>
#include "Publisher.h"
#include "Reader.h"

using namespace std;

int main()
{
	Publisher p;

	Reader *a, *b, *c;
	a = new Reader("A");
	b = new Reader("B");
	c = new Reader("C");

	p.addObserver(a);
	p.addObserver(b);
	p.addObserver(c);
	p.setContent("最新消息");

	
	p.deleteObserver(a);
	p.setContent("newest news");

	return 0;
}