// 00554d80 <core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(),hyper[c4782d5b5c5e3493]::error::Error>>>

/* WARNING: Switch with 1 destination removed at 0x00554df1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(),
   hyper[c4782d5b5c5e3493]::error::Error>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(),hyper[c4782d5b5c5e3493]::error::Error>>>
          (longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  if (param_2 == (longlong *)0x0 || param_1 != 0) {
    return;
  }
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)param_2[1];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


