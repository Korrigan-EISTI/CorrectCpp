#ifndef _VECTOR_H
#define _VECTOR_H

#include <cstdlib>

template<typename T>
class Vector {
public:
	Vector() : 
		m_capacity(10),
		m_size(0)
	{
		m_array = (T*) calloc(m_capacity, sizeof(T));
	}

	~Vector()
	{
		delete m_array;
	}

	void push_back(T value)
	{
		m_size++;
		if (m_size >= m_capacity)
		{
			m_capacity *= 2;
			m_array = (T*)realloc(m_array, m_capacity * sizeof(T));
		}
		m_array[m_size - 1] = value;
	}

	T pop_back()
	{
		m_size--;
		return m_array[m_size];
	}

	void clear() { m_size = 0; }

	size_t size() { return m_size; }

	T resize(size_t newSize)
	{
		m_size = newSize;
		return m_array[m_size];
	}

	T shrink_to_fit() 
	{
		m_capacity = m_size;
		return m_array[m_size];
	}

	T operator[](size_t i) { if (i < m_size) return m_array[i]; }

private:
	T* m_array;
	size_t m_size;
	size_t m_capacity;
};

#endif // _VECTOR_H
