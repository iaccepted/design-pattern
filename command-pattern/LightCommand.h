#ifndef __LIGHTCOMMAND_H__
#define __LIGHTCOMMAND_H__

#include "Command.h"
#include "Light.h"

class LightCommand : public Command
{
public:
	LightCommand() :_light(NULL){}

	void setReceiver(Light *light)
	{
		_light = light;
	}
	void execute()
	{
		if (_light != NULL)
		{
			_light->on();
		}
	}

	void undo()
	{
		if (_light != NULL)
		{
			_light->off();
		}
	}

private:
	Light *_light;
};

#endif