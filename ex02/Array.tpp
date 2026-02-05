#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T> class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		T operator[](unsigned int i);

		class OutOfBounds: public std::exception
		{
			const char* what() const noexcept;
		}

		unsigned int size() const;

	private:
		unsigned int size_;

};

#endif // ARRAY_HPP