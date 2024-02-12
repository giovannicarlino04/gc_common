CC := g++
CFLAGS := -Wall -Wextra -pedantic -std=c++11
SRC_DIR := src
BUILD_DIR := build

all: gcmain_tests

gcmain_tests: $(BUILD_DIR)/gcmain_tests.o $(BUILD_DIR)/algebra.o $(BUILD_DIR)/output.o
	$(CC) $^ -o $@

$(BUILD_DIR)/gcmain_tests.o: $(SRC_DIR)/gcmain_tests.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/algebra.o: $(SRC_DIR)/algebra.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/output.o: $(SRC_DIR)/output.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)/*.o gcmain_tests