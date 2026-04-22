CXX = g++
CXXFLAGS = -std=c++20 -O2 -Wall

# compila qualquer .cpp passado como argumento
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f *.o *.exe a.out 
