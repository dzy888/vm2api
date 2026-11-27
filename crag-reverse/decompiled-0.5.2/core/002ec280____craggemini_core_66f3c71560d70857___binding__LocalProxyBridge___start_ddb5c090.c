// 002ec280 <<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::_closure_0_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0x128) == '\0') {
    <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>();
    return;
  }
  if (*(char *)(param_1 + 0x128) == '\x03') {
    if ((((*(char *)(param_1 + 0x126) == '\x03') && (*(short *)(param_1 + 0x100) == -1)) &&
        (1 < ((uint)*(ulonglong *)(param_1 + 0x108) & 3) - 2)) &&
       ((*(ulonglong *)(param_1 + 0x108) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0x129) = 0;
  }
  return;
}


