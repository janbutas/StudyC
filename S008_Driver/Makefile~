
obj-m := hello.o 

## KERNEL_SOURCE := /usr/src/linux-headers-3.8.0-31-generic    
KERNEL_SOURCE := /usr/src/linux-headers-$(shell uname -r)   
PWD := $(shell pwd) 

all:
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} modules
clean:
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} clean
load:
	sudo insmod ./hello.ko myint=5
unload:
	sudo rmmod ./hello.ko  
print:
	cat /var/log/syslog
