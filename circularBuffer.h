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

#ifndef CIRCULAR_BUFFER_H_
#define CIRCULAR_BUFFER_H_

#include <iostream>
#include <deque>

template <typename T>

//Class for Circular Buffer data structure implementation.

class CircularBuffer
{
	public:
		
		CircularBuffer(std::size_t size);   //Constructor with size of the circular buffer as the parameter. Declaration.
		void listCircularBuffer();    //Function to list all elements of the circular buffer. Declaration.
		void addCircularBuffer();     //Function to append elements to the end of the circular buffer. Declaration.
	
	private:
		
		std::deque<T> _cBuffer;
		int posLastElement;
};

#endif