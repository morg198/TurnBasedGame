#include "Map.h"



Map::Map()
{
}

void Map::LoadMapFromFile(string fileName)
{
	ifstream inputFile(fileName);

	if (!inputFile.is_open())
	{
		cerr << "Error Could Not open " << fileName;
	}
	else
	{
		vector<int> tempTilesRow;
		int numRows, numCols;

		int t = 0;

		inputFile >> numRows >> numCols;

		while (inputFile >> t)
		{
			tempTilesRow.push_back(t);
		}

	

		int it = 0;
		for (int i = 0; i < numRows; i++)
		{
			vector<Tile> tileRow;
			for (int j = 0; j < numCols; j++)
			{
				Tile currentTile(j, i);
				int test = tempTilesRow[it];
				currentTile.tileType = test;
				tileRow.push_back(currentTile);
				it++;
			}
			tileMap.push_back(tileRow);
		}
	}
	inputFile.close();
}

Map::~Map()
{
}
