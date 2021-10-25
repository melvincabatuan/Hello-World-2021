all: test

SOURCES     = $(filter-out ../src/main.cpp, $(wildcard ../src/*.cpp))
OBJECTS    := ${SOURCES:.cpp=.o}

SOURCES_TEST    := ${wildcard *.cpp}
OBJECTS_TEST    := ${SOURCES_TEST:.cpp=.o}

test: tests_run
	./tests_run

tests_run: $(OBJECTS) $(OBJECTS_TEST)
	g++ $^ -o $@

%.o: %.cpp
	g++ -I../src -c $< -o $@

../src/%.o: ../src/%.cpp
	g++ -I../src -c $< -o $@

clean:
	rm -f *.o ../src/*.o tests_run

.PHONY: all clean test