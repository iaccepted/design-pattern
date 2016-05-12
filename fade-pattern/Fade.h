#ifndef __FADE_H__
#define __FADE_H__

#include "Light.h"
#include "Music.h"
#include "TV.h"

class Fade
{
public:
	Fade()
	{
		_light = new Light();
		_tv = new TV();
		_music = new Music();
	}

	void turnAllOn()
	{
		_light->on();
		_music->on();
		_tv->on();
	}

	void turnAllOff()
	{
		_light->off();
		_music->off();
		_tv->off();
	}

	/*void setLight(Light *light)
	{
		_light = light;
	}

	void setTV(TV *tv)
	{
		_tv = tv;
	}

	void setMusic(Music *music)
	{
		_music = music;
	}*/

private:
	Light *_light;
	Music *_music;
	TV *_tv;
};

#endif