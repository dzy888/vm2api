// 007244a0 fmt

/* <u32 as itoa[685bbbf940b76c0a]::Unsigned>::fmt */

void __rustcall <u32_as_itoa[685bbbf940b76c0a]::Unsigned>::fmt(uint param_1,longlong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  puVar2 = PTR_DECIMAL_PAIRS_0079ab40;
  lVar4 = 10;
  uVar5 = (ulonglong)param_1;
  if (999 < param_1) {
    uVar5 = (ulonglong)param_1 / 10000;
    iVar7 = param_1 + (int)uVar5 * -10000;
    uVar3 = (uint)(iVar7 * 0x147b) >> 0x13;
    *(uint *)(param_2 + 6) =
         CONCAT22(*(undefined2 *)
                   (PTR_DECIMAL_PAIRS_0079ab40 + (ulonglong)(uVar3 * -100 + iVar7) * 2),
                  *(undefined2 *)(PTR_DECIMAL_PAIRS_0079ab40 + (ulonglong)uVar3 * 2));
    lVar4 = 6;
    if (9999999 < param_1) {
      iVar7 = (int)uVar5 + (int)(uVar5 / 10000) * -10000;
      uVar3 = (uint)(iVar7 * 0x147b) >> 0x13;
      uVar5 = (ulonglong)param_1 / 100000000;
      *(uint *)(param_2 + 2) =
           CONCAT22(*(undefined2 *)(puVar2 + (ulonglong)(uVar3 * -100 + iVar7) * 2),
                    *(undefined2 *)(puVar2 + (ulonglong)uVar3 * 2));
      lVar4 = 2;
    }
  }
  uVar3 = (uint)uVar5;
  if (9 < uVar3) {
    uVar6 = uVar3 * 0x147b >> 0x13;
    *(undefined2 *)(param_2 + -2 + lVar4) =
         *(undefined2 *)(PTR_DECIMAL_PAIRS_0079ab40 + (ulonglong)(uVar6 * -100 + uVar3) * 2);
    lVar4 = lVar4 + -2;
    uVar5 = (ulonglong)uVar6;
  }
  if ((param_1 != 0) && ((int)uVar5 == 0)) {
    return;
  }
  if (lVar4 - 1U < 10) {
    *(byte *)(param_2 + (lVar4 - 1U)) = (byte)uVar5 | 0x30;
    return;
  }
  (*(code *)PTR_panic_bounds_check_00799520)
            (uVar5,&PTR_anon_ae02ed5756c5823c56e74cfad2f2ae4c_23_llvm_7421494092368790709_00795f10);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


