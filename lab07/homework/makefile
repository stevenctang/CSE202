Worker: worker.o main.o salaryworker.o hourlyworker.o
	g++ -o Worker worker.o main.o salaryworker.o hourlyworker.o
main.o: main.cpp worker.h worker.cpp hourlyworker.h hourlyworker.cpp salaryworker.h salaryworker.cpp
	g++ -c main.cpp
worker.o: worker.cpp worker.h
	g++ -c worker.cpp
hourlyworker.o: hourlyworker.cpp hourlyworker.h
	g++ -c hourlyworker.cpp
salaryworker.o: salaryworker.cpp salaryworker.h
	g++ -c salaryworker.cpp
clean:
	rm *.o Worker
