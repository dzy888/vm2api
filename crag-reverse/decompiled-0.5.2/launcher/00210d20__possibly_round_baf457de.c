// 00210d20 possibly_round

/* core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy::grisu::format_exact_opt::possibly_round */

void __rustcall
core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy::grisu::format_exact_opt::possibly_round
          (undefined8 *param_1,undefined1 *param_2,ulonglong param_3,ulonglong param_4,short param_5
          ,short param_6,ulonglong param_7,ulonglong param_8,ulonglong param_9)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((param_9 < param_8) && (param_9 < param_8 - param_9)) {
    if ((param_7 < param_8 - param_7) && (param_9 * 2 <= param_8 + param_7 * -2)) {
      if (param_3 < param_4) {
        (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00219618);
LAB_00210e97:
        (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00219600);
LAB_00210eac:
        (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__rustc_48a229ceaefd4985c50990b14_002195e8);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *param_1 = param_2;
    }
    else {
      uVar6 = param_7 - param_9;
      if ((param_7 < param_9 || uVar6 == 0) || (uVar6 < param_8 - uVar6)) goto LAB_00210d71;
      if (param_3 < param_4) goto LAB_00210e97;
      lVar5 = -1;
      uVar6 = param_4;
      do {
        if (uVar6 == 0) {
          if (param_4 == 0) {
            uVar4 = 0x31;
          }
          else {
            *param_2 = 0x31;
            (*(code *)PTR_memset_00219d00)(param_4,param_4 - 1);
            uVar4 = 0x30;
          }
          param_5 = param_5 + 1;
          if (param_4 < param_3 && param_6 < param_5) {
            param_2[param_4] = uVar4;
            param_4 = param_4 + 1;
          }
          goto LAB_00210e6c;
        }
        uVar1 = uVar6 - 1;
        lVar5 = lVar5 + 1;
        lVar3 = uVar6 - 1;
        uVar6 = uVar1;
      } while (param_2[lVar3] == '9');
      param_2[uVar1] = param_2[uVar1] + '\x01';
      (*(code *)PTR_memset_00219d00)(param_4,lVar5);
LAB_00210e6c:
      if (param_3 < param_4) goto LAB_00210eac;
      *param_1 = param_2;
    }
    param_1[1] = param_4;
    *(short *)(param_1 + 2) = param_5;
  }
  else {
LAB_00210d71:
    *param_1 = 0;
  }
  return;
}


