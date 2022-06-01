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
private:
	int size{ 0 };
	int capacity{0};
	int* data=nullptr;
};




class Collection {
public:/*
	  Конструкторы, деструкторы
	  -------------
	  методы вставки данных
	  методы уничтожения данных
	  --------------
	  технологии доступа к данным 
	  произвольные:
	  оператор[]
	  метод at,find и прочие
	  последовательные:реализуются классы иттераторов и етоды которые их возвращают
	  операторы и свойства класса (присваивание =
	   */
private:
	/*
	работа с памятью:
	1.аллокация - выделение памяти maloc- выделяет паммять, calloc- выделяет память на коллекцию (аналог оператора new)
	2.реаллокаци- перевыделение памяти realloc
	3.диаллокация-освобождение памяти free-освобождает блок памяти.
	*/
	/*
	поля данных, size,copacity
	------------------------
	зона приватных состояний
	*/

};
