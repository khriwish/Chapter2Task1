#include <iostream>


int main()
{
    int sum,sub;
    int num1,num2;


	std::cout << "Enter an integer: ";
	std::cin >> num1;


	std::cout << "Enter the second one: ";
	std::cin >> num2;

	sum=num1+num2;
	sub=num1-num2;

	std::cout << sum << '\n';
	std::cout << sub;


    return 0;

}
