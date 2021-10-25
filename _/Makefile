all: test

SOURCES     = $(filter-out ../src/main.cpp, $(wildcard ../src/*.cpp))
OBJECTS    := ${SOURCES:.cpp=.o}

SOURCES_TEST    := ${wildcard *.cpp}
OBJECTS_TEST    := ${SOURCES_TEST:.cpp=.o}

test: tests_run
	./tests_run

test1: tests_run
	./tests_run "Sum is computed correctly"

test2: tests_run
	./tests_run "Difference is computed correctly"

test3: tests_run
	./tests_run "Product is computed correctly"

test4: tests_run
	./tests_run "Quotient is computed correctly"

test5: tests_run
	./tests_run "Power is computed correctly"

tests_run: $(OBJECTS) $(OBJECTS_TEST)
	g++ $^ -o $@

%.o: %.cpp
	g++ -I../src -c $< -o $@

../src/%.o: ../src/%.cpp
	g++ -I../src -c $< -o $@

clean:
	rm -f *.o ../src/*.o tests_run

.PHONY: all clean test