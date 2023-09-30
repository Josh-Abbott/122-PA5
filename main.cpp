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

#include "pa5.h"
#include "TestCases.h"

int main(void)
{
	srand(time(NULL));

	//TEST CASES
	TestCases t;
	t.testEnqueue1();
	t.testEnqueue2();
	t.testDequeue1();
	t.testDequeue2();
	t.runSim24();

	system("pause");
	system("cls");

	int sim_minutes = 0;
	cout << "Please enter the amount of minutes you'd like to simulate: " << endl;
	cin >> sim_minutes;
	simulateQueues(sim_minutes);

}

/*************************************************************
 * Function: simulateQueues ()                               *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function runs the grocery store		 *
				simulation for a set amount of time.		 *
 * Input parameters: An int.				                 *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The simulation is ran succesfully.	     *
 *************************************************************/

void simulateQueues(int minutes)
{
	Queue express;
	Queue normal;

	int elapsedTime = 0, runTime = 0, customerCounter = 1, timechange = 0;
	int normalArrival = 0;
	int normalTimer = 0;
	int expressTimer = 0;
	int expressArrival = 0;

	Data* newCustN = new Data(0, 0, 0);
	Data* newCustE = new Data(0, 0, 0);

	while (elapsedTime <= minutes) //1440 minutes = 24 hours (for test case)
	{
		//START OF A DAY

		if (runTime % 1440 == 0)
		{
			customerCounter = 1;
			runTime = 0;
		}

		if (normalArrival == 0)
		{
			normalArrival = rand() % 5 + 1;
			normalTimer = rand() % 5 + 1;

			int total = newCustN->getService() + normalTimer;
			newCustN = new Data(customerCounter, normalTimer, total);
			normal.enqueue(*newCustN);

			customerCounter++;
			cout << "NORMAL: Customer #" << newCustN->getCustomer() << " has entered the queue at " << newCustN->getTotal() << endl;
		}

		if (normal.getHead() && normal.getHead()->getData()->getService() == 0)
		{
			normal.dequeue();

			cout << "NORMAL: Customer #" << newCustN->getCustomer() << " has exited the queue at " << newCustN->getTotal() << endl;
		}

		if (expressArrival == 0)
		{
			expressArrival = rand() % 5 + 4;
			expressTimer = rand() % 5 + 4;

			int total = newCustE->getService() + expressTimer;
			newCustE = new Data(customerCounter, expressTimer, total);
			express.enqueue(*newCustE);

			customerCounter++;
			cout << "EXPRESS: Customer #" << newCustE->getCustomer() << " has entered the queue at " << newCustE->getTotal() << endl;
		}

		if (express.getHead() && express.getHead()->getData()->getService() == 0)
		{
			express.dequeue();

			cout << "EXPRESS: Customer #" << newCustE->getCustomer() << " has exited the queue at " << newCustE->getTotal() << endl;
		}


		if (elapsedTime % 10 == 0) //10 minute updates
		{
			cout << "CURRENT TIME: " << elapsedTime << " minutes" << endl;
			cout << "NORMAL:" << endl;
			normal.printQueue(normal.getHead());
			cout << "EXPRESS:" << endl;
			express.printQueue(express.getHead());
		}

		normalArrival--;
		expressArrival--;

		if (normal.getHead())
		{
			timechange = normal.getHead()->getData()->getService();
			timechange--;
			normal.getHead()->getData()->setService(timechange);
		}
		if (express.getHead())
		{
			timechange = express.getHead()->getData()->getService();
			timechange--;
			express.getHead()->getData()->setService(timechange);
		}

		runTime++;
		elapsedTime++;
	}
}