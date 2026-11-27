// 0057b100 stderr_tail

/* <craggemini_core[66f3c71560d70857]::guard::GuardHandle>::stderr_tail */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::stderr_tail
          (longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  longlong extraout_RDX;
  bool bVar9;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = *(longlong *)(param_2 + 0xf0);
  LOCK();
  bVar9 = *(int *)(lVar2 + 0x10) == 0;
  if (bVar9) {
    *(int *)(lVar2 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
  }
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    *param_1 = -1;
    if (bVar6 != 0) goto LAB_0057b272;
    uVar3 = *(ulonglong *)puVar5;
  }
  else {
    (*(code *)PTR_from_utf8_lossy_00799b68)(*(undefined1 *)(lVar2 + 0x14));
    ::<str>::trim_matches::<<char>::is_whitespace>(local_40,local_38);
    if (extraout_RDX < 0) {
LAB_0057b193:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (extraout_RDX == 0) {
      lVar8 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar8 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar8 == 0) goto LAB_0057b193;
      (*(code *)PTR_memcpy_00799008)();
    }
    if (0 < local_48) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (extraout_RDX == 0) {
      lVar8 = -1;
    }
    else {
      param_1[1] = lVar8;
      param_1[2] = extraout_RDX;
      lVar8 = extraout_RDX;
    }
    *param_1 = lVar8;
    if (bVar6 != 0) goto LAB_0057b272;
    uVar3 = *(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  }
  if (((uVar3 & 0x7fffffffffffffff) != 0) &&
     (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
    *(undefined1 *)(lVar2 + 0x14) = 1;
  }
LAB_0057b272:
  LOCK();
  iVar1 = *(int *)(lVar2 + 0x10);
  *(int *)(lVar2 + 0x10) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return param_1;
}


