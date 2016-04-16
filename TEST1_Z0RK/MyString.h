#ifndef _MyString
#define _MyString
#include<string.h>
#include<stdio.h>
#include"vector.h"

typedef unsigned int uint;

class MyString{
private:
	char *buffer = nullptr;
	uint capacity;
public:  
	MyString();
	MyString(const char *string);
	MyString(const MyString &other);
	~MyString();
public:
	const char *ret_str() const;
	uint length()const;
	const uint width() const;
	bool empty()const;
	void clear();
	void shrink_to_fit();
public:
	bool operator==(const MyString &string) const;
	bool operator==(const char *string) const;
	void operator=(const MyString &string);
	void operator=(const char *string);
};


#endif 