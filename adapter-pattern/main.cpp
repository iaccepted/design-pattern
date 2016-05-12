#include "Adaptee.h"
#include "Adapter.h"
#include "Target.h"

//对象适配器，适配器类中存储有一个被适配者对象
int main()
{
	Target *target = new Adapter(new Adaptee());

	target->request();

	return 0;
}