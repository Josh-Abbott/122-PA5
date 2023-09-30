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

#include "Queue.h"

Queue::Queue()
{
	this->pHead = nullptr;
	this->pTail = nullptr;
}

Queue::~Queue()
{
	this->destroyQueue();
}

/*************************************************************
 * Function: enqueue ()								         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function adds the data to the queue.	 *
 * Input parameters: The address of a const Data.			 *
 * Returns: A bool value.	                                 *
 * Preconditions: None.					  .					 *
 * Postconditions: A valid success or fail bool is given.	 *
 *************************************************************/

bool Queue::enqueue(const Data& newData)
{
	QueueNode* pMem = new QueueNode(newData);
	bool success = false;

	if (pMem != nullptr)
	{
		success = true;

		if (isEmpty())
		{
			this->pHead = this->pTail = pMem;
		}
		else
		{
			this->pTail->setNextPtr(pMem);
			this->pTail = pMem;
		}

	}

	return success;
}

/*************************************************************
 * Function: isEmpty ()								         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function returns if the queue is empty. *
 * Input parameters: Nothing.				                 *
 * Returns: A bool value.                                    *
 * Preconditions: None.					  .					 *
 * Postconditions: The correct success value is returned.    *
 *************************************************************/

bool Queue::isEmpty()
{
	return this->pHead == nullptr;
}

/*************************************************************
 * Function: setTotal ()							         *
 * Date Created: 3/9/22                                      *
 * Date Last Modified: 3/10/22                               *
 * Description: This function removes data from the queue.	 *
 * Input parameters: Nothing.				                 *
 * Returns: A Data*.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The data is succesfully removed.		     *
 *************************************************************/

Data* Queue::dequeue()
{
	QueueNode* pTemp = this->pHead;

	if (this->pHead == this->pTail)
	{
		this->pHead = this->pTail = nullptr;
	}
	else
	{
		this->pHead = this->pHead->getNextPtr();
	}

	Data* data = pTemp->getData();
	delete pTemp;

	return data;
}

/*************************************************************
 * Function: printQueue ()							         *
 * Date Created: 3/9/22                                      *
 * Date Last Modified: 3/9/22                                *
 * Description: This function prints out the queue.			 *
 * Input parameters: A QueueNode*.				             *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The information is printed to the screen. *
 *************************************************************/

void Queue::printQueue(QueueNode* node)
{
	if (node != nullptr)
	{
		cout << node->getData()->getCustomer() << endl;
		printQueue(node->getNextPtr());
	}
}

/*************************************************************
 * Function: destroyQueue ()							     *
 * Date Created: 3/9/22                                      *
 * Date Last Modified: 3/9/22                                *
 * Description: This function destroys a queue.				 *
 * Input parameters: Nothing.				                 *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The queue is destroyed.				     *
 *************************************************************/

//put at the end because it's private
void Queue::destroyQueue()
{
	while (!isEmpty())
	{
		dequeue();
	}
}

/*************************************************************
 * Function: getHead ()								         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function returns pHead.				 *
 * Input parameters: Nothing.				                 *
 * Returns: A QueueNode*.	                                 *
 * Preconditions: None.					  .					 *
 * Postconditions: The information is returned.			     *
 *************************************************************/

QueueNode* Queue::getHead() const
{
	return pHead;
}

/*************************************************************
 * Function: getTail ()								         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function returns pTail.				 *
 * Input parameters: Nothing.				                 *
 * Returns: A QueueNode*.	                                 *
 * Preconditions: None.					  .					 *
 * Postconditions: The information is returned.			     *
 *************************************************************/

QueueNode* Queue::getTail() const
{
	return pTail;
}

/*************************************************************
 * Function: setHead ()								         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function sets pHead to a new head.		 *
 * Input parameters: A QueueNode*.			                 *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: pHead is succesfully changed.		     *
 *************************************************************/

void Queue::setHead(QueueNode* const newHead)
{
	pHead = newHead;
}

/*************************************************************
 * Function: setTail ()								         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function sets pTail to a new head.		 *
 * Input parameters: A QueueNode*.			                 *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: pTail is succesfully changed.		     *
 *************************************************************/

void Queue::setTail(QueueNode* const newTail)
{
	pTail = newTail;
}