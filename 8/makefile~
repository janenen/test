CXX := gcc
CFLAGS := -g3
LDFLAGS :=
LDLIBS := -lstdc++
SILENT := @
ECHO := echo

MODULES = main Dec2Bin Bin2Dec
SRC = $(MODULES:%=%.cpp)
OBJ = $(SRC:%.cpp=%.o)

all : main

main:$(OBJ)
	$(SILENT) $(ECHO) "--- Creating $@ ---"
	$(SILENT) $(CXX) $^ -o Komperator.exe $(LDLIBS) #$@ $(LDLIBS)

%.o: %.cpp
	$(SILENT) $(ECHO) "--- Compiling $< ---"
	$(SILENT) $(CXX) -c $(CFLAGS) $<

.PHONY: clean

clean:
	$(SILENT) $(ECHO) "--- Removing object files ---"
	$(SILENT) rm -f *.o
