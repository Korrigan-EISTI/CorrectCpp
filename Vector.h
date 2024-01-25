#ifndef _VECTOR_H
#define _VECTOR_H

template<typename T>
class Vector {
public:
	Vector();
	~Vector();

	void push_back(T value);

private:
	T* m_array;
	int m_size;
};

#endif // _VECTOR_H

