R=Dog
S=DogShelter
CFLAGS= -g -Wall

all: $(R) $(S)

$(R): $(R).o
	g++ $(CFLAGS) $(R).o -o $(R)
	
$(R).o: $(R).cpp $(R).h
	g++ $(CFLAGS) -c $(R).cpp -o $(R).o

$(S)Driver: $(S)Driver.o $(S).o
	g++ $(CFLAGS) $(S)Driver.o $(S).o -o $(S)Driver
	
$(S).o: $(S).cpp $(S).h $(R).h
	g++ $(CFLAGS) -c $(S).cpp -o $(S).o
	
$(S)Driver.o: $(S)Driver.cpp $(S).h $(R).h
	g++ $(CFLAGS) -c $(S)Driver.cpp -o $(S)Driver.o
	
run $(R): $(R)
	./$(R)

run $(S)Driver: $(S)Driver
	./$(S)Driver

checkmem $(R): $(R)
	valgrind ./$(R)

checkmem $(S)Driver: $(S)Driver
	valgrind ./$(S)Driver

clean:
	rm -rf $(R)
	rm -rf $(R).o
	rm -rf $(S)Driver
	rm -rf $(S)Driver.o
	rm -rf $(S).o

