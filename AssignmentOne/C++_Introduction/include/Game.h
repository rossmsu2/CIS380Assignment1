#ifndef __HPP__GAME__
#define __HPP__GAME__

#include <string>
#include <vector>

class Game{
	public:
		Game(std::string title, bool online, double sales, std::string releaseConsole, char releaseRating, int releaseYear);
		std::string getName();
		bool getOnline();
		double getSales();
		std::string getConsole();
		char getRating();
		int getReleaseYear();
		std::vector<Game*>* getGames();

	private:
		std::string title;
		bool online;
		double sales;
		std::string releaseConsole;
		char releaseRating;
		int releaseYear;
};

#endif
