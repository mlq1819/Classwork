P=WriteAMkf
CFLAGS= -g -Wall

all: $(P)

$(P): $(P).o
	g++ $(CFLAGS) $(P).o -o $(P)
	
$(P).o: $(P).cpp $(P).h
	g++ $(CFLAGS) -c $(P) -o $(P).o
	
clean:
	rm -rf *.o $(P)
