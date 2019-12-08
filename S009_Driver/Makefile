
obj-m := membuf.o 

## KERNEL_SOURCE := /usr/src/linux-headers-3.8.0-31-generic    
KERNEL_SOURCE := /usr/src/linux-headers-$(shell uname -r)   
PWD := $(shell pwd) 

all:
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} modules
clean:
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} clean
load:
	sudo insmod ./membuf.ko
unload:
	sudo rmmod ./membuf.ko  
print:
	cat /var/log/syslog
