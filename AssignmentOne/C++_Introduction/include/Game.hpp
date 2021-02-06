#ifndef __HPP__GAME__
#define __HPP__GAME__

#include <string>
#include <vector>

class Game{
	public:
		Game(std::string title, bool handheld, int maxPlayers, bool multiPlatform, bool online, std::string genre, bool licensed, std::string publishers, bool sequel, int reviewScore, double sales, double usedPrice, std::string releaseConsole, char releaseRating, bool reRelease, int releaseYear);
		std::string getName();
		bool getHandheld();
		int getMaxPlayers();
		bool getMultiPlatform();
		bool getOnline();
		std::string getGenre();
		bool getLicensed();
		std::string getPublishers();
		bool getSequel();
		int getReviewScore();
		double getSales();
		double getUsedPrice();
		std::string getConsole();
		char getRating();
		bool getReRelease();
		int getReleaseYear();
		std::vector<Game*>* getGames();

	private:
		std::string title;
		bool handheld;
		int maxPlayers;
		bool multiPlatform;
		bool online;
		std::string genre;
		bool licensed;
		std::string publishers;
		bool sequel;
		int reviewScore;
		double sales;
		double usedPrice;
		std::string releaseConsole;
		char releaseRating;
		bool reRelease;
		int releaseYear;
};

#endif
