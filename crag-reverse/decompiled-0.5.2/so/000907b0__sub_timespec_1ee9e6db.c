// 000907b0 sub_timespec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::sub_timespec */

void __rustcall
<std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::sub_timespec
          (uint *param_1,ulonglong *param_2,ulonglong *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar9;
  longlong lVar8;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint local_18;
  
  uVar3 = *param_2;
  uVar4 = *param_3;
  uVar1 = (uint)param_2[1];
  uVar2 = (uint)param_3[1];
  bVar6 = (longlong)uVar4 <= (longlong)uVar3;
  if (uVar3 == uVar4) {
    bVar6 = uVar2 <= uVar1;
  }
  if (!bVar6) {
    sub_timespec(&local_28,param_3,param_2);
    param_1[4] = local_18;
    uStack_24 = uStack_24 ^ _UNK_00008f24;
    uStack_20 = uStack_20 ^ _UNK_00008f28;
    uStack_1c = uStack_1c ^ _UNK_00008f2c;
    *param_1 = local_28 ^ _DAT_00008f20;
    param_1[1] = uStack_24;
    param_1[2] = uStack_20;
    param_1[3] = uStack_1c;
    return;
  }
  uVar9 = ~uVar4;
  uVar7 = uVar1 + 1000000000;
  if (uVar2 <= uVar1) {
    uVar9 = -uVar4;
    uVar7 = uVar1;
  }
  lVar8 = uVar9 + uVar3;
  uVar7 = uVar7 - uVar2;
  if (999999999 < uVar7) {
    if (lVar8 == -1) {
      (*(code *)PTR_expect_failed_000c3d38)
                (0xffffffffffffffff,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c17f0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar8 = lVar8 + 1;
    uVar7 = uVar7 + 0xc4653600;
  }
  *(longlong *)(param_1 + 2) = lVar8;
  param_1[4] = uVar7;
  param_1[0] = 0;
  param_1[1] = 0;
  return;
}


