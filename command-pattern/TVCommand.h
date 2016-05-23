#ifndef __TVCOMMAND_H__
#define __TVCOMMAND_H__

#include "Command.h"
#include "TV.h"

class TVCommand : public Command
{
public:
	TVCommand() :_tv(NULL){}

	void setReceiver(TV *tv)
	{
		_tv = tv;
	}
	void execute()
	{
		if (_tv != NULL)
		{
			_tv->on();
		}
	}

	void undo()
	{
		if (_tv != NULL)
		{
			_tv->off();
		}
	}

private:
	TV *_tv;
};

#endif