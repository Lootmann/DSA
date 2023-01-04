CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wshadow -O2 -pedantic-errors
TARGET   = a.out
SRC      = solve.cpp

run:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

.PHONY: out
out:
	./$(TARGET)

.PHONY: in1
in1:
	make && ./$(TARGET) < in1 | cat

.PHONY: in2
in2:
	make && ./$(TARGET) < in2 | cat
