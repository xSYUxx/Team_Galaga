#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"

// 弾の最大数を定義
enum  {
	SHOT_MAX = 2
};

// 弾の定義
struct EShot {
	bool active;

	float x;
	float y;

};



class CEShot
{
public:
	CEShot();
	~CEShot();

	float shot_X;
	float shot_Xv;
	int count;
	void Play_Eshot();
};
