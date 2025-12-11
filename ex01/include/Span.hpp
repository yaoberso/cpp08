#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

class Span{
	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		void addNumber(int nb);
		template<typename T>
		void addMultNumber(T begin, T end)
        {
            unsigned int dist = std::distance(begin, end);
            if (_contener.size() + dist > _N)
                throw std::out_of_range("Span is full: cannot add range!");
            _contener.insert(_contener.end(), begin, end);
        }
		int shortestSpan();
		int longestSpan();
	private:
		unsigned int _N;
		std::vector<int> _contener;
};

#endif