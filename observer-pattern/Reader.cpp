#include <iostream>
#include "Reader.h"

using namespace std;

//s:���ĸ����ⷢ���ĸ��£� content�����µ�����
void Reader::update(Subject *s, string content)
{
	cout << "I am " << _name << ", I receive --" << content << "-- from " << s << endl;
}