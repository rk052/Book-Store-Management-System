all: Book_Management
Book_Management: main.o Autobook.o FictionTypeBook.o NonfictionTypeBook.o
	g++ main.o Autobook.o FictionTypeBook.o NonfictionTypeBook.o -o Book_Management
main.o:	main.cpp
	g++ -c main.cpp
Autobook.o: Autobook.cpp
	g++ -c Autobook.cpp
FictionTypeBook.o: FictionTypeBook.cpp
	 g++ -c FictionTypeBook.cpp

NonfictionTypeBook.o: NonfictionTypeBook.cpp
	g++ -c NonfictionTypeBook.cpp

clean:
	rm -rf *o  Book_Management


