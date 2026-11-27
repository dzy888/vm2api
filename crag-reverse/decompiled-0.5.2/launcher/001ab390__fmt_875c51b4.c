// 001ab390 fmt

/* <u64 as itoa[685bbbf940b76c0a]::Unsigned>::fmt */

void __rustcall
<u64_as_itoa[685bbbf940b76c0a]::Unsigned>::fmt
          (undefined1 *param_1,undefined4 *param_2,undefined8 param_3,undefined1 *param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  
  puVar7 = PTR_DECIMAL_PAIRS_0021a140;
  lVar5 = 0x14;
  puVar8 = param_1;
  if ((undefined1 *)0x3e7 < param_1) {
    puVar8 = (undefined1 *)((ulonglong)param_1 / 10000);
    iVar6 = (int)param_1 + (int)puVar8 * -10000;
    uVar4 = (uint)(iVar6 * 0x147b) >> 0x13;
    param_2[4] = CONCAT22(*(undefined2 *)
                           (PTR_DECIMAL_PAIRS_0021a140 + (ulonglong)(uVar4 * -100 + iVar6) * 2),
                          *(undefined2 *)(PTR_DECIMAL_PAIRS_0021a140 + (ulonglong)uVar4 * 2));
    lVar5 = 0x10;
    param_4 = puVar7;
    if ((undefined1 *)0x98967f < param_1) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = puVar8;
      iVar6 = (int)puVar8 + (SUB164(auVar2 * ZEXT816(0xd1b71758e2197),8) >> 1) * -10000;
      uVar4 = (uint)(iVar6 * 0x147b) >> 0x13;
      puVar8 = (undefined1 *)((ulonglong)param_1 / 100000000);
      param_2[3] = CONCAT22(*(undefined2 *)(puVar7 + (ulonglong)(uVar4 * -100 + iVar6) * 2),
                            *(undefined2 *)(puVar7 + (ulonglong)uVar4 * 2));
      lVar5 = 0xc;
      if (0x2e90edc < (ulonglong)param_1 >> 0xb) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = puVar8;
        iVar6 = (int)puVar8 + SUB164(auVar3 * ZEXT816(0x68db8bac710cc),8) * -10000;
        uVar4 = (uint)(iVar6 * 0x147b) >> 0x13;
        puVar8 = (undefined1 *)((ulonglong)param_1 / 1000000000000);
        param_2[2] = CONCAT22(*(undefined2 *)(puVar7 + (ulonglong)(uVar4 * -100 + iVar6) * 2),
                              *(undefined2 *)(puVar7 + (ulonglong)uVar4 * 2));
        lVar5 = 8;
        if ((undefined1 *)0x38d7ea4c67fff < param_1) {
          iVar6 = (int)puVar8 + (int)((ulonglong)puVar8 / 10000) * -10000;
          uVar4 = (uint)(iVar6 * 0x147b) >> 0x13;
          puVar8 = (undefined1 *)((ulonglong)param_1 / 10000000000000000);
          param_2[1] = CONCAT22(*(undefined2 *)(puVar7 + (ulonglong)(uVar4 * -100 + iVar6) * 2),
                                *(undefined2 *)(puVar7 + (ulonglong)uVar4 * 2));
          lVar5 = 4;
          if ((undefined1 *)0x8ac7230489e7ffff < param_1) {
            *param_2 = CONCAT22(*(undefined2 *)(puVar7 + (ulonglong)((uint)puVar8 % 100) * 2),
                                *(undefined2 *)(puVar7 + (ulonglong)((uint)puVar8 / 100) * 2));
            lVar5 = 0;
            puVar8 = (undefined1 *)0x0;
            goto LAB_001ab59a;
          }
        }
      }
    }
  }
  puVar7 = param_4;
  if (&DAT_00000009 < puVar8) {
    uVar4 = (uint)((int)puVar8 * 0x147b) >> 0x13;
    puVar7 = (undefined *)(ulonglong)uVar4;
    *(undefined2 *)((longlong)param_2 + lVar5 + -2) =
         *(undefined2 *)(PTR_DECIMAL_PAIRS_0021a140 + (ulonglong)(uVar4 * -100 + (int)puVar8) * 2);
    lVar5 = lVar5 + -2;
    puVar8 = puVar7;
  }
LAB_001ab59a:
  if ((param_1 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) {
    return;
  }
  if (lVar5 - 1U < 0x14) {
    *(byte *)((longlong)param_2 + (lVar5 - 1U)) = (byte)puVar8 | 0x30;
    return;
  }
  (*(code *)PTR_panic_bounds_check_0021a020)
            (puVar7,&PTR_anon_ae02ed5756c5823c56e74cfad2f2ae4c_23_llvm_7421494092368790709_00216cc0)
  ;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


