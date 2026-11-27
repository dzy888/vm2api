// 004c92f0 configure_memory_policy

/* WARNING: Switch with 1 destination removed at 0x004c942e */
/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::configure_memory_policy */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::configure_memory_policy
          (longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined *puVar16;
  byte bVar17;
  char cVar18;
  undefined1 *puVar19;
  bool bVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da_00;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar19 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar19 == (undefined1 *)0x0) {
    uVar21 = (*(code *)PTR_handle_error_00798ff0)();
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  *puVar19 = 0x2f;
  LOCK();
  bVar20 = *(int *)(param_1 + 0x270) == 0;
  if (bVar20) {
    *(int *)(param_1 + 0x270) = 1;
  }
  UNLOCK();
  uVar21 = extraout_XMM0_Da;
  if (!bVar20) {
    uVar21 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar16 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar17 = 0;
  }
  else {
    bVar17 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar17 = bVar17 ^ 1;
    uVar21 = extraout_XMM0_Da_00;
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
  }
  uVar21 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = param_2[0xd];
  uVar14 = param_2[0xe];
  uVar15 = param_2[0xf];
  *(undefined4 *)(param_1 + 0x2a8) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x2ac) = uVar13;
  *(undefined4 *)(param_1 + 0x2b0) = uVar14;
  *(undefined4 *)(param_1 + 0x2b4) = uVar15;
  *(undefined4 *)(param_1 + 0x298) = uVar9;
  *(undefined4 *)(param_1 + 0x29c) = uVar10;
  *(undefined4 *)(param_1 + 0x2a0) = uVar11;
  *(undefined4 *)(param_1 + 0x2a4) = uVar12;
  *(undefined4 *)(param_1 + 0x288) = uVar5;
  *(undefined4 *)(param_1 + 0x28c) = uVar6;
  *(undefined4 *)(param_1 + 0x290) = uVar7;
  *(undefined4 *)(param_1 + 0x294) = uVar8;
  *(undefined4 *)(param_1 + 0x278) = uVar21;
  *(undefined4 *)(param_1 + 0x27c) = uVar2;
  *(undefined4 *)(param_1 + 0x280) = uVar3;
  *(undefined4 *)(param_1 + 0x284) = uVar4;
  *(undefined8 *)(param_1 + 0x2b8) = 1;
  *(undefined1 **)(param_1 + 0x2c0) = puVar19;
  *(undefined8 *)(param_1 + 0x2c8) = 1;
  if (((bVar17 == 0) && ((*(ulonglong *)puVar16 & 0x7fffffffffffffff) != 0)) &&
     (cVar18 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar18 == '\0')) {
    *(undefined1 *)(param_1 + 0x274) = 1;
  }
  LOCK();
  iVar1 = *(int *)(param_1 + 0x270);
  *(int *)(param_1 + 0x270) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


