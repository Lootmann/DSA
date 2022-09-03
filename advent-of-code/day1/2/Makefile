CXX      = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Wshadow -O2 -pedantic-errors
TARGET   = a.out
SRC      = main.cpp

run:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

.PHONY: out
out:
	./$(TARGET)

.PHONY: in
in:
	./$(TARGET) < in
