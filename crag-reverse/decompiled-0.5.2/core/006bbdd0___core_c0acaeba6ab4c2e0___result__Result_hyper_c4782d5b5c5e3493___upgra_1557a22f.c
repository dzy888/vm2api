// 006bbdd0 <core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x006bbe69 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,
   hyper[c4782d5b5c5e3493]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    if (*(longlong *)param_1[1] != 0) {
      puVar1 = (undefined8 *)((longlong *)param_1[1])[1];
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar1[2]);
      }
    }
    uVar2 = 8;
  }
  else {
    if (param_1[2] != 0) {
      (**(code **)(param_1[2] + 0x20))(param_4,param_1[4]);
    }
    puVar1 = (undefined8 *)param_1[1];
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] == 0) {
      return;
    }
    uVar2 = puVar1[2];
  }
  (*(code *)PTR_free_0079adc8)(param_4,uVar2);
  return;
}


