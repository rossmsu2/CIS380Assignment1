#include "Game.h"
#include <string>

	Game::Game(std::string title, bool online, double sales, std::string releaseConsole, char releaseRating, int releaseYear){
		this->title = title;
		this->online = online;
		this->sales = sales;
		this->releaseConsole = releaseConsole;
		this->releaseRating = releaseRating;
		this->releaseYear = releaseYear;
	}

	std::string Game::getName(){
		return this->title;
	}

	bool Game::getOnline(){
		return this->online;
	}

	double Game::getSales(){
		return this->sales;
	}

	std::string Game::getConsole(){
		return this->releaseConsole;
	}

	char Game::getRating(){
		return this->releaseRating;
	}

	int Game::getReleaseYear(){
		return this->releaseYear;
	}
