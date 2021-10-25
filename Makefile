all: test

SOURCES     = $(filter-out src/main.cpp, $(wildcard src/*.cpp))
OBJECTS    := ${SOURCES:.cpp=.o}

SOURCES_TEST    := ${wildcard _/*.cpp}
OBJECTS_TEST    := ${SOURCES_TEST:.cpp=.o}

test: _/tests_run
	./_/tests_run

test1: _/tests_run
	./_/tests_run "Sum is computed correctly"

test2: _/tests_run
	./_/tests_run "Difference is computed correctly"

test3: _/tests_run
	./_/tests_run "Product is computed correctly"

test4: _/tests_run
	./_/tests_run "Quotient is computed correctly"

test5: _/tests_run
	./_/tests_run "Power is computed correctly"

_/tests_run: $(OBJECTS) $(OBJECTS_TEST)
	g++ $^ -o $@

_/%.o: _/%.cpp
	g++ -Isrc -I_ -c $< -o $@

src/%.o: src/%.cpp
	g++ -Isrc -I_ -c $< -o $@

clean:
	rm -f _/*.o src/*.o _/tests_run

.PHONY: all clean test
