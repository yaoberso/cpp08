#include <iostream>
#include "../include/Span.hpp"

int main( void ) 
{
	try{
    	Span a(1);
		a.addNumber(42);
		std::cout << a.longestSpan() << std::endl;
		std::cout << a.shortestSpan() << std::endl;
	}
	catch(std::exception &e){
		std::cout << "EXEPTION: " << e.what() << std::endl;
	}
}

// int main()
// {
// 	Span sp = Span(1005);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	// sp.addMultNumber(0, 1000);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }