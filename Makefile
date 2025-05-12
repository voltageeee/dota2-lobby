CXX        := g++
CXXFLAGS   := -std=c++17 -Wall -fPIC \
              -I./includes/ \
              -I/usr/local/include

LDFLAGS    := -shared -L/usr/local/lib -lprotobuf -ldl -lfunchook

PROTO_SRCS := $(wildcard includes/protos/*.pb.cc)
PROTO_OBJS := $(PROTO_SRCS:.cc=.o)

SRCS := fixups.cpp coordinator.cpp hook_utils.cpp lobby.cpp
OBJS := $(SRCS:.cpp=.o)
TARGET := libvoltage_fix.so

all: $(TARGET)

$(TARGET): $(OBJS) $(PROTO_OBJS)
	$(CXX) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
