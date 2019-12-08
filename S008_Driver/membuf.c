#include <linux/init.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/slab.h>

char *buf;

static int __init my_init(void) {
  
  printk(KERN_INFO "Trying to allocate\n");
  buf = kmalloc(100, GFP_KERNEL);
  if (!buf) {
    printk(KERN_INFO "Unable to allocate\n");    
    return 1;
  }
  buf[0] = 'A';
  buf[1] = 'h';
  buf[2] = 'o';
  buf[3] = 'j';
  buf[4] = ' ';
  buf[5] = 'c';
  buf[6] = 'h';
  buf[7] = 'a';
  buf[8] = 'r';
  buf[9] = 'a';
  buf[10] = 'c';
  buf[11] = 't';
  buf[12] = 'e';
  buf[13] = 'r';
  buf[14] = ' ';
  buf[15] = ' ';

  /* If we return a non zero value, it means that
   * init_module failed and the kernel module
   * can’t be loaded */                       
  
return  0;  
}
  
/* Cleanup - undid whatever init_module did */
static void __exit my_exit(void) {

  printk(KERN_INFO "Trying to free allocated buffer %p %s\n",buf,buf);
  kfree(buf);

}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jan Butas");
MODULE_DESCRIPTION("Study Driver");
MODULE_SUPPORTED_DEVICE("Siemens");
