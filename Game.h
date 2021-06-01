/*
 * Game.h
 *
 *  Created on: 1 Jun 2021
 *      Author: LeeZhengJun
 */

#ifndef GAME_H_
#define GAME_H_

#include "GameObject.h"

class Game {
private:
	GameObject objects[] = {GameObject(), GameObject(), GameObject()};
	int getPlayerObject();
	
public:
	Game();
	void run();
	virtual ~Game();
};

#endif /* GAME_H_ */
