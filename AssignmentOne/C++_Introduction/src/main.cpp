#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Game.hpp"
#include <iostream>
#include <vector>

std::vector<Game*>* getGames(){
    //COMPLETE ME
	std::vector<Game*>* games = new std::vector<Game*>;
	std::fstream fin;
	fin.open("video_games.csv", std::fstream::in);
	std::vector<std::string> row;
	std::string line, word, temp;

	while(fin >> temp){
		row.clear();
		getline(fin, line);
		std::stringstream s(line);

		while(getline(s, word, ',')){
			row.push_back(word);
		}

		bool handheld;
		std::istringstream(row[1]) >> std::boolalpha >> handheld;
		bool multiPlatform;
		std::istringstream(row[3]) >> std::boolalpha >> multiPlatform;
		bool online;
		std::istringstream(row[4]) >> std::boolalpha >> online;
		bool licensed;
		std::istringstream(row[6]) >> std::boolalpha >> licensed;
		bool sequel;
		std::istringstream(row[8]) >> std::boolalpha >> sequel;
		bool reRelease;
		std::istringstream(row[14]) >> std::boolalpha >> reRelease;
		Game* toAdd = new Game(row[0], handheld, stoi(row[2]), multiPlatform, online, row[5], licensed, row[7], sequel, stoi(row[9]), stod(row[10]), stod(row[11]), row[12], row[13], reRelease, stoi(row[15]));
		//toAdd = &currentGame;
		games->push_back(toAdd);
	}
	return games;
}

TEST_CASE( "Testing...", "[all]" ) {
    std::vector<Game*> *games = getGames();
    REQUIRE( games->size() == 1114);
    Game* g = games->at(222);
    REQUIRE( g->getName() == "WWE SmackDown vs. Raw 2007" );
    g = games->at(235);
    REQUIRE( g->getName() == "Rockstar Games presents Table Tennis");
    REQUIRE( g->getOnline());
    g = games->at(254);
    REQUIRE( g->getSales() == 0.23 );
    g = games->at(541);
    REQUIRE( g->getConsole() == "PlayStation 3");
    g = games->at(978);
    REQUIRE( g->getRating() == 'M');
    g = games->at(1113);
    REQUIRE( g->getName() == "Chicken Hunter");
    REQUIRE( g->getReleaseYear() == 2008);
    double value = 0;
    for(auto it=games->begin(); it!=games->end(); ++it){
        value += (*it)->getSales();
    }
    REQUIRE( value > 574.3);
    REQUIRE( value < 574.4);
}
