CXX := g++
CXXFLAGS := -Wall -c -Iinclude

HEADERS := $(wildcard include/*.h)
SOURCES := $(wildcard scr/*.cpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

FILE_NAME := teste

$FILE_NAME: $(OBJECTS)
	$(CXX) -o bin/teste $(OBJECTS)

obj/%.o: scr/%.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f bin/teste scr/*.o