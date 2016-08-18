Bank: Bank_main.o Bank.o Account.o
	g++ -o Bank Bank_main.o Bank.o Account.o

Bank_main.o: Bank_main.cpp Bank.h Account.h
	g++ -c Bank_main.cpp

Bank.o: Bank.cpp Bank.h Account.h
	g++ -c Bank.cpp

Account.o: Account.cpp Account.h
	g++ -c Account.cpp

clean:
	rm *.o Bank
