#ifndef _Vector
#define _Vector
#include <assert.h>
#define N_EXIT 59

typedef unsigned int uint;
template <class TIPUS>

class vector{
	TIPUS* buffer = nullptr;
	uint capacity = 5; 
	uint num_elements = 0;
public:
	TIPUS operator[](uint numb)const{
		assert(numb <= N_EXIT);
		return buffer[numb];
	}
	TIPUS& operator[](uint numb){
		assert(numb <= N_EXIT);
		return buffer[numb];
	}
	vector(){
		buffer = new TIPUS[capacity];
	}
	vector(const vector& vector) :capacity(vector.capacity), num_elements(vector.num_elements){
		buffer = new TIPUS[capacity];
		for (unsigned int i = 0; 0 < num_elements; ++i)
		{
			buffer[i] = vector.buffer[i];
		}
	}
	~vector(){
		delete[]buffer;
	}
	void pushback(const TIPUS& colocar){

		if (capacity == num_elements){
			TIPUS* temp = nullptr;
			capacity *= 2;
			temp = new TIPUS[capacity];
			for (int i = 0; i < capacity; i++){
				*(temp + i) = *(buffer + i);
			}
			delete[]buffer;
			buffer = temp;
			//delete[]temp;
		}
		*(buffer + num_elements++) = colocar;
	}
	void pushfront(const TIPUS& colocar){
		TYPE* temp = nullptr;
		if (num_elements == capacity)
		{
			capacity *= 2;
			temp = new TYPE[capacity];
			for (int i = 0; i < capacity; i++)
			{
				*(temp + i) = *(buffer + i);
			}
			delete[]buffer;
			buffer = temp;
		}
		for (TYPE i = num_elements; i >= 0; i--)
		{
			*(buffer + i + 1) = *(buffer + i);
		}
		*buffer = colocar;
		num_elements++;
	}
	bool empty() const
	{
		return num_elements == 0;
	}

	void clear()
	{
		num_elements = 0;
	}

	uint size() const
	{
		return num_elements;
	}

	uint width()const
	{
		returncapacity;
	}

	void shrink_to_fit()
	{
		if (capacity != num_elements)
		{
			TIPUS *temp = nullptr;
			capacity = num_elements;
			temp = new TIPUS[capacity];
			for (int i = 0; i < capacity; i++)
			{
				temp[i] = buffer[i];
			}
			delete[]buffer;
			buffer = temp;
		}
	}

	void pop_back()
	{
		if (num_elements > 0)
		{
			num_elements--;
		}
	}
};
#endif