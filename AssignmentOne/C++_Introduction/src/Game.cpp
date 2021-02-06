#include "Game.hpp"
#include <string>

	Game::Game(std::string title, bool handheld, int maxPlayers, bool multiPlatform, bool online, std::string genre, bool licensed, std::string publishers, bool sequel, int reviewScore, double sales, double usedPrice, std::string releaseConsole, char releaseRating, bool reRelease, int releaseYear){
		this->title = title;
		this->handheld = handheld;
		this->maxPlayers = maxPlayers;
		this->multiPlatform = multiPlatform;
		this->online = online;
		this->genre = genre;
		this->licensed = licensed;
		this->publishers = publishers;
		this->sequel = sequel;
		this->reviewScore = reviewScore;
		this->sales = sales;
		this->usedPrice = usedPrice;
		this->releaseConsole = releaseConsole;
		this->releaseRating = releaseRating;
		this->reRelease = reRelease;
		this->releaseYear = releaseYear;
	}

	std::string Game::getName(){
		return this->title;
	}

	bool Game::getHandheld(){
		return this->handheld;
	}

	int Game::getMaxPlayers(){
		return this->maxPlayers;
	}

	bool Game::getMultiPlatform(){
		return this->multiPlatform;
	}

	bool Game::getOnline(){
		return this->online;
	}

	std::string Game::getGenre(){
		return this->genre;
	}

	bool Game::getLicensed(){
		return this->licensed;
	}

	std::string Game::getPublishers(){
		return this->publishers;
	}

	bool Game::getSequel(){
		return this->sequel;
	}

	int Game::getReviewScore(){
		return this->reviewScore;
	}

	double Game::getSales(){
		return this->sales;
	}

	double Game::getUsedPrice(){
		return this->usedPrice;
	}

	std::string Game::getConsole(){
		return this->releaseConsole;
	}

	char Game::getRating(){
		return this->releaseRating;
	}

	bool Game::getReRelease(){
		return this->reRelease;
	}

	int Game::getReleaseYear(){
		return this->releaseYear;
	}
