#include <iostream>
#include "../include/Span.hpp"

// int main( void ) 
// {
// 	try{
//     	Span a(10000);
// 		for (int i = 0; i < 10000; i++)
// 			a.addNumber(i + 1);
// 		std::vector<int>::iterator it = a.longestSpan();
// 		std::cout << *it << std::endl;
// 		it = a.shortestSpan();
// 		std::cout << *it << std::endl;
// 	}
// 	catch(std::exception &e){
// 		std::cout << "EXEPTION: " << e.what() << std::endl;
// 	}
// }

int main()
{
	Span sp = Span(1005);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	// sp.addMultNumber(0, 1000);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}