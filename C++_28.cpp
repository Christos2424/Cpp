#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Book

{

    private:
        string title;
        string author;
        string isbn;

    public:
        Book(string title,string author,string isbn):title(title),author(author),isbn(isbn){}
        string getTitle()
        {
            return title;
        }
        string getAuthor()
        {
            return author;
        }
        string getISBN()
        {
            return isbn;
        }
};

class Library

{
    private:
        vector<Book>books;
    public:
        void addBook(Book book)
        {
            books.push_back(book);
        }
        void printBooks()
        {
            cout<<"Books in library"<<endl;
            for (auto book:books)
            {
                cout<<"Title: "<<book.getTitle()<<" , Author: "<<book.getAuthor()<<" , ISBN: "<<book.getISBN()<<endl;
            }
        }
};

int main()
{
    Book book1("Mike's story","Mike K.","646487544848");
    Library library;
    library.addBook(book1);
    library.printBooks();
    return 0;
}
