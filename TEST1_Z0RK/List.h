#ifndef _List
#define _List
#include <iostream>
typedef unsigned int uint;


template<class TYPE>
class list{
public:
	class node{
	public:
		TYPE data;
	public:
		node* next = nullptr;
		node(const TYPE& data) :data(data){
		}
	};
	//
public:
	node* first = nullptr;
public:
	list(){}
	bool empty()const{
		return first == NULL;
	}
	uint size()const{
		uint ret = 0;
		node*temp = first;
		while (temp != nullptr){
			temp = temp->next;
			ret++;
		}
		return ret;
	}
	node* end(){
		node*temp = first;
		while (temp->next != nullptr){
			temp = temp->next;
		}
		return temp;
	}
	void pushback(const TYPE& data)
	{
		if (first != nullptr)
		{
			end()->next = new node(data);
		}
		else
		{
			first = new node(data);
		}
	}
	void pushfront(const TYPE& allocate){
		node*top = new node(allocate);
		top->next = first;
		first = top;
	}
	bool pop_back()
	{
		if (first != nullptr)
		{
			if (first->next != nullptr)
			{
				node * copy = first;
				node * popback = first;
				while (copy->next != nullptr)
				{
					copy = copy->next;
				}
				while (popback->next != copy)
				{
					popback = popback->next;
				}
				popback->next = nullptr;
				delete copy;
				return true;
			}
			else
			{
				node * popback = first;
				first = nullptr;
				delete popback;
				return true;
			}
		}
		return false;
	}
	bool popfront(){
		if (first != nullptr){
			node*temp = first->next;
			delete first;
			first = temp;
			return true;
		}
	}
	void erase(node* to_erase){
		node*temp = first;
		if (to_erase != nullptr){
			while (temp->next != to_erase && to_erase != first){
				temp = temp->next;
			}
			if (to_erase->next != nullptr){
				temp->next = to_erase->next;
			}
			else{
				temp->next = nullptr;
			}
			if (to_erase == first){
				first = first->next;
			}
			delete to_erase;
		}
	}
	void insert(node* position, const TYPE&data){
		node*insert = new node(data);
		node*temp = first;
		if (temp == nullptr){
			temp = insert;
		}
		else{
			while (temp->next != position && temp != position){
				temp = temp->next;
			}
			insert->next = temp->next;
			temp->next = insert;
		}
	}
};

#endif // _List