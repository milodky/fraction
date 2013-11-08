TARGET := fraction
CC := g++
CXXFLAG := -std=c++11
OBJS :=  Fractional.o main.o
#HDRS := $(OBJS:.o=.h)
.SUFFIXES: .cpp .o

$(TARGET): $(OBJS)
	$(CC) -Wall -o $@ $(OBJS)
#	$(CC) -Wall -o $@ $<
#$(OBJS): $(HDRS)
%.o: %.cpp
	$(CC) -Wall $(CXXFLAG) -c $<
.PHONY: run clean

run:
	make
	./$(TARGET)

clean:
	-rm *.o
	-rm $(TARGET)
