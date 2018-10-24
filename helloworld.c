#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Akshat Sinha");
MODULE_DESCRIPTION("A simple Hello world LKM!");


int __init hello_start(void)
{
        
        printk(KERN_INFO "Hello World\n");
        
}

void __exit hello_end(void)
{
        printk(KERN_INFO "Goodbye \n");

}

module_init(hello_start);
module_exit(hello_end);

