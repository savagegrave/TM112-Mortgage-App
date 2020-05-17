/*******************************************************************************************************************************
	
	This file is to set up the console window for my programs.
	This file is open source, but please do not change this header file without consent or remove any copyright notices and 
	author details.

	Written by Steven Houldey.

*/

#pragma once
#include <stdlib.h>
#include <Windows.h>
#include <tchar.h>

namespace SavageWindow
{

    HANDLE wHnd;    // Handle to write to the console.
    HANDLE rHnd;    // Handle to read from the console.
    HANDLE hstdin;
    HANDLE hstdout;
    WORD   index = 0;


    void setupWindow()
    {
        // Set up the handles for reading/writing:
        wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
        rHnd = GetStdHandle(STD_INPUT_HANDLE);
        hstdin = GetStdHandle(STD_INPUT_HANDLE);
        hstdout = GetStdHandle(STD_OUTPUT_HANDLE);

        //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 128);

       
        // Set up the required window size:
        SMALL_RECT windowSize = { 0, 0, 79, 49 };

        // Change the console window size:
        SetConsoleWindowInfo(wHnd, TRUE, &windowSize);

        // Create a COORD to hold the buffer size:
        COORD bufferSize = { 80, 50 };

        // Change the internal buffer size:
        SetConsoleScreenBufferSize(wHnd, bufferSize);
       
      
        // Change the window title:
        SetConsoleTitle(TEXT("TM112 Open University - Mortgage Program"));
        FlushConsoleInputBuffer(hstdin);

       

        
    }

    // Declare Some variables here....

}
