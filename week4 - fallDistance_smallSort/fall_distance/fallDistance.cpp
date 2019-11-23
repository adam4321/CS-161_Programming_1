/********************************************************************
** Author:        Adam Wright
** Date:          1/24/2019
** Description:   A function named fallDistance that takes the falling
**                time as an argument.  The function should return the
**                distance in meters that the object has fallen in that
**                time.
*********************************************************************/


double fallDistance(double time)
{
    // Define distance variable
    double distance = 0;

    // Gravity accelaration formula
    distance = 0.5 * 9.8 * (time * time);

    // Return statement
    return distance;
}

