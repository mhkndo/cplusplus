CXX=g++
CFLAGS=-std=c++11
OBJ=trial.o

trial: $(OBJ)
	${CXX} $(CFLAGS) -o $@ $(OBJ)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $<

clean:
	rm -f trial *.o

# $< the name of the related file that caused the action.
# $* the prefix shared by target and dependent files.
# $@ is the name of the file to be made.
# $? is the names of the changed dependents.
