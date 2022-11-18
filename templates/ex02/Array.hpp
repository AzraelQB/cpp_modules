#pragma once

#include <exception>
#include <cstddef>

using std::size_t;

template <typename T>
class Array {
	private:
		T*		arr;
		size_t	_size;

	public:
		Array(void):
			arr(nullptr),
			_size(0)
		{}
		Array(unsigned int n):
			arr(new T[n]),
			_size(n)
		{}
		Array(const Array& other):
			arr(nullptr),
			_size(0)
		{
			*this = other;
		}
		~Array() {
			delete[] arr;
		}

		Array&		operator=(const Array& other) {
			if (this == &other)
				return *this;
			if (_size != other._size) {
				delete[] arr;
				arr = new T[other._size];
				_size = other._size;
			}
			for (size_t i = 0; i < _size; ++i)
				arr[i] = other[i];
			return *this;
		}
		T&	operator[](size_t index) {
			if (index >= _size)
				throw Array::InvalidIndexException();
			return arr[index];
		}
		const T&	operator[](size_t index) const {
			if (index >= _size)
				throw Array::InvalidIndexException();
			return arr[index];
		}

		class InvalidIndexException : public std::exception {
			public: virtual const char* what() const throw() {
				return "Array index is out of bounds";
			}
		};

		size_t	size(void) const {
			return (_size);
		}
};
