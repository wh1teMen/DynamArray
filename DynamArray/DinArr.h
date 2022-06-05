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
void PrintArray()const;
MyDinArr& operator = (const MyDinArr& other);
bool operator==(const MyDinArr&& other);
int& at(int index);
int& front()const;
int& back()const;
int  Capacity()const;
bool empty();
int Size()const;
void clear();
void swap(MyDinArr &other, MyDinArr &other2);
const int *Data()const;
void push_back(int value);
void emplace_back(int index);
void reserve(int value);
void shrink_to_fit();
void pop_back();
void insert(int index, int value,int count);
void erase(int begin, int end);
void resize(int newsize);

private:
	int size{0};
	int capacity{ 0 };
	int* data=nullptr;
};



