#include "Grid.h"


Grid::Grid(void)
{
	rowSize = 21;
	colSize = 21;
	ResizeGrid(rowSize, colSize);
}

Grid::Grid(const int rows, const int columns)
{
	rowSize = rows;
	colSize = columns;
	ResizeGrid(rowSize, colSize);
}

int Grid::GetRowSize(void) const
{
	return rowSize;
}

int Grid::GetColSize(void) const
{
	return colSize;
}

Cell Grid::GetCell( const int x, const  int y) const
{
	return grid[x][y];
}


void Grid::ResizeGrid(const int rows, const int columns)
{
	rowSize = rows;
	colSize = columns;
	grid.resize(rowSize, std::vector<Cell>(colSize));
}

void Grid::SetCell(const Cell& cell)
{
	grid[cell.GetX()][cell.GetY()] = cell;
}
