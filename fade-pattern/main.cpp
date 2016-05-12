#include "Fade.h"

int main()
{
	Fade fade;
	//fade类就是门面，他内部会调用后面的相应子系统来完成一个复杂的请求，子系统包括Light， Music， TV 等等
	//当我们进入家门的时候，直接调用
	fade.turnAllOn();


	//当要睡觉时，直接调用
	fade.turnAllOff();

	return 0;
}