// MySudoku.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Input.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	Input input(argc, argv);
	input.inputTypeAnalyse();

    return 0; 
}