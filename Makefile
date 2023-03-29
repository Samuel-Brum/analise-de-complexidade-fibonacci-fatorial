CXX := g++
CXXFLAGS := -Wall -c

HEADERS := $(wildcard include/*.h)
SOURCES := $(wildcard scr/*.cpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

PROJECT_NAME := teste

$(PROJECT_NAME): $(OBJECTS)
	$(CXX) -o bin/teste $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f bin/teste scr/*.o