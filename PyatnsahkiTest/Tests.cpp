#include "catch2/catch.hpp"
#include "Game.cpp"

TEST_CASE("CreateGameClass")
{
	Game *game = new Game();
	REQUIRE(game != NULL);
}