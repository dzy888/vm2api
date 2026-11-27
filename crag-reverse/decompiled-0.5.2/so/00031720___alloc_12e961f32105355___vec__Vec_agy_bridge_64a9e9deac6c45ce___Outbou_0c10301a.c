// 00031720 <alloc[12e961f32105355]::vec::Vec<agy_bridge[64a9e9deac6c45ce]::Outbound>>

/* WARNING: Switch with 1 destination removed at 0x0003177d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<agy_bridge[64a9e9deac6c45ce]::Outbound>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<agy_bridge[64a9e9deac6c45ce]::Outbound>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = param_1[2] + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    <agy_bridge[64a9e9deac6c45ce]::Outbound>(lVar1);
    lVar1 = lVar1 + 0x50;
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,8);
  return;
}


