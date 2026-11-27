// 0070cec0 store

/* WARNING: Switch with 1 destination removed at 0x0070cf5d */
/* <signal_hook_registry[9dd8ecc3788bb260]::half_lock::WriteGuard<signal_hook_registry[9dd8ecc3788bb260]::SignalData>>::store
    */

void __rustcall
<signal_hook_registry[9dd8ecc3788bb260]::half_lock::WriteGuard<signal_hook_registry[9dd8ecc3788bb260]::SignalData>>
::store(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar12 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar12 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar16 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = *(undefined8 *)(param_2 + 4);
  uVar7 = *(undefined8 *)(param_2 + 6);
  uVar8 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar12 + 10) = uVar8;
  *(undefined8 *)(puVar12 + 4) = uVar6;
  *(undefined8 *)(puVar12 + 6) = uVar7;
  *puVar12 = uVar16;
  puVar12[1] = uVar3;
  puVar12[2] = uVar4;
  puVar12[3] = uVar5;
  param_1[1] = (longlong)puVar12;
  LOCK();
  lVar1 = *(longlong *)(*param_1 + 0x10);
  *(longlong *)(*param_1 + 0x10) = (longlong)puVar12;
  UNLOCK();
  param_1 = (longlong *)*param_1;
  LOCK();
  param_1[3] = param_1[3] + 1;
  puVar11 = PTR_yield_now_00799b28;
  UNLOCK();
  if (*param_1 != 0 || param_1[1] != 0) {
    uVar13 = 1;
    bVar9 = param_1[1] == 0;
    bVar10 = *param_1 == 0;
    do {
      if ((uVar13 & 0xf) == 0) {
        (*(code *)puVar11)();
      }
      bVar14 = true;
      if (!bVar10) {
        bVar14 = *param_1 == 0;
      }
      bVar15 = true;
      if (!bVar9) {
        bVar15 = param_1[1] == 0;
      }
      uVar13 = uVar13 + 1;
      bVar9 = bVar15;
      bVar10 = bVar14;
    } while (!(bool)(bVar14 & bVar15));
  }
  uVar16 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
           <alloc[12e961f32105355]::vec::Vec<(i32,signal_hook_registry[9dd8ecc3788bb260]::Slot)>>
                     (lVar1 + 0x10,0x10);
  (*(code *)PTR_free_0079adc8)(uVar16,0x10);
  return;
}


