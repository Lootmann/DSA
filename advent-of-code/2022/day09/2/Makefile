CXX      = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Wshadow -O2 -pedantic-errors
TARGET   = a.out
SRC      = solve.cpp

run:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

.PHONY: out
out:
	./$(TARGET)

.PHONY: in1
in1:
	make && ./$(TARGET) < in1 > out && nvim out

.PHONY: in2
in2:
	make && ./$(TARGET) < in2 > out && nvim out

.PHONY: in3
in3:
	make && ./$(TARGET) < in3 > out
