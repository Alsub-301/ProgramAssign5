#pragma once
#include <iostream>
#include <fstream>

//function that will read in a file, reverse its content, line by line and then output into another file
bool ReverseContent(std::ifstream&, std::ofstream&);