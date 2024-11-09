A2B: main.o function.o
	g++ main.cpp function.cpp -o A2B
function.o: function.cpp
	g++ -c function.cpp
main.o: main.cpp function.h
	g++ -c main.cpp
clean: 
	rm -rf *.o
cleanall:
	rm -rf *.o A2B
