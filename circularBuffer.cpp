/*

This program is being developed for submission to the Evernote Coding Challenge.

This code should not be submitted by anyone else once again for the same purpose.

Author: Rijo S. Simon
Date:

The MIT License (MIT)

Copyright (c) 2014 Rijo S. Simon

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/

#include "circularBuffer.h"
#include <iostream>
#include <locale>
#include <deque>
#include <stdlib.h>
#include <string>

//Constructor with size of the circular buffer as the parameter. Definition.

template <typename T>
CircularBuffer<T>::CircularBuffer(std::size_t size)
{
	for (int i = 0; i<size; i++)
	{
		_cBuffer.push_back("");
	}
}

//Function to list all elements of the circular buffer. Definition.

template <typename T>
void CircularBuffer<T>::listCircularBuffer()
{
	for (int i = 0; i<_cBuffer.size(); i++)
	{
		std::cout<<_cBuffer[i]<<"\n";
	}
}

//Function to append elements to the end of the circular buffer. Definition.

template <typename T>
void CircularBuffer<T>::addCircularBuffer()
{
	
}

bool verifyFirstInput(std::string input)
{
	int cbSize = atoi(input.c_str());
	if (cbSize >= 0 && cbSize <= 10000)
	{
		return true;
	}	
	else
	{
		return false;
	}	
}

template <typename T>
int appendBuffer(CircularBuffer<T> & buffer, std::string input)
{
	for (int i = 0; i<atoi((input.substr(1)).c_str()); i++)
	{
		std::cout<<"hi\n";
	}
}

template <typename T>
int removeBuffer(CircularBuffer<T> & buffer, std::string input)
{

}

int main()
{

//do...while to get input from the use to manipulate the circular buffer.

bool control = false;  //Control to ensure that the first input is a number between 0 and 10000, to be set as buffer size.
std::string inputContainer;  //Contains the input from the user;
do
{
	
	std::cin>>inputContainer;
		if (control == false)
		{
			control = verifyFirstInput(inputContainer);
			std::cout<<"Enter a valid size of the container first.\n";
		}
		if (inputContainer == "Q")
			break;
		else
		{ 
			CircularBuffer<std::string> buffer(atoi(inputContainer.c_str()));
		
			do
			{
				std::cin>>inputContainer;
			
				switch(inputContainer[0])
				{
					case 'A':
								appendBuffer(buffer, inputContainer);
								break;
					case 'R':
								removeBuffer(buffer, inputContainer);
								break;
					case 'L':
								buffer.listCircularBuffer();
								break;
					case 'Q':
								break;
					default:
								std::cout<<"I cannot understand what you are saying.";
				}
			
			}while(inputContainer!="Q");
		}	
	
}while(inputContainer!="Q");

}