C = g++
PROG = list
CPPFLAGS = -O -Wall -std=c++11 -I $(HEADER_DIR)
SRC_PATH = src
BUILD_PATH = .
SRC_EXT = cpp
SOURCES = $(shell find $(SRC_PATH) -name '*.$(SRC_EXT)' | sort -k 1nr | cut -f2-)
OBJS = $(SOURCES:$(SRC_PATH)/%.$(SRC_EXT)=$(BUILD_PATH)/%.o)
HEADER_DIR  = ./include/
SRC_DIR     = ./src/
BIN_DIR     = ./bin/

list: $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mkdir -p $(BIN_DIR)
	mv *.o $(BIN_DIR)

$(BUILD_PATH)/%.o: $(SRC_PATH)/%.$(SRC_EXT)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(BIN_DIR)*.o $(PROG) *.o
	rm -r $(BIN_DIR)
