#include <iostream>

int main()
{
    int start = 0,  end = 0;
    std::cout << "Input two numbers, I'll return the sum of numbers between them." <<std::endl;
    std::cin >> start >> end;
    int ord_start = start;
    int ord_end = end;
    int sum = 0;
    while (start < end)
    {
        /*
         * an unefficient way to sum these numbers
         */
        ++start;
        --end;
        if(start != end)
        {
            std::cout << "That are " << start << "+" << end << " = " << start+end <<std::endl;
            sum += start+end ;
        }
        else
        {
            std::cout << "Left only one number: " << start <<std::endl;
            sum += start;
        }
       std::cout << "Sum is " << sum << std::endl;
    }
    std::cout << "The sum of numbers between " << ord_start << " and " << ord_end << " is " << sum << std::endl;
    return 0;
}
