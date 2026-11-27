// 0025b490 <<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<bytes[e9829e187354639b]::bytes::Bytes>>::send::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<bytes[e9829e187354639b]::bytes::Bytes>>::send::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<bytes[e9829e187354639b]::bytes::Bytes>>::send::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)((longlong)param_1 + 0xd1) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0025b4f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[4] + 0x20))(param_4,param_1[6]);
    return;
  }
  if (*(char *)((longlong)param_1 + 0xd1) == '\x03') {
    if ((char)param_1[0x18] == '\x03') {
      <<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<bytes[e9829e187354639b]::bytes::Bytes>>::reserve_inner::_closure_0_>
                (param_1 + 10);
    }
    (**(code **)(*param_1 + 0x20))(param_4,param_1[2]);
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  return;
}


