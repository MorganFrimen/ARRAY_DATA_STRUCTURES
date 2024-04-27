#include <iostream>
#include <array>

using namespace std;

template<typename T ,size_t S>

class Array 
{
public:
	constexpr int Size() const { return S; }

	T& operator[](size_t index) { return m_Data[index]; }
	const T& operator[](size_t index) const { return m_Data[index]; }

	T* Data() { return m_Data; }
	const T* Data() const { return m_Data; }

private:
	T m_Data[S];
};

int main() 
{
	int size = 10;
	Array<int , 10> data;
	memset(&data[0], 0, data.Size() * sizeof(int));

	data[1] = 5;
	data[3] = 8;

	for (size_t i = 0; i < data.Size(); i++)
	{
		cout << data[i] << endl;
	}
}

/*
	// Стек
	int array[5];

	// Куча
	int size = 5;
	int* heapArray = new int[size];
	delete[] heapArray;
*/