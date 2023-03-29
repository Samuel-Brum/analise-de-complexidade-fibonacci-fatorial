CXX := g++
CXXFLAGS := -Wall -c -Iinclude -pg -g

HEADERS := $(wildcard include/*.h)
SOURCES := $(wildcard scr/*.cpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

PROJECT_NAME := teste
EXE := bin/$(PROJECT_NAME)

N := 15

$(EXE): $(OBJECTS)
	$(CXX) -o bin/$(PROJECT_NAME) $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) $< -o $@

run: $(EXE)
	$(EXE) -fib -r -$(N)
	$(EXE) -fib -i -$(N)
	$(EXE) -fat -r -$(N)
	$(EXE) -fat -i -$(N)

time: $(EXE)
	sudo perf stat $(EXE) -fib -r -$(N)
	sudo perf stat $(EXE)	-fib -i -$(N)
	sudo perf stat $(EXE)	-fat -r -$(N)
	sudo perf stat $(EXE) -fat -i -$(N)
# TODO: achar jeito de fazer loop em makefile

clean:
	rm -f bin/$(PROJECT_NAME) scr/*.o