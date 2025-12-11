#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
template<typename T>
typename T::iterator easyfind(T &conteneur, int i)
{
	typename T::iterator result = std::find(conteneur.begin(), conteneur.end(), i);
	if (result == conteneur.end())
		throw std::runtime_error("Element not found");
	else
		return (result);
}

#endif