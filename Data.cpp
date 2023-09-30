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

#include "Data.h"

Data::Data()
{
	customerNumber = 0;
	serviceTime = 0;
	totalTime = 0;
}

Data::Data(const Data& newData)
{
	customerNumber = newData.getCustomer();
	serviceTime = newData.getService();
	totalTime = newData.getTotal();
}

Data::Data(int newCustomer, int newService, int newTotal)
{
	customerNumber = newCustomer;
	serviceTime = newService;
	totalTime = newTotal;
}

Data::~Data()
{

}

/*************************************************************
 * Function: getCustomer ()                                  *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function returns the customer number.	 *
 * Input parameters: None.					                 *
 * Returns: An int.		                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The information is returned.			     *
 *************************************************************/

int Data::getCustomer(void) const
{
	return customerNumber;
}

/*************************************************************
 * Function: getService ()                                   *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function returns the service time.		 *
 * Input parameters: None.					                 *
 * Returns: An int.		                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The information is returned.			     *
 *************************************************************/

int Data::getService(void) const
{
	return serviceTime;
}

/*************************************************************
 * Function: getTotal ()	                                 *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function returns the total time.		 *
 * Input parameters: None.					                 *
 * Returns: An int.		                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The information is returned.			     *
 *************************************************************/

int Data::getTotal(void) const
{
	return totalTime;
}

/*************************************************************
 * Function: setCustomer ()                                  *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function sets the customer number.		 *
 * Input parameters: An int.				                 *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The customer number is updated.		     *
 *************************************************************/

void Data::setCustomer(int newCustomer)
{
	customerNumber = newCustomer;
}

/*************************************************************
 * Function: setService ()                                   *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function sets the service time.		 *
 * Input parameters: An int.				                 *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The service time is changed.			     *
 *************************************************************/

void Data::setService(int newService)
{
	serviceTime = newService;
}

/*************************************************************
 * Function: setTotal ()							         *
 * Date Created: 3/8/22                                      *
 * Date Last Modified: 3/8/22                                *
 * Description: This function sets the total time.			 *
 * Input parameters: An int.				                 *
 * Returns: Nothing.	                                     *
 * Preconditions: None.					  .					 *
 * Postconditions: The total time is changed.			     *
 *************************************************************/

void Data::setTotal(int newTotal)
{
	totalTime = newTotal;
}