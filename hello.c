#include <linux/proc_fs.h>
#include <linux/module.h>
#include <linux/kernel.h> 

static struct proc_dir_entry *ent;

static ssize_t mywrite(struct file *file, const char __user *ubuf,size_t count, loff_t *ppos) 
{
	printk( KERN_INFO "Hello world\n");
	return 0;
}

static ssize_t myread(struct file *file, char __user *ubuf,size_t count, loff_t *ppos) 
{
	printk( KERN_INFO "Goodbye\n");
	return 0;
}

static struct file_operations myops = 
{
	.read = myread,
	.write = mywrite,
};

int __init hello_start(void)
{
	ent=proc_create("mydrive",0,NULL,&myops);

	//printk(KERN_INFO "Hello World\n");
	return 0;
}

void __exit hello_end(void)
{
	proc_remove(ent);
	//printk(KERN_INFO "Goodbye \n");

}

module_init(hello_start); 
module_exit(hello_end); 

