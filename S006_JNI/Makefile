# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=gcc
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS= -Wall -W -Werror -pthread

compile_java: HelloJNI.java
	javac HelloJNI.java

run_java:
	java -Djava.library.path=. HelloJNI

compile_c: HelloJNI.c 
	$(CC) -I"/usr/lib/jvm/java-6-openjdk-i386/include" -I"/usr/lib/jvm/java-6-openjdk-i386/include/linux"  -shared -o libhello.so HelloJNI.c

clean:
	rm -rf *o 



