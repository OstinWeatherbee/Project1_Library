#ifndef _BOOKS_H_
#define _BOOKS_H_

#include "types.h"
//#include <experimental/filesystem>
#include <iostream>
#include <fstream>


class Book{
public:
	Book(){}
	~Book(){}
private:
	char identifier[20];	//Book number (like ISBN)
	char author[50];
	char name[100]; 	
	Date registration_date;
};


class BookContainer{
public:
	BookContainer();
	~BookContainer();
private:
//	std::multimap<Book> db;		//database
	std::fstream fd;
	int books_amount;		//total book amount
};

#endif //_BOOKS_H_
