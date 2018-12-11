count: count.o 
	g++ count.o 
	
count.o: count.cc
	g++ -c count.cc 
clean: 
	rm *.o output 


