#include "Adaptee.h"
#include "Adapter.h"
#include "Target.h"

//���������������������д洢��һ���������߶���
int main()
{
	Target *target = new Adapter(new Adaptee());

	target->request();

	return 0;
}