CXX := gcc
CFLAGS :=-Wall #-g3
LDFLAGS :=
LDLIBS := -lstdc++ -lm
SILENT := @
ECHO := echo

MODULES = quadrat
SRC = $(MODULES:%=%.cpp)
OBJ = $(SRC:%.cpp=%.o)

all : quadrat

quadrat:$(OBJ)
	$(SILENT) $(ECHO) "--- Creating $@ ---"
	$(SILENT) $(CXX) $^ -o $@ $(LDLIBS)

%.o: %.cpp
	$(SILENT) $(ECHO) "--- Compiling $< ---"
	$(SILENT) $(CXX) -c $(CFLAGS) $<

.PHONY: clean

clean:
	$(SILENT) $(ECHO) "--- Removing object files ---"
	$(SILENT) rm -f *.o
