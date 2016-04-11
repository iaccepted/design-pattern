#include "Publisher.h"
#include "Observer.h"

void Publisher::addObserver(Observer *o)
{
	obs.insert(o);
}

void Publisher::deleteObserver(Observer *o)
{
	auto ite = obs.find(o);
	if (ite != obs.end())obs.erase(ite);
}

void Publisher::notifyObservers()
{
	for (auto ite = obs.begin(); ite != obs.end(); ++ite)
	{
		(*ite)->update(this, _content);
	}
}