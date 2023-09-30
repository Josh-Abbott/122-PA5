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
#include "Data.h"

class QueueNode
{
public:
    QueueNode();
    QueueNode(const Data& newData);
    QueueNode(const QueueNode& newData);
    ~QueueNode();

    void setNextPtr(QueueNode* newNextPtr);
    QueueNode* getNextPtr() const;

    Data *getData() const;
private:
    Data* pData;
    QueueNode* pNext;
};
