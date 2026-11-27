// 00177290 <zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::vec::Vec<u8>>>

/* WARNING: Switch with 1 destination removed at 0x00177339 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::vec::Vec<u8>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::vec::Vec<u8>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  puVar4 = (undefined1 *)param_1[1];
  uVar3 = param_1[2];
  puVar1 = puVar4 + uVar3;
  (*(code *)PTR_memset_00219d00)(param_4,lVar2 - uVar3);
  if (uVar3 != 0) {
    uVar5 = uVar3 & 7;
    if (uVar5 != 0) {
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (7 < uVar3) {
      do {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4 = puVar4 + 8;
      } while (puVar4 != puVar1);
    }
  }
  param_1[2] = 0;
  if (lVar2 == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)();
  return;
}


