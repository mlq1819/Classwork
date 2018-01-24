P =WriteAMkf
CFLAGS = -g -Wall

all: $(P)

$(P): $(P).cpp
	g++ $(CFLAGS) $(P).cpp -o $(P)
	
clean:
	rm -rf $(P)