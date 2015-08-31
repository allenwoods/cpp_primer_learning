#include <iostream>
#include "Sales_item.h"

/*
 * Using header file provided by author of cpp_primer
 */

int main()
{
    Sales_item currentBook;
    if (std::cin >> currentBook)  //Make Sure there is Input (from file)
    {
        Sales_item transData;
        while (std::cin >> transData) //Read data from file
        {
            if(currentBook.isbn() == transData.isbn()) //If they are the same book
            {
                currentBook += transData; //Add the sales (defined by the class)
            }
            else
            {
                std::cout << currentBook << std::endl;  // Print the sales of
                                                        // last book
                currentBook = transData;
            }
        }
        std::cout << currentBook << std::endl; //Print the last book
    }
    else
    {
        std::cerr << "No Data Found!" << std::endl; //Warning: there is no Input
        return -1;
    }
    return 0;
}
