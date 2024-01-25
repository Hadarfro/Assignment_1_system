CC= gcc
AR= ar
OBJECTS_LOOP= advancedClassificationLoop.o basicClassification.o
OBJECTS_REC= advancedClassificationRecursion.o basicClassification.o
FLAGS= -Wall -g

all: ibclassloops.a ibclassrec.a libclassrec.so libclassloops.so mains maindloop maindrec


#create static lib that contain all loop code
libclassloops.a: $(OBJECTS_LOOP)
      $(AR) -r -c -s libclassloops.a $(OBJECTS_LOOP)  
# lib<name>.a: Create static lib (".a")  
# "-r": Insert the files into the archive (replace existing files).
# "-c": Create the archive if it does not exist.
# "-s": Write an index (or symbol table) into the archive.


libclassrec.a: $(OBJECTS_REC)
     $(CC) -r -c -s libclassrec.a $(OBJECTS_REC)


# Build the dynamic library with recursive code functin
libclassrec.so: $(OBJECTS_REC)
    $(CC) -shared -o libclassrec.so $(OBJECTS_REC)
# lib<name>.so : Create dynamic lib
# -shared: This flag indicates that a dynamic library should be created.
# -o:  This part specifies the output file name. In this case, it's libclassrec.so.


# Build the dynamic library with loop code functin
libclassloops.so: $(OBJECTS_LOOP)
    $(CC) -shared -o libclassloops.so $(OBJECTS_LOOP)


# Build the main program linked with the static library recursive
mains: main.c libclassrec.a
    $(CC) -o mains main.c -L. -lcassrec
#-L.: This option tells the linker to look for libraries in the current directory (".")


#explenation about "-lclassrec" / "-lclassloop":
# -l followed by a library name, the linker searches for a file named lib{name}.a or lib{name}.so in the directories specified by the -L option (library search path) and then links my program with it


# Build the main program linked with the dynamic library loop
maindloop: main.c libclassloops.so
    $(CC) -o maindloop main.c -L. -lclassloop -Wl,-rpath,.
#-Wl: is a mechanism to pass linker options from the compiler
#-rpath: Specifies that the runtime library search path should include the current directory

# Build the main program linked with the dynamic library recursive
maindrec: main.c libclassrec.so
    $(CC) -o maindrec main.c -L. -lcassrec -Wl,-rpath,. 


# Clean up compiled files
clean:
	rm -f *.o *.a *.so mains maindloop maindrec