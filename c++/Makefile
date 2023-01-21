CC=g++
CCFLAGS= -Wall -Werror -std=c++11 -g
LIBFLAGS=
SRC= $(wildcard *.cpp)
OBJ= $(SRC:.cpp=.o)
TST_DIR=tests/
TST= $(wildcard $(TST_DIR)/*.cpp)
OBJ_TEST = $(filter-out main.o, $(OBJ)) $(TST:.cpp=.o)
EXEC= exec


all: ${EXEC}

testcase : 
	cd $(TST_DIR) ;  make

test : testcase
	cd $(TST_DIR); ./testcase

$(EXEC): $(OBJ)
	$(CC) $(LIBFLAGS) $^ -o $@  

%.o: %.cpp
	$(CC) $(CCFLAGS) -o $@ -c $<

.depend:
	g++ $(CCFLAGS) -MM $(SRC) > .depends
-include .depends

clean:
	rm -f $(OBJ) $(EXEC)
cleantest:
	cd $(TST_DIR) ; make clean
distclean : clean cleantest

