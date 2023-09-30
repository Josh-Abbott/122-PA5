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

#include "QueueNode.h"

QueueNode::QueueNode()
{
    Data* copy;
    pData = new Data(0,0,0);
    pData = nullptr;
    pNext = nullptr;
}

QueueNode::QueueNode(const Data& newData)
{
    Data* copy;
    copy = new Data(newData);
    this->pData = copy;
    this->pNext = nullptr;
}

QueueNode::QueueNode(const QueueNode& newData)
{
    this->pData = newData.pData;
    this->pNext = newData.pNext;
}

QueueNode::~QueueNode()
{
    // leave empty
}


/*************************************************************
 * Function: setNextPtr ()							         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function sets pNext to a new value.     *
 * Input parameters: A QueueNode*.				             *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The next pointer is set. 			     *
 *************************************************************/

void QueueNode::setNextPtr(QueueNode* newNextPtr)
{
    this->pNext = newNextPtr;
}

/*************************************************************
 * Function: getNextPtr ()							         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function returns pNext.    			 *
 * Input parameters: Nothing.				                 *
 * Returns: A QueueNode*.	                                 *
 * Preconditions: None.					  .					 *
 * Postconditions: The information is returned.			     *
 *************************************************************/

QueueNode* QueueNode::getNextPtr() const
{
    return this->pNext;
}

/*************************************************************
 * Function: getData ()							             *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function returns pData.	    		 *
 * Input parameters: Nothing.				                 *
 * Returns: A Data*.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The information is returned.			     *
 *************************************************************/

Data* QueueNode::getData() const
{
    return this->pData;
}