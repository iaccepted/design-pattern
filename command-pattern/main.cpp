#include "Command.h"
#include "LightCommand.h"
#include "TVCommand.h"
#include "Invoker.h"


int main()
{
	//invoker
	Invoker invoker;

	//command receiver--->the real object to execute command
	Light *light = new Light();
	TV *tv = new TV();

	//command
	LightCommand *lightCom = new LightCommand();
	TVCommand *tvCom = new TVCommand();

	lightCom->setReceiver(light);
	tvCom->setReceiver(tv);

	invoker.addCommand(lightCom);
	invoker.addCommand(tvCom);

	invoker.execute();

	invoker.undo();

	return 0;
}