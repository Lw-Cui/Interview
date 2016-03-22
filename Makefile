CC		= icc
CXXFLAG = -std=c++14 -Wall -Wextra -g -O0 -pthread

all:	ReverseList.out EditDistance.out

EditDistance.out: EditDistance.o
	$(CC)  $< -o $@ $(CXXFLAG)

EditDistance.o:	EditDistance.cpp
	$(CC)  $< -o $@ -c $(CXXFLAG)

ReverseList.out: ReverseList.o
	$(CC)  $< -o $@ $(CXXFLAG)

ReverseList.o: ReverseList.cpp
	$(CC)  $< -o $@ -c $(CXXFLAG)

clean: 
	 rm -f *.out *.o

rebuild:    clean all

.PHONY:	rebuild all clean

