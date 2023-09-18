#ifndef RENDERER_H
#define RENDERER_H

#include "Cell.h"
#include "Grid.h"
#include <Windows.h>
#include <vector>



class Display
{
public:
	
	void CreateGrid(void);
	void DisplayGrid(const Grid& grid);
	void UpdateGrid(void);									// Renders a Grid to the console.
		

	Grid GetGrid(void) const;
	void SetGrid(const Grid& grid);
	void displayCellState(const Cell& cell);
															// Checks the Grid too see if the Grid is all TREE Cells. True if the all Cells are TREE's. false if not
	bool checkIfTree(void);
	void spreadFire(const vector<Cell>& cellList);		// Turns surrounding Cells on FIRE.  input : The list of FIRE Cells
	void applySpread(void);									//The list of EMPTY Cells input

private:
	Grid grid;
	float burnChance=0.5;
	vector<Cell> cellsOnFire;
	vector<Cell> emptyCells;
	int random;
	int forestsize = 20;


};

#endif