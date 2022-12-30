CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wshadow -O2 -pedantic-errors
TARGET   = a.out
SRC      = solve.cpp

run:
	$(CXX) $(CXXFLAGS) -c dir.cpp -o a.o
	$(CXX) $(CXXFLAGS) -c main.cpp -o b.o
	$(CXX) $(CXXFLAGS) a.o b.o -o $(TARGET)

.PHONY: out
out:
	./$(TARGET)

.PHONY: in1
in1:
	./$(TARGET) < in1

.PHONY: in2
in2:
	./$(TARGET) < in2


.PHONY: clean
clean:
	rm *.o
