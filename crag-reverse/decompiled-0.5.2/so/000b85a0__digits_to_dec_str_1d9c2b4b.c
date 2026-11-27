// 000b85a0 digits_to_dec_str

/* core[c0acaeba6ab4c2e0]::num::imp::flt2dec::digits_to_dec_str */

undefined1  [16] __rustcall
core[c0acaeba6ab4c2e0]::num::imp::flt2dec::digits_to_dec_str
          (byte *param_1,ulonglong param_2,ushort param_3,ulonglong param_4,undefined2 *param_5,
          ulonglong param_6)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 == 0) {
    (*(code *)PTR_panic_000c3b00)(param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c3090);
  }
  else if (0x30 < *param_1) {
    if (3 < param_6) {
      *param_5 = 2;
      if ((short)param_3 < 1) {
        uVar4 = -(longlong)(short)param_3;
        *(undefined **)(param_5 + 4) = &DAT_00017c0a;
        *(undefined8 *)(param_5 + 8) = 2;
        param_5[0xc] = 0;
        *(ulonglong *)(param_5 + 0x10) = uVar4;
        param_5[0x18] = 2;
        *(byte **)(param_5 + 0x1c) = param_1;
        *(ulonglong *)(param_5 + 0x20) = param_2;
        uVar2 = param_4 - param_2;
        if ((param_4 < param_2 || uVar2 == 0) || (uVar2 <= uVar4)) {
LAB_000b861c:
          auVar6._8_8_ = 3;
          auVar6._0_8_ = param_5;
          return auVar6;
        }
        param_4 = uVar2 + (longlong)(short)param_3;
      }
      else {
        uVar2 = (ulonglong)param_3;
        *(byte **)(param_5 + 4) = param_1;
        uVar4 = param_2 - uVar2;
        if (param_2 < uVar2 || uVar4 == 0) {
          *(ulonglong *)(param_5 + 8) = param_2;
          param_5[0xc] = 0;
          *(ulonglong *)(param_5 + 0x10) = uVar2 - param_2;
          if (param_4 == 0) {
            auVar8._8_8_ = 2;
            auVar8._0_8_ = param_5;
            return auVar8;
          }
          param_5[0x18] = 2;
          *(undefined **)(param_5 + 0x1c) = &DAT_000180c9;
          *(undefined8 *)(param_5 + 0x20) = 1;
        }
        else {
          *(ulonglong *)(param_5 + 8) = uVar2;
          param_5[0xc] = 2;
          *(undefined **)(param_5 + 0x10) = &DAT_000180c9;
          *(undefined8 *)(param_5 + 0x14) = 1;
          param_5[0x18] = 2;
          *(byte **)(param_5 + 0x1c) = param_1 + uVar2;
          *(ulonglong *)(param_5 + 0x20) = uVar4;
          bVar5 = param_4 < uVar4;
          param_4 = param_4 - uVar4;
          if (bVar5 || param_4 == 0) goto LAB_000b861c;
        }
      }
      param_5[0x24] = 0;
      *(ulonglong *)(param_5 + 0x28) = param_4;
      auVar7._8_8_ = 4;
      auVar7._0_8_ = param_5;
      return auVar7;
    }
    goto LAB_000b86ee;
  }
  (*(code *)PTR_panic_000c3b00)();
LAB_000b86ee:
  ppuVar3 = &PTR_s__rustc_48a229ceaefd4985c50990b14_000c30c0;
  (*(code *)PTR_panic_000c3b00)();
  pcVar1 = (code *)swi(3);
  auVar9._0_8_ = (*pcVar1)();
  auVar9._8_8_ = ppuVar3;
  return auVar9;
}


