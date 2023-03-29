CXX := g++
CXXFLAGS := -Wall -c -Iinclude -pg -g

HEADERS := $(wildcard include/*.h)
SOURCES := $(wildcard scr/*.cpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

PROJECT_NAME := teste
EXE := bin/$(PROJECT_NAME)

$(PROJECT_NAME): $(OBJECTS)
	$(CXX) -o bin/$(PROJECT_NAME) $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) $< -o $@

time: $(EXE)
	sudo perf stat $(EXE)
# TODO: achar jeito de fazer loop em makefile

clean:
	rm -f bin/$(PROJECT_NAME) scr/*.o