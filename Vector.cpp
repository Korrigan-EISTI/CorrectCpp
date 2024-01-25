#include "Vector.h"

template<typename T>
Vector<T>::Vector()
{
	m_array = new T[0];
	m_size = 0;
}

template<typename T>
Vector<T>::~Vector()
{
	delete m_array;
}

template<typename T>
void Vector<T>::push_back(T value) 
{
	m_size++;
	T array = new T[m_size];
	for (size_t i = 0; i < m_size - 1; i++)
	{
		array[i] = m_array[i];
	}
	array[m_size - 1] = value;
	m_array = array;
}
