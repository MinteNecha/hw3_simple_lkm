#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init_module(void){
	printk(KERN_INFO "Hello, the module has been loaded.\n");
	return 0;
}

static void __exit_module(void){
	printk(KERN_INFO "Goodbye, the module has been unloaded/removed from the kernel.\n");
}


module_init(__init_module);
module_exit(__exit_module);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("MINTE NECHA aka JEFF");
MODULE_DESCRIPTION("A simple LKM");
