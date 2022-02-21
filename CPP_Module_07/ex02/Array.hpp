/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:45:23 by bahn              #+#    #+#             */
/*   Updated: 2022/02/21 21:37:37 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <cstring>

template <typename T>
class Array
{
private:
	T*				_array;
	unsigned int	_size;
public:
	Array();
	Array(unsigned int size);
	Array(Array<T> const& array);
	virtual ~Array();

	Array<T>&	operator=(Array<T> const & other);

	T&	operator[](int index);
	T const&	operator[](int index) const;

	unsigned int	getSize() const;
};


template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0) {
	
}

template <typename T>
Array<T>::Array(unsigned int size) : _array(new T[size]), _size(size) {
	
};

template <typename T>
Array<T>::Array(Array<T> const& array) {
	_size = array.getSize();
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		_array[i] = array[i];
	}
}


template <typename T>
Array<T>::~Array() { 
	delete [] _array;
};

template <typename T>
Array<T>&	Array<T>::operator=(Array<T> const & other) {
	std::cout << other.getSize() << std::endl;
	if (this != &other) {
		delete [] _array;
		_size = other.getSize();
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
		{
			_array[i] = other[i];
		}
	}
	return (*this);
}

template <typename T>
std::ostream&	operator<<(std::ostream& ostrm, Array<T>& array) {
	ostrm << "Array {";
	for (unsigned i = 0; i < array.getSize(); i++)
	{
		if (i == array.getSize() - 10)
			ostrm << std::endl << "..., ";
		else if (i >= 10 && i < array.getSize() - 10)
			continue;
		ostrm << array[i];
		if (i != array.getSize() - 1)
			ostrm << ", ";
	}
	ostrm << "}" << std::endl;
	return (ostrm);
}

template <typename T>
T const&	Array<T>::operator[](int index) const {
	if (index < 0 || static_cast<unsigned int>(index) >= _size)
		throw std::exception();
	return (_array[index]);
};

template <typename T>
T&	Array<T>::operator[](int index) {
	if (index < 0 || static_cast<unsigned int>(index) >= _size)
		throw std::exception();
	return (_array[index]);
};

template <typename T>
unsigned int	Array<T>::getSize() const {
	return (_size);
}

#endif