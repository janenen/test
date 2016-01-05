CXX := gcc
CFLAGS := -g3
LDFLAGS :=
LDLIBS := -lstdc++
SILENT := @
ECHO := echo

MODULES = gip-wc
SRC = $(MODULES:%=%.cpp)
OBJ = $(SRC:%.cpp=%.o)

all : gip-wc

gip-wc:$(OBJ)
	$(SILENT) $(ECHO) "--- Creating $@ ---"
	$(SILENT) $(CXX) $^ -o $@ $(LDLIBS)

%.o: %.cpp
	$(SILENT) $(ECHO) "--- Compiling $< ---"
	$(SILENT) $(CXX) -c $(CFLAGS) $<

.PHONY: clean

clean:
	$(SILENT) $(ECHO) "--- Removing object files ---"
	$(SILENT) rm -f *.o
