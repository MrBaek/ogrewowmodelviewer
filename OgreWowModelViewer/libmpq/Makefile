CC = g++
AR = ar
objects = common.o explode.o extract.o huffman.o wave.o mpq.o
zlib_objects = ../zlib/*.o #adler32.o compress.o crc32.o gzio.o uncompr.o deflate.o trees.o zutil.o inflate.o inftrees.o inffast.o

all:	libmpq.a libmpq.so

clean: 
	rm -f libmpq.a libmpq.so *.o

libmpq.a: $(objects) $(zlib_objects)
	$(AR) -shared cru $@ $+
libmpq.so: $(objects) $(zlib_objects)
	$(CC) -shared -o $@ $+

%.o:%.cpp
	$(CC) -I../ -c $+
