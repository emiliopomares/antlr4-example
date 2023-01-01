.DEFAULT_GOAL := build

prefix = calcWithFunctions

antlr_files_dir = ./antlr

antlr_options = -visitor -no-listener -o $(antlr_files_dir)

CC = clang++
CFLAGS = -std=c++20
LIBS = -lantlr4-runtime

antlr_files = $(prefix).interp $(prefix).tokens\
	      $(prefix)Lexer.tokens $(prefix)Lexer.interp\
	      $(prefix)BaseVisitor.cpp $(prefix)BaseVisitor.h\
	      $(prefix)Lexer.cpp $(prefix)Lexer.h\
	      $(prefix)Parser.cpp $(prefix)Parser.h\
  	      $(prefix)Visitor.cpp $(prefix)Visitor.h

objfiles = Main.o Function.o SymbolTable.o Variable.o Expression.o\
	 $(prefix)Lexer.o $(prefix)Parser.o Pass1Visitor.o Pass2Visitor.o

objects = Main Function SymbolTable Variable Expression\
         Pass1Visitor Pass2Visitor

build: antlr_files $(objfiles)
	$(CC) -o Main $(objfiles) $(LIBS)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

$(prefix)Lexer.o: $(antlr_files_dir)/$(prefix)Lexer.cpp
	$(CC) -c $(CFLAGS) $(antlr_files_dir)/$(prefix)Lexer.cpp

$(prefix)Parser.o: $(antlr_files_dir)/$(prefix)Parser.cpp
	$(CC) -c $(CFLAGS) $(antlr_files_dir)/$(prefix)Parser.cpp

antlr_files: $(prefix).g4
	antlr4 -Dlanguage=Cpp $(prefix).g4 $(antlr_options) 
			
clean:
	rm $(antlr_files_dir)/*
	rm *.o
	rm Main
