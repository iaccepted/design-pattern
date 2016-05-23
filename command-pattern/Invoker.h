#ifndef __INVOKER_H__
#define __INVOKER_H__

#include "Command.h"

#include <vector>

using namespace std;

class Invoker
{
public:
	void execute()
	{
		for (auto ite = coms.begin(); ite != coms.end(); ++ite)
		{
			(*ite)->execute();
		}
	}

	void undo()
	{
		for (auto ite = coms.begin(); ite != coms.end(); ++ite)
		{
			(*ite)->undo();
		}
	}

	void addCommand(Command *com)
	{
		coms.push_back(com);
	}

private:
	vector<Command *> coms;
};

#endif