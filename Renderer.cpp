#include "Renderer.h"
#include <iostream>
#include "Renderer.h"



void Display::CreateGrid(void)
{
	int rowSize = grid.GetRowSize();
	int columnSize = grid.GetColSize();
	//first dimentsion
	for (int x = 0; x < rowSize; x++)
	{//second dimentsion
		for (int y = 0; y < columnSize; y++)
		{
			
			if (x == 0 || x == rowSize - 1) grid.SetCell(Cell(x, y, BORDER));            //create horizontal border 
			else if (y == 0 || y == columnSize - 1) grid.SetCell(Cell(x, y, BORDER));    //create vertical border 
			else grid.SetCell(Cell(x, y, TREE));
		}
	}
	grid.SetCell(Cell(10, 10, FIRE));                                                  //set fire to middle cell
}

void Display::DisplayGrid(const Grid& grid)
{
	cout << endl;

	for (int x = 0; x < grid.GetRowSize(); x++)
	{
		for (int y = 0; y < grid.GetColSize(); y++)
		{
			displayCellState(grid.GetCell(x, y));
		}
		cout << endl;
	}
}
void Display::UpdateGrid(void)
{
	
	if (checkIfTree()) applySpread();

	for (int x = 1; x < grid.GetRowSize() - 1; x++)
	{
		for (int y = 1; y < grid.GetColSize() - 1; y++)
		{
			Cell cell = grid.GetCell(x, y);
			if (cell.GetState() == FIRE) cellsOnFire.push_back(cell);
			else if (cell.GetState() == EMPTY) emptyCells.push_back(cell);
		}
	}

	spreadFire(cellsOnFire);
	
}

void Display::SetGrid(const Grid& grid)
{
	this->grid = grid;
}
Grid Display::GetGrid(void) const
{
	return grid;
}

void Display::displayCellState(const Cell& cell)
{

	switch (cell.GetState())
	{
	case EMPTY:
		cout << " ";
		break;
	case TREE:

		cout << "*";
		break;
	case FIRE:

		cout << "X";
		break;
	case BORDER:

		cout << "#";
		break;
	}
}



bool Display::checkIfTree(void)
{
	bool trees = true;

	for (int x = 1; x < grid.GetRowSize() - 1; x++)
	{
		for (int y = 1; y < grid.GetColSize() - 1; y++)
		{
			Cell cell = grid.GetCell(x, y);
			if (cell.GetState() == FIRE) trees = false;
		}
	}

	return trees;
}

void Display::spreadFire(const std::vector<Cell>  & cellL)	

	{
	Cell fireCell;
	vector<Cell> vect;
	
	
	/*for (int i = 0; i < cellList.size(); i++)
	{
		fireCell = cellList[i];
		Cell cell = vect[j];
		for (int j = 0; j < cell[j].size(); j++)
		{
			vect[j][i].setstate(FIRE) << " ";
		}
		cout << endl;
		{
			if (vect[i][j] == FIRE)
			{
					if (random < (burnChance * 100) && vect[i - 1][j] GetState(TREE))   //  North.
					{
						vect[i - 1][j] = FIRE;
						grid.SetCell(cell);
					}
				}
				if (random < (burnChance * 100)) && vect[i + 1][j]GetState(TREE) )  //  South.
				{
					vect[i + 1][j] = FIRE;
					grid.SetCell(cell);
				}

				if (random < (burnChance * 100) && vect[i][j - 1])GetState(TREE)//  West.
				{
					vect[i][j - 1]  getState(FIRE);
					grid.SetCell(cell);

				}
				if (random < (burnChance * 100) && vect[i][j + 1] GetState(TREE)//  East.
				{
					vect[i][j + 1]. SetState(FIRE);
						grid.SetCell(cell);
				}

			}
		}
		*/
	
	
		
		
		for (int i = 0; i < cellL.size(); i++)
		{
			fireCell = cellL[i];
			
			for (int j = 0; j < vect.size(); j++)
			{
				Cell cell = vect[j];

				random = rand() % 100 + 1;

				if (cell.GetState() == TREE && random < (burnChance * 100)) cell.SetState(FIRE);
				grid.SetCell(cell);
				
			}

			fireCell.SetState(EMPTY);
			grid.SetCell(fireCell);
		}
	}

	



void Display::applySpread(void)
{
	for (int i = 0; i < 20; i++)  // within boundary
	{
		
		
			int x = random = rand() % 20 + 1;
			int y = random = rand() % 20 + 1;

			Cell cell = grid.GetCell(x, y);
			if (cell.GetState() == TREE) cell.SetState(FIRE);
			grid.SetCell(cell);
		

		////int x = random = rand() % 20 + 1;
		//int y = random = rand() % 20 + 1;
		
		//for cells in N,S,E,W
		/*random = rand() % 100 + 1;
		if (grid.GetCell(a + 1, b).GetState() == TREE && random < (burnChance * 100))
		{
			cell.SetState(FIRE);
			grid.SetCell(cell);
		}
		if (grid.GetCell(a-1 , b).GetState() == TREE && random < (burnChance * 100)) 
		{
			cell.SetState(FIRE);

			grid.SetCell(cell);
		}
		if (grid.GetCell(a, b+1).GetState() == TREE && random < (burnChance * 100)) 
		{
			cell.SetState(FIRE);

			grid.SetCell(cell);
		}
		if (grid.GetCell(a, b-1 ).GetState() == TREE && random < (burnChance * 100)) 
		{
			cell.SetState(FIRE);
			grid.SetCell(cell);
		}
	*/
		
		


	}
}









