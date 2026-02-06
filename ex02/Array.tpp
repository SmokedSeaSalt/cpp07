#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T> Array<T>::Array()
{
    this->array_ = new T[0];
    this->size_  = 0;
}

template <typename T> Array<T>::Array(unsigned int n)
{
    this->array_ = new T[n];
    this->size_  = n;
}

template <typename T> Array<T>::~Array()
{
    delete[] this->array_;
}

template <typename T> Array<T>::Array(const Array& other)
{
    this->size_  = other.size_;
    this->array_ = new T[this->size_];
    for (unsigned int i = 0; i < size_; i++)
        this->array_[i] = other.array_[i];
}

template <typename T> Array<T>& Array<T>::operator=(const Array& other)
{
    if (this == &other)
        return (*this);
    delete[] this->array_;
    this->size_  = other.size_;
    this->array_ = new T[this->size_];
    for (unsigned int i = 0; i < size_; i++)
        this->array_[i] = other.array_[i];
    return (*this);
}

template <typename T> T& Array<T>::operator[](unsigned int i)
{
    if (size_ == 0 || i > (size_ - 1))
        throw Array<T>::OutOfBounds(i);
    return array_[i];
}

template <typename T> Array<T>::OutOfBounds::OutOfBounds(unsigned int i) : index_(i)
{
	message_ = "Array: Index " + std::to_string(index_) + " out of range!\n";
}

template <typename T> const char* Array<T>::OutOfBounds::what() const noexcept
{
    return message_.c_str();
}

template <typename T> unsigned int Array<T>::size() const
{
    return size_;
}

#endif // ARRAY_TPP