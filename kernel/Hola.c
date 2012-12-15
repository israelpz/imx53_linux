/*
 * kernel/Hola.c
 *
 * Runtime locking correctness validator
 *
 * Started by Riardo Garcia for UAG Master Degree
 */


#include <linux/module.h> /*RiGa*/
#include <linux/init.h> /*RiGa*/

MODULE_LICENSE("Dual BSD/GPL");

static void hola_exit(void)
{
  /*Imprimir en pantalla*/
  printk(KERN_ALERT "Salida\n");
}

static int hola_init(void)
{
  /*Imprimir en pantalla*/
  printk(KERN_ALERT "Mi primer prueba\n");
  return 0;
}

module_init(hola_init);
module_exit(hola_exit);
