#include <iostream>
#include"MyString.h"
#include"Vector.h"


	MyString::MyString(){
		capacity = 1;
		buffer = new char[capacity];
		strcpy_s(buffer, capacity, "");
	}
	MyString::MyString(const char *string){
		uint len = strlen(string);
		buffer = new char[len + 1];
		capacity = len + 1;
		strcpy_s(buffer, capacity, string);
	}
	MyString::MyString(const MyString &other){
		capacity = other.capacity;
		buffer = new char[capacity];
		strcpy_s(buffer, capacity, other.buffer);
	}
	MyString::~MyString(){
		delete[] buffer;
	}

//methods
	const char* MyString::ret_str() const{ //returns string (private access)
		return buffer;
	}

	uint MyString::length() const{ 
		return strlen(buffer);
	}

	const uint MyString::width() const{ 
		return capacity;
	}

	bool MyString::empty()const{
		return buffer[0] == '\0';
	}
	void MyString::clear(){
		strcpy_s(buffer, capacity, "");
	}

	void MyString::shrink_to_fit(){

		if (capacity != length() + 1){
			char *temp = nullptr;
			capacity = length() + 1;
			temp = new char[capacity];
			strcpy_s(temp, capacity, buffer);
			delete[] buffer;
			buffer = temp;
		}
	}
	//operators
	bool MyString::operator==(const MyString &string) const{ //former strcmp
		return strcmp(buffer, string.buffer) == 0; 
	}

	bool MyString::operator==(const char *string) const{
		return strcmp(buffer, string) == 0;
	}

	void MyString::operator=(const MyString &string){ //former strcpy

		unsigned int len = (strlen(string.buffer) + 1);
		if (capacity < len){
			delete[] buffer;
			capacity = len;
			buffer = new char[capacity];
		}
		strcpy_s(buffer, capacity, string.buffer);
	}

	void MyString::operator=(const char *string){

		unsigned int len = (strlen(string)+1);
		if (capacity < len){
			delete[] buffer;
			capacity = len;
			buffer = new char[capacity];
		}
		strcpy_s(buffer, capacity, string);
	}


