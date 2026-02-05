#ifndef ARRAY_TPP
#define ARRAY_TPP

template<typename T> Array<T>::Array()
{
	this->array_ = new T[0];
	this->size_ = 0;
}

Array::Array(unsigned int n)
{
	this->array_ = new T[n];
	this->size_ = n;
}


Array::~Array()
{
	delete this->array_;
}

Array::Array(const Array& other)
{

}

Array& Array::operator=(const Array& other)
{

}

T& operator[](unsigned int i);

class OutOfBounds: public std::exception
{
	const char* what() const noexcept;
}

unsigned int size() const;


#endif // ARRAY_TPP