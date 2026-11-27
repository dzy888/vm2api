// 00597e80 <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00597eee */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  if ((char)param_1[0x27] == '\0') {
    if (*param_1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else if ((char)param_1[0x27] == '\x03') {
    if (*(char *)((longlong)param_1 + 0x131) == '\x03') {
      if (((char)param_1[0x24] == '\x03') && (*(char *)((longlong)param_1 + 0xd1) == '\x04')) {
        (*(code *)PTR_drop_00799100)();
        if (param_1[0x1d] != 0) {
          (**(code **)(param_1[0x1d] + 0x18))();
        }
        cVar1 = (*(code *)PTR_is_closed_00799108)();
        if ((cVar1 != '\0') && (cVar1 = (*(code *)PTR_is_idle_00799110)(), cVar1 != '\0')) {
          (*(code *)PTR_wake_00799118)();
        }
        *(undefined1 *)(param_1 + 0x1a) = 0;
      }
      (**(code **)(param_1[0xc] + 0x20))(param_4,param_1[0xe]);
      *(undefined1 *)(param_1 + 0x26) = 0;
    }
    else if (*(char *)((longlong)param_1 + 0x131) == '\0') {
      (**(code **)(param_1[0x10] + 0x20))(param_4,param_1[0x12]);
    }
    *(undefined1 *)((longlong)param_1 + 0x139) = 0;
  }
  return;
}


