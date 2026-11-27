// 00495830 <alloc[12e961f32105355]::vec::Vec<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)>>

/* WARNING: Switch with 1 destination removed at 0x004958b9 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<(std[6c98fd8553dbae28]::path::PathBuf,
   alloc[12e961f32105355]::string::String, std[6c98fd8553dbae28]::time::SystemTime, u64)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar2 = param_1[1] + 0x20;
    do {
      if (*(longlong *)(lVar2 + -0x20) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      if (*(longlong *)(lVar2 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x48;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


