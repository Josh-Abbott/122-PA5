/****************************************************************************************************************
 * Programmer: Josh Abbott																						*
 * Class: CptS 122; Lab Section 10																				*
 * Programming Assignment: 5																					*
 * Date: 3/10/22																								*
 *																												*
 * Description: This program simulates two grocery store lines using queues while displaying that information	*
 *              to the user for a selected amount of time.														*
 *																												*
 * Relevant Formulas: Refer to each function definition.														*
 ***************************************************************************************************************/

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;
using std::fstream;
using std::ostream;
using std::ifstream;
using std::istream;
using std::string;

void simulateQueues(int minutes);