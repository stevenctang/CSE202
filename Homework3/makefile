Appointment : Appointment.o Daily.o Monthly.o Onetime.o Main.o
	g++ -o Appointment Appointment.cpp Daily.cpp Monthly.cpp Onetime.cpp Main.cpp

Appointment.o : Appointment.cpp Appointment.h
	g++ -c Appointment.cpp

Daily.o : Daily.cpp Daily.o
	g++ -c Daily.cpp
	
Monthly.o : Montly.cpp Monthly.h
	g++ -c Monthly.cpp

Onetime.o : Onetime.cpp Onetime.h
	g++ -c Onetime.cpp
	
Main.o : Main.cpp Appointment.cpp Daily.cpp Monthly.cpp Onetime.cpp Main.cpp
	g++ -c Main.cpp
	
clean:
	rm *.o Appointment