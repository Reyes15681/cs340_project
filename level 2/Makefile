# Builds every .cpp file in this folder at -O0, -O2 and -O3.
# Output goes to build/<name>_O0, build/<name>_O2, build/<name>_O3.
#
#   make        build everything
#   make clean  delete everything in build/

CXX      ?= c++
CXXFLAGS ?= -std=c++17 -Wall
BUILD    := build

SRCS := $(wildcard *.cpp)
NAMES := $(SRCS:.cpp=)
BINS := $(foreach n,$(NAMES),$(BUILD)/$(n)_O0 $(BUILD)/$(n)_O2 $(BUILD)/$(n)_O3)

.PHONY: all clean

all: $(BINS)

$(BUILD):
	mkdir -p $(BUILD)

$(BUILD)/%_O0: %.cpp | $(BUILD)
	$(CXX) $(CXXFLAGS) -O0 $< -o $@

$(BUILD)/%_O2: %.cpp | $(BUILD)
	$(CXX) $(CXXFLAGS) -O2 $< -o $@

$(BUILD)/%_O3: %.cpp | $(BUILD)
	$(CXX) $(CXXFLAGS) -O3 $< -o $@

clean:
	rm -f $(BUILD)/*
