Person: Instructor.o Person.o Student.o main.o
	g++ -o Person Instructor.o Person.o Student.o main.o
main.o: main.cpp Instructor.cpp Instructor.h Person.cpp Person.h Student.cpp Student.h
	g++ -c main.cpp
Person.o: Person.cpp Person.h
	g++ -c Person.cpp
Instructor.o: Instructor.cpp Instructor.h
	g++ -c Instructor.cpp
Student.o: Student.cpp Student.h
	g++ -c Student.cpp
clean:
	rm *.o Person
