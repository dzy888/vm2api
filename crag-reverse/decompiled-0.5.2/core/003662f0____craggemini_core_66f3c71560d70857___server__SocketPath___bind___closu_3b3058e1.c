// 003662f0 <<craggemini_core[66f3c71560d70857]::server::SocketPath>::bind::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x003663a4 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::server::SocketPath>::bind::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::server::SocketPath>::bind::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if ((char)param_1[0x5d] == '\0') {
    if (*param_1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else if ((char)param_1[0x5d] == '\x03') {
    if (*(char *)((longlong)param_1 + 0x2e5) == '\x03') {
      if (*(char *)((longlong)param_1 + 0x261) == '\x03') {
        <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(param_1 + 0x46);
        if ((int)param_1[0x49] != -1) {
          (*(code *)PTR_close_00799030)();
        }
        <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x46);
        *(undefined1 *)(param_1 + 0x4c) = 0;
      }
      *(undefined1 *)((longlong)param_1 + 0x2e4) = 0;
    }
    if (param_1[0x37] != 2) {
      if (param_1[0x37] == 0) {
        plVar1 = (longlong *)param_1[0x38];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = (longlong *)param_1[0x38];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x39);
    }
    <craggemini_core[66f3c71560d70857]::server::SocketPath_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x32);
    if (param_1[0x32] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)((longlong)param_1 + 0x2ea) = 0;
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)((longlong)param_1 + 0x2e9) = 0;
  }
  return;
}


