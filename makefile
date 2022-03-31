pa3: main.o
	g++ -o pa3 main.o

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o
