// 006e8ac0 remove

/* <tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::remove */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::remove
          (undefined4 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  
  if (param_3[2] == 0xffffffffffffffff) {
    if (*param_3 == 0) {
      if ((longlong *)param_2[2] != param_3) {
        return in_RAX;
      }
      plVar8 = (longlong *)param_3[1];
      param_2[2] = (longlong)plVar8;
    }
    else {
      plVar8 = (longlong *)param_3[1];
      *(longlong **)(*param_3 + 8) = plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      return in_RAX;
    }
    if ((longlong *)param_2[3] == param_3) {
      param_2[3] = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      return in_RAX;
    }
    return in_RAX;
  }
  uVar5 = param_3[2] ^ param_2[1];
  uVar7 = 5;
  if (uVar5 >> 0x24 == 0) {
    uVar5 = uVar5 | 0x3f;
    lVar9 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar7 = (ulonglong)((uint)(byte)((byte)lVar9 ^ 1) * 0x2b >> 8);
  }
  lVar9 = *param_2 + uVar7 * 0x410;
  uVar4 = (uint)((ulonglong)param_3[2] >>
                ((char)*(undefined4 *)(*param_2 + 0x400 + uVar7 * 0x410) * '\x06' & 0x3fU)) & 0x3f;
  plVar8 = (longlong *)((ulonglong)(uVar4 << 4) + lVar9);
  if (*param_3 == 0) {
    if ((longlong *)*plVar8 != param_3) goto LAB_006e8bf4;
    plVar10 = (longlong *)param_3[1];
    *plVar8 = (longlong)plVar10;
    if (plVar10 == (longlong *)0x0) goto LAB_006e8b7c;
LAB_006e8b30:
    *plVar10 = *param_3;
    *param_3 = 0;
    param_3[1] = 0;
    lVar2 = *plVar8;
  }
  else {
    plVar10 = (longlong *)param_3[1];
    *(longlong **)(*param_3 + 8) = plVar10;
    if (plVar10 != (longlong *)0x0) goto LAB_006e8b30;
LAB_006e8b7c:
    if ((longlong *)plVar8[1] != param_3) goto LAB_006e8bf4;
    plVar8[1] = *param_3;
    *param_3 = 0;
    param_3[1] = 0;
    lVar2 = *plVar8;
  }
  if (lVar2 != 0) {
    return in_RAX;
  }
  if (plVar8[1] == 0) {
    puVar1 = (ulonglong *)(lVar9 + 0x408);
    *puVar1 = *puVar1 ^ 1L << (sbyte)uVar4;
    return in_RAX;
  }
  param_1 = (*(code *)PTR_panic_00799338)
                      (plVar8,&anon_3e483e6b3ccbdca1751358c89510dd96_9_llvm_15764310632135838254);
LAB_006e8bf4:
  (*(code *)PTR_panic_fmt_007991a8)
            (param_1,&anon_3e483e6b3ccbdca1751358c89510dd96_11_llvm_15764310632135838254);
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}


