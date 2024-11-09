A2A: stack.o reverse.o
	g++ stack.cpp reverse.cpp -o A2A
stak2.o: reverse.cpp
	g++ -c reverse.cpp
stak.o: stack.cpp reverse.h
	g++ -c stack.cpp
clean: 
	rm -rf *.o
cleanall:
	rm -rf *.o A2A
