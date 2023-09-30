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

class Data
{
public:
    Data();
    Data(const Data& newData);
    Data(int newCustomer = 0, int newService = 0, int newTotal = 0);
    ~Data();

    int getCustomer(void) const;
    int getService(void) const;
    int getTotal(void) const;

    void setCustomer(int newCustomer);
    void setService(int newService);
    void setTotal(int newTotal);

private:
    int customerNumber;
    int serviceTime;
    int totalTime;
};
