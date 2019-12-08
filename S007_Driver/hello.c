#include <linux/init.h>
#include <linux/module.h>
#include <linux/init.h>

static int hello_data __initdata = 3;

int myint = 3;
module_param(myint,int,0);

static int __init my_init(void) {
  
  printk(KERN_INFO "Hello, world - this is the kernel speaking %d\n",hello_data);

  /* If we return a non zero value, it means that
   * init_module failed and the kernel module
   * can’t be loaded */                       
  
return  0;  
}
  
/* Cleanup - undid whatever init_module did */
static void __exit my_exit(void) {

  printk(KERN_INFO "Short is the life of a kernel module %d\n",myint);

}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jan Butas");
MODULE_DESCRIPTION("Study Driver");
MODULE_SUPPORTED_DEVICE("Siemens");
