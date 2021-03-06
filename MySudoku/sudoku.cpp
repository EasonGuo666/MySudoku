// MySudoku.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Input.h"
#include "SudokuOperation.h"
#include <iostream>
#include <string.h>
#include <cstring>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	Input input(argc, argv);
	//analyse the input type and numbers of parameters 
	input.input_type_analyse();
	if (input.found_error())
	{
		printf("input error occurs!\n");
		return 0;
	}

	char type = input.get_type();
	int num = input.get_num();
	char* filename = input.get_filename();
	
	SudokuOperation operation;
	if (type == 'c')
	{
		operation.generate_ending(num);
	}
	else
	{
		if (type == 's')
			operation.solve_sudoku(filename);
	}

    return 0; 
}
