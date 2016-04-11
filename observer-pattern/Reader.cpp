#include <iostream>
#include "Reader.h"

using namespace std;

//s:由哪个主题发布的更新， content：更新的内容
void Reader::update(Subject *s, string content)
{
	cout << "I am " << _name << ", I receive --" << content << "-- from " << s << endl;
}