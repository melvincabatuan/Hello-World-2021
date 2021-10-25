all: test

SOURCES     = $(filter-out src/main.cpp, $(wildcard src/*.cpp))
OBJECTS    := ${SOURCES:.cpp=.o}

SOURCES_TEST    := ${wildcard x/*.cpp}
OBJECTS_TEST    := ${SOURCES_TEST:.cpp=.o}

test: x/tests_run
	./x/tests_run

test1: x/tests_run
	./x/tests_run "Sum is computed correctly"

test2: x/tests_run
	./x/tests_run "Difference is computed correctly"

test3: x/tests_run
	./x/tests_run "Product is computed correctly"

test4: x/tests_run
	./x/tests_run "Quotient is computed correctly"

test5: x/tests_run
	./x/tests_run "Power is computed correctly"

x/tests_run: $(OBJECTS) $(OBJECTS_TEST)
	g++ $^ -o $@

x/%.o: x/%.cpp
	g++ -Isrc -Ix -c $< -o $@

src/%.o: src/%.cpp
	g++ -Isrc -Ix -c $< -o $@

clean:
	rm -f x/*.o src/*.o x/tests_run

.PHONY: all clean test
