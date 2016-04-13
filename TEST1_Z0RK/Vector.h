#ifndef _Vector
#define _Vector
#include <assert.h>

typedef unsigned int uint;
template <class TIPUS>

class vector{
	TIPUS* buffer=nullptr;
	uint capacity = 5;
	uint num_elements = 0;
public:
	TIPUS& operator[](int numb){
		assert(numb <= N_ROOM);
		return buffer[numb];
	}
	vector(int capacity){
		buffer = new TIPUS[capacity];
		printf("por defecto");
	}
	vector(const vector& vector) :capacity(vector.capacity), num_elements(vector.num_elements){
		buffer = new TIPUS[capacity];
		printf("de copia");
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
			}-
				delete[]buffer;
			buffer = temp;
			//delete[]temp;
		}
		*(buffer + num_elements++) = colocar;
	}
	void pushfront(const TIPUS& colocar){

		if (capacity == num_elements){
			capacity *= 2;
		}
		TIPUS* temp;
		temp = new TIPUS[capacity];
		for (int i = 1, j = 0; i < capacity; i++, j++){
			*(temp + i) = *(buffer + j);
		}
		delete[]buffer;
		buffer = temp;
		*(buffer + 0) = colocar;
	}
	void printvec(TIPUS& buffer)const{//metode constant que rebi un vector k els imprimeixi
	}
	// empty() clean () size() capacity() pop.back()elimina ultim element shrink_to_fit()elimina memoria sobrant
};
#endif