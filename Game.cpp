/*
 * Game.cpp
 *
 *  Created on: 1 Jun 2021
 *      Author: LeeZhengJun
 */

#include <iostream>
#include "Game.h"

using namespace std;

Game::Game() {
	// TODO Auto-generated constructor stub

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::run() {
	
	for(int i=0; i<3; i++) {
		GameObject playerObject = objects[getPlayerObject()];
	}

}

int Game::getPlayerObject() {
	int option;
	cout << "1. Rock | 2. Paper | 3. Scissors" << endl;
	cout << "Enter an object" << endl;
	cout << "> " << flush;
	cin >> option;
	return option;
}

