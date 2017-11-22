#ifndef _BOOKS_H_
#define _BOOKS_H_

#include "types.h"
//#include <experimental/filesystem>
#include <iostream>
#include <fstream>
#include <string>


class Book{
public:
	Book(){}
	~Book(){}
	
	void setIdentifier(const std::string& str);
	std::string& getIdentifier(void);
	void setAuthor(const std::string& str);
	std::string& getAuthor(void);
	void setName(const std::string& str);
	std::string& getName(void);

	friend std::ostream& operator<<(std::ostream& stream, Book& book);	
	friend std::istream& operator>>(std::istream& stream, Book& book);
private:
	std::string identifier;	//Book number (like ISBN)
	std::string author;
	std::string name; 	
	Date registration_date;
};

std::ostream& operator<<(std::ostream& stream, Book& book);
std::istream& operator>>(std::istream& stream, Book& book);

class BookContainer{
public:
	BookContainer();
	~BookContainer();
	
	void add(Book& book);
	void remove(Book& book){}
	//Book find(std::string str){}
	
private:
//	std::multimap<Book> db;		//database
	std::fstream fd;
	
	int books_amount;		//total book amount
	
		
};






#endif //_BOOKS_H_
