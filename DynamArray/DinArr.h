#pragma once
#include<iostream>
using namespace std;
class MyDinArr {
public:
MyDinArr();
MyDinArr(int size, int* data);
~MyDinArr();
MyDinArr(const MyDinArr& other);
int& operator[](int index);
void print_array()const;
MyDinArr& operator = (const MyDinArr& other);
bool operator==(const MyDinArr&& other);
int& at(int index);
int& front()const;
int& back()const;
int  capacity()const;
bool empty();
int size()const;
void clear();
void swap(MyDinArr &other, MyDinArr &other2);
const int *data()const;
void push_back(int value);
void emplace_back(int index);
void reserve(int value);
void shrink_to_fit();
void pop_back();
void insert(int index, int value,int count);
void erase(int begin, int end);
void resize(int newsize);
class iterator {
public:
	int* operator->()const;
	int& operator*()const;
	operator int* ()const; 
	iterator& operator+(int i)const; 
	iterator& operator+=(int i); 
	iterator& operator-(int i)const; 
	iterator& operator-=(int i); 
	iterator& operator--(); 
	iterator& operator--(int);
	iterator& operator++(); 
	iterator& operator++(int); 
	operator bool()const; 
	bool operator==(const iterator&& other)const; 
	/*bool operator!=(const iterator&& other)const {
		return !(*this == other);
	}*/
	bool operator<(const iterator&& other)const;
	bool operator<=(const iterator&& other)const; 
	bool operator>(const iterator&& other)const; 
	bool operator>=(const iterator&& other)const;
	int& operator[](int i)const; 
	const MyDinArr const* from()const {
		return &collection_;
	}
private:
	iterator() = delete;
	iterator(const MyDinArr&& position, int* place):collection_(position),place_(place){}
	friend class MyDinArr;
	const MyDinArr& collection_;
	int* place_;
};
private:
	int size_{0};
	int capacity_{ 0 };
	int* data_=nullptr;
};



