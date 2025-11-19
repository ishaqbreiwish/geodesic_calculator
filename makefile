# compiler
CXX = g++

# compiler flags
CXXFLAGS = -I math/include -Wall -Wextra -std=c++17

# source files
# wildcard finds every file matching a pattern
SRCS = $(wildcard math/src/*.cpp)
TEST = $(wildcard tests/*.cpp)

# default if not specificied for make is test
all: test

# make test
test:
	$(CXX) $(CXXFLAGS) $(SRCS) $(TEST) -o test_math

# make clean
clean:
	rm -f test_math