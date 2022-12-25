CXX      = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Wshadow -O2 -pedantic-errors
TARGET   = a.out
SRC      = solve.cpp

run:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

.PHONY: out
out:
	./$(TARGET)

.PHONY: in
in:
	./$(TARGET) < in1
	./$(TARGET) < in2

.PHONY: test
test:
	oj t

.PHONY: submit
submit:
	oj submit $(SRC)
