.DEFAULT_GOAL := build

prefix = calcWithFunctions

antlr_files_dir = ./antlr

antlr_options = -visitor -no-listener -o $(antlr_files_dir)

cc = clang++
cflags = -std=c++20
libs = -lantlr4-runtime

antlr_files = $(prefix).interp $(prefix).tokens\
	      $(prefix)Lexer.tokens $(prefix)Lexer.interp\
	      $(prefix)BaseVisitor.cpp $(prefix)BaseVisitor.h\
	      $(prefix)Lexer.cpp $(prefix)Lexer.h\
	      $(prefix)Parser.cpp $(prefix)Parser.h\
  	      $(prefix)Visitor.cpp $(prefix)Visitor.h

objfiles = Main.o Function.o SymbolTable.o Variable.o Expression.o\
	 $(prefix)Lexer.o $(prefix)Parser.o Pass1Visitor.o Pass2Visitor.o

build: antlr_files $(objfiles)
	$(cc) -o Main $(objfiles) $(libs)

Pass1Visitor.o: Pass1Visitor.cpp
	$(cc) -c $(cflags) Pass1Visitor.cpp

Pass2Visitor.o: Pass1Visitor.cpp
	$(cc) -c $(cflags) Pass2Visitor.cpp

SymbolTable.o: SymbolTable.cpp
	$(cc) -c $(cflags) SymbolTable.cpp

Main.o: Main.cpp
	$(cc) -c $(cflags) Main.cpp

Function.o: Function.cpp
	$(cc) -c $(cflags) Function.cpp

Variable.o: Variable.cpp
	$(cc) -c $(cflags) Variable.cpp

Expression.o: Expression.cpp
	$(cc) -c $(cflags) Expression.cpp

$(prefix)Lexer.o: $(antlr_files_dir)/$(prefix)Lexer.cpp
	$(cc) -c $(cflags) $(antlr_files_dir)/$(prefix)Lexer.cpp

$(prefix)Parser.o: $(antlr_files_dir)/$(prefix)Parser.cpp
	$(cc) -c $(cflags) $(antlr_files_dir)/$(prefix)Parser.cpp

antlr_files: $(prefix).g4
	antlr4 -Dlanguage=Cpp $(prefix).g4 $(antlr_options) 
			
clean:
	rm $(antlr_files_dir)/*
	rm *.o
	rm Main
