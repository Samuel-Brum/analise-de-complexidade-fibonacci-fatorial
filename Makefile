CXX := g++
CXXFLAGS := -Wall -c -Iinclude

HEADERS := $(wildcard include/*.h)
SOURCES := $(wildcard scr/*.cpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

PROJECT_NAME := teste

$(PROJECT_NAME): $(OBJECTS)
	$(CXX) -o bin/$@ $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f bin/teste scr/*.o