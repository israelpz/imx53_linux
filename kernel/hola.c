/*
File name: hola.c
Author: Victor Escobedo
Description: "Hola mundo" homework
*/

#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");

static void vDeinitialization(void)
{
	/*Send to screen*/
	printk(KERN_ALERT "Salida\n");
}

static void vInitialization(void)
{
	/*Send to screen*/
	printk(KERN_ALERT "Hola mundo de Victor\n");
	return 0;
}

module_init(vInitialization);
module_exit(vDeinitialization);
