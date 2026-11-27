// 006fb130 from_iter

/* <alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::signal::unix::SignalInfo> as
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<tokio[d7d91d38da47d894]::signal::unix::SignalInfo,
   core[c0acaeba6ab4c2e0]::iter::adapters::take::Take<core[c0acaeba6ab4c2e0]::iter::sources::repeat_with::RepeatWith<<tokio[d7d91d38da47d894]::signal::unix::SignalInfo
   as core[c0acaeba6ab4c2e0]::default::Default>::default>>>>::from_iter */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::signal::unix::SignalInfo>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<tokio[d7d91d38da47d894]::signal::unix::SignalInfo,core[c0acaeba6ab4c2e0]::iter::adapters::take::Take<core[c0acaeba6ab4c2e0]::iter::sources::repeat_with::RepeatWith<<tokio[d7d91d38da47d894]::signal::unix::SignalInfo_as_core[c0acaeba6ab4c2e0]::default::Default>::default>>>>
::from_iter(ulonglong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  bool bVar13;
  
  lVar8 = 0x7ffffffffffffff8;
  uVar10 = param_2 * 0x20;
  lVar9 = lVar8;
  if (uVar10 < 0x7ffffffffffffff9 && param_2 >> 0x3b == 0) goto LAB_006fb172;
  puVar5 = (ulonglong *)0x0;
  do {
    param_1 = puVar5;
    (*(code *)PTR_handle_error_00798ff0)();
    lVar9 = lVar8;
    param_2 = uVar10;
LAB_006fb172:
    if (uVar10 == 0) {
      puVar6 = (undefined8 *)&DAT_00000008;
      uVar10 = 0;
      goto LAB_006fb1b2;
    }
    lVar8 = lVar9;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    puVar5 = (ulonglong *)&DAT_00000008;
  } while (puVar6 == (undefined8 *)0x0);
  uVar10 = param_2;
LAB_006fb1b2:
  puVar4 = PTR___rust_alloc_00799000;
  puVar3 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
  if (param_2 != 0) {
    uVar11 = 0;
    puVar12 = puVar6;
    do {
      (*(code *)puVar3)();
      plVar7 = (longlong *)(*(code *)puVar4)();
      if (plVar7 == (longlong *)0x0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_006fb387:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *plVar7 = 1;
      plVar7[1] = 1;
      plVar7[0x24] = 0;
      plVar7[0x25] = 0;
      plVar7[0x26] = 0;
      (*(code *)PTR_memset_00799090)(0,0x10d);
      plVar7[0x27] = 1;
      plVar7[0x28] = 1;
      plVar7[0x29] = 0;
      *(undefined1 *)(plVar7 + 0x2a) = 0;
      LOCK();
      lVar8 = *plVar7;
      *plVar7 = *plVar7 + 1;
      UNLOCK();
      if (*plVar7 == 0 || SCARRY8(lVar8,1) != *plVar7 < 0) goto LAB_006fb387;
      plVar1 = plVar7 + 0x27;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        LOCK();
        bVar13 = (int)plVar7[0x23] == 0;
        if (bVar13) {
          *(int *)(plVar7 + 0x23) = 1;
        }
        UNLOCK();
        if (!bVar13) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((lVar9 + 7U & *(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8) != 0) {
          (*(code *)PTR_is_zero_slow_path_00798fe8)();
        }
        (*(code *)PTR_notify_waiters_0079a750)();
      }
      LOCK();
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        (*(code *)PTR_drop_slow_0079a760)();
      }
      *puVar12 = plVar7;
      *(undefined1 *)(puVar12 + 1) = 0;
      *(undefined4 *)(puVar12 + 3) = 3;
      uVar11 = uVar11 + 1;
      puVar12 = puVar12 + 4;
    } while (param_2 != uVar11);
  }
  param_1[2] = param_2;
  *param_1 = uVar10;
  param_1[1] = (ulonglong)puVar6;
  return;
}


