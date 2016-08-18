Person: Person.o Person_main.o
	g++ -o Person Person.o Person_main.o
Person_main.o: Person_main.cpp Personc.h
	g++ -c Person_main.cpp
Person.o: Person.cpp Personc.h
	g++ -c Person.cpp
clean:
	rm *.o Person
