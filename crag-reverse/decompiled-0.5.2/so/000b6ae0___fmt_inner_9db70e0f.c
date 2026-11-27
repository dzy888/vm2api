// 000b6ae0 _fmt_inner

/* <u64>::_fmt_inner */

ulonglong __rustcall <u64>::_fmt_inner(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  bool bVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar3 = param_1;
  if (999 < param_1) {
    lVar8 = param_2 + -1;
    lVar7 = 0;
    uVar4 = param_1;
    do {
      if (param_3 <= (param_3 + lVar7) - 4) goto LAB_000b6c5a;
      uVar3 = uVar4 / 10000;
      iVar5 = (int)uVar4 + (int)uVar3 * -10000;
      uVar9 = (uint)(iVar5 * 0x147b) >> 0x13;
      *(undefined *)(lVar8 + -3 + param_3) = (&DAT_00018001)[(ulonglong)uVar9 * 2];
      if ((param_3 <= (param_3 + lVar7) - 3) ||
         (*(undefined *)(lVar8 + -2 + param_3) = (&DAT_00018002)[(ulonglong)uVar9 * 2],
         param_3 <= (param_3 + lVar7) - 2)) {
LAB_000b6c47:
        (*(code *)PTR_panic_bounds_check_000c3dd8)
                  (param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2f58);
LAB_000b6c5a:
        (*(code *)PTR_panic_bounds_check_000c3dd8)();
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return uVar3;
      }
      uVar6 = (ulonglong)(iVar5 + uVar9 * -100 & 0xffff);
      *(undefined *)(lVar8 + -1 + param_3) = (&DAT_00018001)[uVar6 * 2];
      if (param_3 <= (param_3 + lVar7) - 1) goto LAB_000b6c47;
      *(undefined *)(lVar8 + param_3) = (&DAT_00018002)[uVar6 * 2];
      lVar7 = lVar7 + -4;
      lVar8 = lVar8 + -4;
      bVar1 = 9999999 < uVar4;
      uVar4 = uVar3;
    } while (bVar1);
    param_3 = param_3 + lVar7;
  }
  if (9 < uVar3) {
    iVar5 = (int)uVar3;
    uVar9 = ((uint)(uVar3 >> 2) & 0xffff) * 0x147b >> 0x11;
    uVar3 = (ulonglong)uVar9;
    *(undefined2 *)(param_2 + -2 + param_3) =
         *(undefined2 *)(&DAT_00018001 + (ulonglong)(iVar5 + uVar9 * -100 & 0xffff) * 2);
    param_3 = param_3 - 2;
  }
  if ((param_1 == 0) || (uVar3 != 0)) {
    *(undefined *)(param_2 + -1 + param_3) = (&DAT_00018002)[(ulonglong)((uint)uVar3 & 0xf) * 2];
    param_3 = param_3 - 1;
  }
  return param_3;
}


