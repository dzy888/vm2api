// 006e55a0 begin_shutdown

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <tokio[d7d91d38da47d894]::runtime::blocking::pool::ThreadManagementState>::begin_shutdown */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::pool::ThreadManagementState>::begin_shutdown
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *in_FS_OFFSET;
  
  if (*(char *)(param_2 + 0xb) == '\0') {
    *(undefined1 *)(param_2 + 0xb) = 1;
    plVar1 = (longlong *)param_2[6];
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_0079a798)();
      }
    }
    param_2[6] = 0;
    uVar2 = param_2[9];
    uVar10 = param_2[7];
    uVar11 = param_2[8];
    param_2[7] = 0;
    lVar3 = *in_FS_OFFSET;
    plVar1 = (longlong *)(lVar3 + -0x38);
    if (*(char *)(lVar3 + -0x28) == '\x01') {
      lVar13 = *plVar1;
      param_3 = *(undefined8 *)(lVar3 + -0x30);
    }
    else {
      lVar13 = (*(code *)PTR_hashmap_random_keys_00799248)();
      *plVar1 = lVar13;
      *(undefined8 *)(lVar3 + -0x30) = param_3;
      *(undefined1 *)(lVar3 + -0x28) = 1;
    }
    *plVar1 = lVar13 + 1;
    uVar12 = _UNK_00793d38;
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    uVar8 = param_2[4];
    uVar9 = param_2[5];
    *param_2 = anon_48246b2c7bc3818a1cbc30620defa29e_20_llvm_17816610714767121267;
    param_2[1] = uVar12;
    uVar12 = _UNK_00793d48;
    param_2[2] = _DAT_00793d40;
    param_2[3] = uVar12;
    param_2[4] = lVar13;
    param_2[5] = param_3;
    param_1[8] = uVar9;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
    *param_1 = uVar10;
    param_1[1] = uVar11;
    param_1[2] = uVar2;
    param_1[3] = uVar4;
  }
  else {
    param_1[3] = 0;
  }
  return param_1;
}


