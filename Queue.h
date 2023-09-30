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

#include "QueueNode.h"
#include "Data.h"

class Queue
{
public:
	Queue();
	~Queue();

	bool enqueue(const Data& newData);
	Data* dequeue();
	bool isEmpty();

	QueueNode* getHead() const;
	QueueNode* getTail() const;

	void setHead(QueueNode* const newHead);
	void setTail(QueueNode* const newTail);

	void printQueue(QueueNode* node);
private:
    QueueNode* pHead;
    QueueNode* pTail;

	void destroyQueue();
};
