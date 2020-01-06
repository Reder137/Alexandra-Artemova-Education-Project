#pragma once

template <typename T> 
class Array
{
private:

	template <typename T>
	class Value
	{
	 public:  
		T _value;
		Value<T>& operator=(T value)
		{
			_value = value;
			return *this;
		}
	};
	int _size;
	int _grow;
	Value<T>* ptr;

public:
	Array();
	Array(int size, int grow);
	T& operator[](int index);
	Array<T>& operator=(Array<T> &value);
	int GetSize();
	void Add(T number);
	~Array();
};


template <typename T>
Array<T>::Array()
{

}
template <typename T>
Array<T>::Array(int size, int grow)
{
	_size = size;
	_grow = grow;
	ptr = new Value<T>[size];
}
template <typename T>
T& Array<T>::operator[](int index)
{
	return ptr[index]._value;
}
template<typename T>
inline Array<T>& Array<T>::operator=(Array<T> &value)
{
	this->ptr = value.ptr;
	this->_size = value._size;
	this->_grow = value._grow;
	//value.ptr = nullptr;
	return *this;
}
template <typename T>
int Array<T>::GetSize()
{
	return _size;
}
template <typename T>
void Array<T>::Add(T number)
{    
	
	Value<T>* temp = new Value<T>[_size + _grow];
	for (int i = 0; i < _size; i++)
	{
		temp[i] = ptr[i];
	}

	temp[_size ] = number;
	delete[]ptr;
	_size += _grow;
	ptr = new Value<T>[_size];

	for (int i = 0; i < _size; i++)
	{
		 ptr[i]=temp[i];
	} 
	delete[]temp;
}
template <typename T>
Array<T>::~Array()
{
	delete[] ptr;
}



