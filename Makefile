CXX = g++
CXXFLAGS = -std=c++17 -g
LDFLAGS = -lSDL2
TARGET = main
OBJS = main.o game.o

main: main.o game.o sdl_handler.o
	$(CXX) $(CXXFLAGS) -o main main.o game.o sdl_handler.o $(LDFLAGS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

game.o: game.cpp game.hpp
	$(CXX) $(CXXFLAGS) -c game.cpp

sdl_handler.o: sdl_handler.cpp sdl_handler.hpp
	$(CXX) $(CXXFLAGS) -c sdl_handler.cpp
clean:
	rm $(TARGET) $(OBJS)