# Forests-Fire-Simulator 🔥

This project was builtto models the spread of fire in a 2D forest environment as a part of the MOD003197 Object Oriented C++ module. Fire simulation can be modelled in software and is an important area of research in fire safetyi,fire drill managementii, fire investigationiii, and with applications in many computer
game scenariosiv .One way to look at the world in software is to study a process as a group of smaller pieces (or cells or sites) that are somehow related. For example the world can be viewed as a rectangular grid of cells. Rules specify how a cell changes state over time based on the states of the
cells around it. Each piece corresponds to an area (or volume) in the world and each piece can be associated with one of several possible states at any given time. A computer simulation involving such a system is called a cellular automaton. 

The simulation composed of a 21x21 grid of cells, where all cells contain a tree except for a 1-cell thick perimeter boundary layer of empty cells. The boundary is similar to a firebreak or an area with no trees; proximity to such a boundary cell cannot cause an internal tree to catch fire. This insulating boundary is called an absorbing boundary condition. The forest was represented using ASCII characters & for a tree, an x for a burning tree and a blank space for an empty cell.
