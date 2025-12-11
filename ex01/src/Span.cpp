#include "../include/Span.hpp"

Span::Span(): _N(0){}

Span::~Span(){}

Span::Span(unsigned int N): _N(N){}

Span::Span(const Span &other): _N(other._N), _contener(other._contener){}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_N = other._N;
		_contener = other._contener;
	}
	return (*this);
}

void Span::addNumber(int nb)
{
	if (_contener.size() < _N)
		_contener.push_back(nb);
	else
		throw std::out_of_range("Out of range!");
}

int Span::longestSpan()
{
	if (_N != 0 && _N != 1)
	{
		std::vector<int>::iterator itmin = std::min_element(_contener.begin(), _contener.end());
		int min = *itmin;
		std::vector<int>::iterator itmax = std::max_element(_contener.begin(), _contener.end());
		int	max = *itmax;
		return (max - min);
	}
	else
		throw std::logic_error("to low numbers stored!");
}

int Span::shortestSpan()
{
	if (_N != 0 && _N != 1)
	{
		int shortest_cur = longestSpan();
		for(unsigned int i = 0; i < _N; i++)
		{
			for(unsigned int j = i; j < _N; j++)
			{
				int dif = _contener[i] - _contener[j];
				if (dif < shortest_cur && dif > 0)
				{
					shortest_cur = dif;
				}
			}
		}
		return (shortest_cur);
	}
	else
		throw std::logic_error("to low numbers stored!");
}
