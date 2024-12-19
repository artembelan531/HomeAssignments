CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude
LDFLAGS = -lgtest -lgtest_main -lpthread

SRC_DIR = src
INCLUDE_DIR = include
TEST_DIR = tests
BUILD_DIR = build

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
TEST_SRCS := $(wildcard $(TEST_DIR)/*.cpp)
TEST_OBJS := $(TEST_SRCS:$(TEST_DIR)/%.cpp=$(BUILD_DIR)/%.o)

TARGET = transformer
TEST_TARGET = run_tests

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(OBJS)
  $(CXX) $(CXXFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(INCLUDE_DIR)/%.h | $(BUILD_DIR)
  $(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(TEST_DIR)/%.cpp | $(BUILD_DIR)
  $(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
  mkdir -p $(BUILD_DIR)

test: $(TEST_TARGET)

$(TEST_TARGET): $(OBJS) $(TEST_OBJS)
  $(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
  ./$(TEST_TARGET)

clean:
  rm -rf $(BUILD_DIR) $(TARGET) $(TEST_TARGET)
