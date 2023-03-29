CXX := g++
CXXFLAGS := -Wall -c -Iinclude -pg -g

HEADERS := $(wildcard include/*.h)
SOURCES := $(wildcard scr/*.cpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

PROJECT_NAME := teste
EXE := bin/$(PROJECT_NAME)

FIB := 5000000 # MAX 43/5000000
FAT := 30 # MAX 65

$(EXE): $(OBJECTS)
	$(CXX) -o bin/$(PROJECT_NAME) $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) $< -o $@

run: $(EXE)
	$(EXE) fib r 5
	$(EXE) fib i 5
	$(EXE) fat r 5
	$(EXE) fat i 5

timeFib: $(EXE)
#	sudo perf stat $(EXE) fib r $(FIB)
	sudo perf stat $(EXE)	fib i $(FIB)

timeFat: $(EXE)
	sudo perf stat $(EXE)	fat r $(FAT)
	sudo perf stat $(EXE) fat i $(FAT)

clean:
	rm -f bin/$(PROJECT_NAME) scr/*.o