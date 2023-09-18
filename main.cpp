





#include "Renderer.h"
#include <iostream>
#include <string>


int main(void)
{
	cout << "  C++ version\n";
	cout << "  FOREST FIRE SIMULATION.\n" << endl;
	cout << "\n";
	cout << "  Map of forest.\n";
	cout << "  Fire started at 'X'.\n";
	cout << "  Burned trees are indicated BY EMPTY SPACES'.\n";
	cout << "\n";

	Grid* grid = new Grid(21, 21);

	Display* display = new Display();
	string in;
	bool redo = true;

	display->SetGrid(*grid);
	display->CreateGrid();
	display->DisplayGrid(display->GetGrid());

	cout << "   " << endl;

	while (redo)
	{
		cout << "Press Enter" << endl;

		std::getline(std::cin, in);

		if (in != "")
			redo = false;
		else


		display->UpdateGrid();
		display->DisplayGrid(display->GetGrid());

	}
	

	return 0;


}

