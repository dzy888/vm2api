// 0026a4c0 <craggemini_core[66f3c71560d70857]::server::SocketPath>

/* WARNING: Switch with 1 destination removed at 0x0026a4e4 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::SocketPath>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::SocketPath>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <craggemini_core[66f3c71560d70857]::server::SocketPath_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


