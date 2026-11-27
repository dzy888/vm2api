// 00583400 drop_slow

/* WARNING: Switch with 1 destination removed at 0x00583462 */
/* <alloc[12e961f32105355]::sync::Arc<dyn
   hyper[c4782d5b5c5e3493]::ext::informational::OnInformationalCallback +
   core[c0acaeba6ab4c2e0]::marker::Send + core[c0acaeba6ab4c2e0]::marker::Sync>>::drop_slow
   <alloc[12e961f32105355]::sync::Arc<dyn hyper[c4782d5b5c5e3493]::rt::timer::Timer +
   core[c0acaeba6ab4c2e0]::marker::Send + core[c0acaeba6ab4c2e0]::marker::Sync>>::drop_slow */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<dyn_hyper[c4782d5b5c5e3493]::ext::informational::OnInformationalCallback+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>>
::drop_slow(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = puVar3[2];
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(uVar4 - 1 & 0xfffffffffffffff0);
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uVar5 = 8;
      if (8 < uVar4) {
        uVar5 = uVar4;
      }
      if ((-uVar5 & puVar3[1] + uVar5 + 0xf) != 0) {
        (*(code *)PTR_free_0079adc8)();
        return;
      }
    }
  }
  return;
}


