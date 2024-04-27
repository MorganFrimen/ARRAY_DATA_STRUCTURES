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
	Array<int , 5> data;
	memset(&data[0], 0, data.Size() * sizeof(int));

	data[1] = 5;
	data[3] = 8;

	for (size_t i = 0; i < data.Size(); i++)
	{
		cout << data[i] << endl;
	}

	cout << "******************************" << endl;
	
	Array<string, 5> data_string;
	memset(&data_string[0], 0, data_string.Size() * sizeof(int));

	data_string[1] = "Hello";
	data_string[2] = "World";

	for (size_t i = 0; i < data_string.Size(); i++)
	{
		cout << data_string[i] << endl;
	}
}