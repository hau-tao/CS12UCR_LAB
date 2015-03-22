#Generic Makefile template

#Variables
PROGRAM = a.out
COMPILE = g++
FLAGS = -g -W -Wall -Werror -ansi -pedantic
# Change this to be the name of the file containing th main function
MAIN = classes.cpp
# Change the OBJS for each project you work on.
OBJS = point.o rectangle.o

#Targets
#target: dependency_list
# actions
# $() denotes a variable defined above. $^ stands for all of the dependencies. $< is only the first dependency in the
# list. 

all: $(MAIN) $(OBJS)
	$(COMPILE) $(FLAGS) $^ -o $(PROGRAM) 

# The following rule is a pattern rule, any dependency ending in a .o will call this rule. The rule will then search
# for the corresponding .cpp file (named the same) to perform compilatino.
%.o: %.cpp
	$(COMPILE) $(FLAGS) -c $<

# The following rules will compile each file to an object file from the cpp file. The rule above will do this using
# patterns so as to not require you to write new rules for each file. 
#point.o: point.cpp
#$(COMPILE) $(FLAGS) -c point.cpp 

#rectangle.o: rectangle.cpp
#$(COMPILE) $(FLAGS) -c rectangle.cpp 

clean:
	rm -rf *~ *.o $(PROGRAM)
