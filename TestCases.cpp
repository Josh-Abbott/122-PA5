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

#include "TestCases.h"

TestCases::TestCases()
{
	// leave empty
}

TestCases::~TestCases()
{
	// leave empty
}

/*************************************************************
 * Function: testEnqueue1 ()						         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function creates test conditions for    * 
				adding one node using enqueue.				 *
 * Input parameters: Nothing.				                 *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The test is executed succesfully.	     *
 *************************************************************/

void TestCases::testEnqueue1()
{
	//check if empty using isEmpty

	Queue q1;

	Data* newPeople = new Data(1,2,3);
	q1.enqueue(*newPeople);

	if (q1.isEmpty())
	{
		cout << "Enqueue did not succesfully add the data!" << endl;
	}
	else
	{
		cout << "Enqueue succesfully added the data to the queue!" << endl;
	}
}

/*************************************************************
 * Function: testEnqueue2 ()						         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function creates test conditions for    *
				adding two nodes using enqueue.				 *
 * Input parameters: Nothing.				                 *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The test is executed succesfully.	     *
 *************************************************************/

void TestCases::testEnqueue2()
{
	// check tail!

	Queue q1;

	Data* newPeople = new Data(1,2,3);
	q1.enqueue(*newPeople);

	Data* newPeople2 = new Data(4,5,6);
	q1.enqueue(*newPeople);
	q1.enqueue(*newPeople2);

	if (q1.getTail()->getData()->getTotal() == newPeople2->getTotal())
	{
		cout << "Enqueue succesfully added two nodes of data to the queue!" << endl;
	}
	else
	{
		cout << "Enqueue did not succesfully add both nodes of the data!" << endl;
	}
}

/*************************************************************
 * Function: testDequeue1 ()						         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function creates test conditions for    *
				removing one node using dequeue.			 *
 * Input parameters: Nothing.				                 *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The test is executed succesfully.	     *
 *************************************************************/

void TestCases::testDequeue1(void)
{
	// add, remove, then check if empty

	Queue q1;

	Data* newPeople = new Data(1,2,3);
	q1.enqueue(*newPeople);

	q1.dequeue();

	if (q1.isEmpty())
	{
		cout << "Dequeue succesfully removed the data from the queue!" << endl;
	}
	else
	{
		cout << "Dequeue did not succesfully remove the data!" << endl;
	}
}

/*************************************************************
 * Function: testDequeue1 ()						         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function creates test conditions for    *
				removing one node using dequeue.			 *
 * Input parameters: Nothing.				                 *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The test is executed succesfully.	     *
 *************************************************************/

void TestCases::testDequeue2(void)
{
	Queue q1;

	Data* newPeople = new Data(1,2,3);
	q1.enqueue(*newPeople);

	Data* newPeople2 = new Data(4,5,6);
	q1.enqueue(*newPeople);
	q1.enqueue(*newPeople2);
	q1.dequeue();

	if (q1.getHead()->getData()->getTotal() == newPeople->getTotal())
	{
		cout << "Dequeue succesfully removed a node in a queue of 2!" << endl;
	}
	else
	{
		cout << "Dequeue did not succesfully remove a node in a queue of 2!" << endl;
	}
}

/*************************************************************
 * Function: runSim24 ()							         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function runs a simulation that goes    *
				for 24 hours.								 *
 * Input parameters: Nothing.				                 *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The simulation is ran succesfully.	     *
 *************************************************************/

void TestCases::runSim24(void)
{
	simulateQueues(1440); //1440 = 24 hours in minutes
}