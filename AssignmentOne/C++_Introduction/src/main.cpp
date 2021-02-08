#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Game.h"
#include <iostream>
#include <vector>

std::vector<Game*>* getGames(){
    //COMPLETE ME
	std::vector<Game*>* games = new std::vector<Game*>;
	std::fstream fin;
	fin.open("./data/video_games.csv", std::fstream::in);
	std::vector<std::string> row;
	std::string line, word, temp;
	getline(fin, line);

	while(fin >> temp){
		row.clear();
		getline(fin, line, '\n');
		std::stringstream s(line);

		while(getline(s, word, ',')){
			row.push_back(word);
		}
		std::string title = row[0];
		bool online;
		std::istringstream(row[4]) >> std::boolalpha >> online;
		double sales = std::stod(row[10]);
		std::string console = row[12];
		char rating = row[13][0];
		int releaseYear = std::stoi(row[15]);
		Game* toAdd = new Game(title, online, sales, console, rating, releaseYear);
		games->push_back(toAdd);
	}
	fin.close();
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
