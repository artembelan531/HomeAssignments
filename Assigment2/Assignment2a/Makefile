A2A: stak.o stak2.o
	g++ stak.cpp stak2.cpp -o A2A
stak2.o: stak2.cpp
	g++ -c stak2.cpp
stak.o: stak.cpp stak.h
	g++ -c stak.cpp
clean: 
	rm -rf *.o
cleanall:
	rm -rf *.o A2A
