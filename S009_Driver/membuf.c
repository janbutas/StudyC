#include <linux/init.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/slab.h>

#define BUF_SIZE 20
int* buf_ptr;

static int __init my_init(void) {
  
  int index;
  printk(KERN_INFO "Trying to allocate %d\n",BUF_SIZE);
  buf_ptr = (int*) kmalloc(sizeof(int)*BUF_SIZE, GFP_KERNEL);

  if (!buf_ptr) {
    printk(KERN_INFO "Unable to allocate\n");    
    return 1;
  }
  printk(KERN_INFO "Allocated buffer address = %p\n", buf_ptr);
  
  for (index=0; index < BUF_SIZE; index++){
    *(buf_ptr+index) = index;
  }

return  0;  
}
  
/* Cleanup - undid whatever init_module did */
static void __exit my_exit(void) {

  int index;
  printk(KERN_INFO "Trying to free allocated buffer %p \n",buf_ptr);

  for (index = 0; index < BUF_SIZE; index++ ) {
    printk(KERN_INFO " %d ",*(buf_ptr+index));
  }

  printk(KERN_INFO " \n");
  
  if (buf_ptr){
    kfree(buf_ptr);
  }
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jan Butas");
MODULE_DESCRIPTION("Study Driver");
MODULE_SUPPORTED_DEVICE("Siemens");
