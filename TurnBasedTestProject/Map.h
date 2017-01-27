#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Globals.h"

using namespace std;

struct Tile
{
	//int xCoordinate;
	//int yCoordinate;
	Coordinate coordinate;
	bool encounterTile;
	int tileType;

	Tile()
	{
		coordinate.x = -1;
		coordinate.y = -1;
		encounterTile = false;
	}

	Tile(int xPos, int yPOs, bool encounter = false)
	{
		coordinate.x = -1;
		coordinate.y = -1;
		encounterTile = encounter;
	}
};

class Map
{
public:
	Map();

	vector<vector<Tile>> tileMap;

	void LoadMapFromFile(string fileName);

	void DrawMap()
	{
		system("cls");
		for (int i = 0; i < tileMap.size(); i++)
		{
			vector<Tile> tileRow;
			for (int j = 0; j < tileMap[i].size(); j++)
			{
				cout << tileMap[i][j].tileType << " ";
			}
			cout << "\n";
		}
		cout << "\n\n\n\n";
		system("pause");
	}

	~Map();
};

