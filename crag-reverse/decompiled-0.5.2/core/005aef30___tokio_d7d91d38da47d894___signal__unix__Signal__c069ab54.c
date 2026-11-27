// 005aef30 <tokio[d7d91d38da47d894]::signal::unix::Signal>

/* WARNING: Switch with 1 destination removed at 0x005aef5d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::signal::unix::Signal> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::signal::unix::Signal>
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)();
  }
  if (param_2[1] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,param_2[2]);
  return;
}


