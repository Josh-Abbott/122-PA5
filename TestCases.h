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

#include "pa5.h"
#include "Queue.h"
#include "QueueNode.h"
#include "Data.h"

class TestCases
{
public:
	TestCases();
	~TestCases();

	void testEnqueue1(void);
	void testEnqueue2(void);
	void testDequeue1(void);
	void testDequeue2(void);
	void runSim24(void);

private:
	//none
};