// 0020d3a0 memrchr

/* core[c0acaeba6ab4c2e0]::slice::memchr::memrchr */

undefined1  [16] __rustcall
core[c0acaeba6ab4c2e0]::slice::memchr::memrchr(byte param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar8 = (param_2 + 7U & 0xfffffffffffffff8) - param_2;
  uVar3 = param_3;
  uVar5 = param_3;
  if (uVar8 <= param_3) {
    uVar5 = (ulonglong)((int)param_3 - (int)uVar8 & 0xf);
    uVar3 = param_3 - uVar5;
    if (param_3 < uVar5) goto LAB_0020d49a;
    uVar5 = uVar8;
  }
  uVar8 = param_3;
  do {
    if (uVar8 == uVar3) {
      uVar9 = 0x8080808080808080;
      goto LAB_0020d420;
    }
    uVar9 = uVar8 - 1;
    pbVar1 = (byte *)(param_2 + -1 + uVar8);
    uVar8 = uVar9;
  } while (*pbVar1 != param_1);
  goto LAB_0020d473;
  while (uVar6 = *(ulonglong *)(param_2 + -0x10 + uVar8) ^ (ulonglong)param_1 * 0x101010101010101,
        uVar7 = *(ulonglong *)(param_2 + -8 + uVar8) ^ (ulonglong)param_1 * 0x101010101010101,
        uVar3 = uVar8 - 0x10,
        ((0x101010101010100 - uVar6 | uVar6) & 0x8080808080808080 &
        (0x101010101010100 - uVar7 | uVar7)) == 0x8080808080808080) {
LAB_0020d420:
    uVar8 = uVar3;
    if (uVar8 <= uVar5) break;
  }
  if (param_3 < uVar8) {
    (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__rustc_48a229ceaefd4985c50990b14_002191e0);
LAB_0020d49a:
    (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__rustc_48a229ceaefd4985c50990b14_002191f8);
    pcVar2 = (code *)swi(3);
    auVar11._0_8_ = (*pcVar2)();
    auVar11._8_8_ = param_3;
    return auVar11;
  }
  uVar4 = 0;
  do {
    if (uVar8 == 0) goto LAB_0020d47a;
    uVar9 = uVar8 - 1;
    pbVar1 = (byte *)(param_2 + -1 + uVar8);
    uVar8 = uVar9;
  } while (*pbVar1 != param_1);
LAB_0020d473:
  uVar4 = 1;
LAB_0020d47a:
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = uVar4;
  return auVar10;
}


