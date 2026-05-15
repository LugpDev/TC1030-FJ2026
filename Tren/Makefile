CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
TARGET   = tren
SRCS     = main.cpp Tren.cpp Vagon.cpp VagonCarga.cpp VagonPasajeros.cpp
OBJS     = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: clean run
