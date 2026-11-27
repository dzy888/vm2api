// 00705d30 drain_and_seal

/* <tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::drain_and_seal */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::drain_and_seal
          (longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong *puVar4;
  code *pcVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  undefined8 *puVar9;
  sbyte sVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  lVar15 = 0;
  do {
    uVar11 = (int)lVar15 + param_3 & 0xf;
    uVar13 = (ulonglong)(uVar11 * 0x30);
    piVar1 = (int *)(param_1 + uVar13);
    piVar2 = (int *)(param_1 + uVar13);
    LOCK();
    bVar16 = *piVar2 == 0;
    if (bVar16) {
      *piVar2 = 1;
    }
    UNLOCK();
    if (bVar16) {
      if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0) goto LAB_00705f5b;
LAB_00705da9:
      bVar7 = 0;
    }
    else {
      (*(code *)PTR_lock_contended_00798fe0)();
      if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) == 0) goto LAB_00705da9;
LAB_00705f5b:
      bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar7 = bVar7 ^ 1;
    }
    sVar10 = (sbyte)uVar11;
    *(undefined1 *)(piVar1 + 10) = 1;
    LOCK();
    *(ulonglong *)(param_1 + 0x370) =
         *(ulonglong *)(param_1 + 0x370) & (-2L << sVar10 | 0xfffffffffffffffeU >> 0x40 - sVar10);
    UNLOCK();
    local_58 = *(undefined8 *)(piVar1 + 2);
    uStack_50 = *(undefined8 *)(piVar1 + 4);
    local_48 = piVar1[6];
    iStack_44 = piVar1[7];
    iStack_40 = piVar1[8];
    iStack_3c = piVar1[9];
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 8;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
      *(undefined1 *)(piVar1 + 1) = 1;
    }
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    local_68 = CONCAT44(iStack_44,local_48);
    lStack_60 = CONCAT44(iStack_3c,iStack_40);
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    while (lStack_60 != 0) {
      uVar13 = 0;
      if (CONCAT44(uStack_74,local_78) <= local_68 + 1U) {
        uVar13 = CONCAT44(uStack_74,local_78);
      }
      lVar14 = (local_68 - uVar13) + 1;
      lStack_60 = lStack_60 + -1;
      lVar12 = local_68 * 0x10;
      puVar4 = *(ulonglong **)(CONCAT44(uStack_6c,uStack_70) + lVar12);
      cVar8 = *(char *)(CONCAT44(uStack_6c,uStack_70) + 8 + lVar12);
      LOCK();
      *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -1;
      UNLOCK();
      local_68 = lVar14;
      if (cVar8 == '\x01') {
        LOCK();
        uVar13 = *puVar4;
        *puVar4 = *puVar4 - 0x40;
        UNLOCK();
        if (uVar13 < 0x40) {
          (*(code *)PTR_panic_00799338)
                    (lVar12,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
          goto LAB_0070609b;
        }
        puVar9 = (undefined8 *)(puVar4[2] + 0x30);
LAB_00705e48:
        (*(code *)*puVar9)();
      }
      else {
        uVar17 = (**(code **)puVar4[2])();
        LOCK();
        uVar13 = *puVar4;
        *puVar4 = *puVar4 - 0x40;
        UNLOCK();
        if (uVar13 >> 6 == 1) {
          puVar9 = (undefined8 *)(puVar4[2] + 0x10);
          goto LAB_00705e48;
        }
        if (uVar13 >> 6 == 0) {
          (*(code *)PTR_panic_00799338)
                    (uVar17,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
LAB_0070609b:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
      }
    }
    uVar17 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(&local_78);
    if (CONCAT44(uStack_74,local_78) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,8);
    }
    lVar15 = lVar15 + 1;
    if (lVar15 == 0x10) {
      return;
    }
  } while( true );
}


