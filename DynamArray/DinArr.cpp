#include<iostream>
#include"DinArr.h"
using namespace std;
	MyDinArr::MyDinArr() {};
	MyDinArr::MyDinArr(int size, int* data) {
		this->size_ = size;
		this->capacity_ = size;
		this->data_ = new int[size];
		for (int i = 0; i < size; i++)
			this->data_[i] = data[i];
	};
	MyDinArr::~MyDinArr() {
		if (data_ != nullptr)
			delete[]data_;
	}
	MyDinArr::MyDinArr(const MyDinArr& other) {
	
		this->size_ = other.size_;
		this->capacity_ = size_;
		this->data_ = new int[other.size_]{};
		for (int i = 0; i < this->size_; i++)
			this->data_[i] = other.data_[i];
	}
	void MyDinArr::print_array()const {
		for (int i = 0; i < size_; i++)
			cout << data_[i]<<" ";
	}
	int& MyDinArr::operator[](int index) {
		return data_[index];
	}
	MyDinArr& MyDinArr::operator= (const MyDinArr& other) {
		this->size_ = other.size_;
		if (this->data_ != nullptr) {
			delete[]this->data_;
		}
		this->data_ = new int[other.size_]{};
		for (int i = 0; i < this->size_; i++)
			this->data_[i] = other.data_[i];
		return *this;
	}
	bool MyDinArr::operator==(const MyDinArr&& other) {
		 if (this->size_ != other.size_)return false;
		 if (this->size_ == other.size_) {
			 for (int i = 0; i < this->size_; i++) {
				 if (this->data_[i] != other.data_[i])
					 return false;
			 }
			 return true;
		 }
	 }
	int &MyDinArr::at(int index) {
		 return data_[index];
	}
	int& MyDinArr::front()const {
		 return data_[0];
	 }
	int& MyDinArr::back()const {
		 return data_[size_ - 1];
	 }
	int MyDinArr::capacity()const {
		 return capacity_;
	 }
	bool MyDinArr::empty() {
		 if(capacity_ > 0) return false;  return true;
	 }
	int  MyDinArr::size() const{
		 return this->size_;
	 }
	void MyDinArr::clear() {
		 delete[]data_;
		 size_ = 0;
	 }
	void MyDinArr::swap(MyDinArr& other,MyDinArr&other2) {
		 MyDinArr tmp;
		 tmp = other;
		 other = other2;
		 other2 = tmp;

	 }
	void MyDinArr::push_back(int value) {

		int *tmp = new int[size_ + 1];

		for (int i = 0; i < size_; i++) {
			tmp[i] = this->data_[i];
		}
		size_ += 1;
		for (int i = 0; i < this->size_ - 1; i++) {
			this->data_[i] = tmp[i];
		}
		data_[size_ - 1] = value;
		delete[]tmp;
	}
	const int* MyDinArr::data()const {
		return data_;
	}
	void MyDinArr::reserve(int value) {
		size_ = this->size_;
		int* tmp = new int[size_];
		for (int i = 0; i < size_; i++) {
			tmp[i] = data_[i];
		}
		delete[]data_;
		this->capacity_ =size_+value;
		this->size_ = this->capacity_;
		data_ = new int[capacity_] {};
		for (int i = 0; i < capacity_-value; i++) {
			data_[i] = tmp[i];
		}
		delete[]tmp;
	}
	void MyDinArr::shrink_to_fit() {
		int* tmp = new int[size_];
		for (int i = 0; i < size_; i++) {
			tmp[i] = data_[i];
		}
		capacity_ = size_;
		delete[]data_;
		data_ = new int[capacity_];
		for (int i = 0; i < capacity_; i++) {
			data_[i] = tmp[i];
		}
		delete[]tmp;
	}
	void MyDinArr::emplace_back(int value) {
		int* tmp = new int[size_ + 1];

		for (int i = 0; i < size_; i++) {
			tmp[i] = this->data_[i];
		}
		size_ += 1;
		for (int i = 0; i < this->size_ - 1; i++) {
			this->data_[i] = tmp[i];
		}
		data_[size_ - 1] = value;
		delete[]tmp;

	}
	void MyDinArr::pop_back() {

		int* tmp = new int[size_];
		for (int i = 0; i < size_; i++) {
			tmp[i] = data_[i];
		}
		delete[]data_;
		size_ -= 1;
		data_ = new int[size_] {};
		for (int i = 0; i < size_; i++) {
			data_[i] = tmp[i];
		}
		delete[]tmp;
	}
	void MyDinArr::insert(int index,int value,int count) {
			if (capacity_ < size_ + count)
				this->reserve(count);
			size_ += count;
			int* tmp = new int[size_];
			for (int i = 0; i < index; i++){
				tmp[i] = data_[i];
			}
			for (int i = index; i < index + count; i++){
				tmp[i] = value;
			}
			for (int i = index + count; i < size_; i++){
				tmp[i] = data_[i - count];
			}
			delete[]data_;
			data_ = new int[capacity_];
			for (int i = 0; i < size_; i++){
				data_[i] = tmp[i];
			}
			delete[]tmp;
	
	
	}
	void MyDinArr::resize(int newsize) {
		if (newsize > capacity_)
			this->reserve(newsize - capacity_);
		else
		{
			int* tmp = new int[size_];
			for (int i = 0; i < size_; i++)
			{
				tmp[i] = data_[i];
			}
			delete[]data_;
			capacity_ = newsize;
			data_ = new int[capacity_];
			if (size_ > capacity_)
				size_ = capacity_;
			for (int i = 0; i < size_; i++)
			{
				data_[i] = tmp[i];
			}
		}
		
	}
	void MyDinArr::erase(int begin, int end) {
		int count = 0;
		int* tmp = new int[size_];
		for (int i = 0; i < size_; i++){
			tmp[i] = data_[i];
		}
		delete[]data_;
		data_ = new int[size_ - (end - begin)];
		for (int i = 0; i < size_; i++)
		{
			if (i >= begin && i <= end)
			{
				count++;
				continue;
			}
			data_[i - count] = tmp[i];
		}
		size_-= (end - begin + 1);

	}
	int* MyDinArr::iterator::operator->()const {
		return place_;
	}
	int& MyDinArr::iterator::operator*()const {
		return *place_;
	};
	MyDinArr::iterator::operator int* ()const {
		return place_;
	}
	MyDinArr::iterator& MyDinArr::iterator:: operator+(int i)const {
		   iterator result(*this);
		   result.place_ += i;
		   return result;
	   }
	MyDinArr::iterator& MyDinArr::iterator:: operator+=(int i) {
		place_ += i;
		return *this;
	}
	MyDinArr::iterator& MyDinArr::iterator:: operator-(int i)const {
		iterator result(*this);
		result.place_ -= i;
		return result;
	}
	MyDinArr::iterator& MyDinArr::iterator:: operator-=(int i) {
		place_ -= i;
		return *this;
	}
	MyDinArr::iterator& MyDinArr::iterator:: operator--() {
		place_ -= 1;
		return *this;
	}
	MyDinArr::iterator& MyDinArr::iterator:: operator--(int) {
		iterator tmp{ *this };
		place_ -= 1;
		return tmp;
	}
	MyDinArr::iterator& MyDinArr::iterator:: operator++() {
		place_ += 1;
		return *this;
	}
	MyDinArr::iterator& MyDinArr::iterator:: operator++(int) {
		iterator tmp{ *this };
		place_ += 1;
		return tmp;
	}
	MyDinArr::iterator::operator bool()const {
		return static_cast<bool>(place_);
	}
	bool MyDinArr::iterator:: operator==(const iterator&& other)const {
		return place_ == other.place_;
	}
	bool MyDinArr::iterator:: operator<(const iterator&& other)const {
		return place_ < other.place_;
	}
	bool MyDinArr::iterator:: operator<=(const iterator&& other)const {
		return place_ <= other.place_;
	}
	bool MyDinArr::iterator:: operator>(const iterator&& other)const {
		return place_ > other.place_;
	}
	bool MyDinArr::iterator:: operator>=(const iterator&& other)const {
		return place_ >= other.place_;
	}
	int& MyDinArr::iterator:: operator[](int i)const {
		return place_[i];
	}
	