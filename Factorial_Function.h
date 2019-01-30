/*
  File:         Factorial_Function.h
  Version:      0.0.2
  Date:         27-Jan-2019
  Revision:     30-Jan-2019
  Author:       Jerome Drouin (jerome.p.drouin@gmail.com)

  Credits:	https://en.wikipedia.org/wiki/Factorial
		http://www.mymathlib.com/functions/combinatorial.html

  Factorial_Function.h - Library for 'duino
  https://github.com/newEndeavour/Factorial_Function

  Factorial_Function implements the mathemical Factorial (n!) and 
  Rising Factorial (n(m)) or Pochhammer functions.
  
  ----

  Copyright (c) 2018-2019 Jerome Drouin  All rights reserved.

  ----

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
 
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

  Editions:	
	0.0.1	: first version
	0.0.2	: Added Rising Factorial (Pochhammer's) functions
	
*/


#ifndef FACTORIAL_FUNCTION_H
#define FACTORIAL_FUNCTION_H

double Factorial(int n);
long double xFactorial(int n);

double Rising_Factorial(int n, int m);
long double xRising_Factorial(int n, int m);

#endif
