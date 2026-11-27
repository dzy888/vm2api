// 00632520 parse_proc_kib_field

/* craggemini_core[66f3c71560d70857]::admission::parse_proc_kib_field */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::admission::parse_proc_kib_field
          (longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong local_b8;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined2 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined2 local_38;
  
  local_b8 = 0;
  local_98 = 0;
  local_88 = 0xa0000000a;
  local_80 = 1;
  local_78 = 0;
  uVar11 = 0;
  uVar7 = param_4;
  local_a8 = param_1;
  local_a0 = param_2;
  local_90 = param_2;
  do {
    lVar6 = local_a8;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(&local_70,&local_a8);
    if ((int)local_70 != 1) {
      if (local_78._1_1_ == '\0') {
        local_78 = CONCAT11(1,(byte)local_78);
        local_68 = param_2 - local_b8;
        bVar5 = local_68 != 0 | (byte)local_78;
        uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar5);
        lVar1 = local_b8;
        lVar6 = local_a8;
        if (bVar5 == 1) goto joined_r0x00632608;
      }
      uVar11 = 0;
      break;
    }
    local_68 = local_60 - local_b8;
    lVar1 = local_60;
joined_r0x00632608:
    local_60 = local_b8 + lVar6;
    if ((local_68 != 0) && (lVar6 = local_68 + -1, *(char *)(local_60 + lVar6) == '\n')) {
      local_68 = local_68 + -2;
      if (lVar6 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = local_60;
        if (*(char *)(local_60 + local_68) != '\r') {
          lVar8 = 0;
        }
      }
      if (lVar8 == 0) {
        local_68 = lVar6;
      }
      else {
        local_60 = lVar8;
      }
    }
    lVar6 = local_68 + local_60;
    local_70 = 0;
    local_40 = 0;
    local_38 = 1;
    local_58 = local_68;
    local_50 = local_60;
    local_48 = lVar6;
    auVar13 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
              ::try_fold::
              <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                        ();
    bVar12 = auVar13._0_8_ != 0;
    uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),bVar12);
    if ((bVar12 && auVar13._8_8_ == param_4) &&
       (iVar2 = (*(code *)PTR_bcmp_00799020)(uVar7,param_4), iVar2 == 0)) {
      auVar13 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                ::try_fold::
                <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                          ();
      uVar4 = auVar13._8_8_;
      pbVar3 = auVar13._0_8_;
      if ((pbVar3 != (byte *)0x0) && (uVar4 != 0)) {
        if (uVar4 == 1) {
          bVar5 = *pbVar3;
          uVar7 = (ulonglong)bVar5;
          if ((bVar5 == 0x2b) || (bVar5 == 0x2d)) goto LAB_00632590;
        }
        else {
          bVar5 = *pbVar3;
        }
        uVar9 = (ulonglong)(bVar5 == 0x2b);
        if (uVar4 - uVar9 < 0x11) {
          if (uVar4 == uVar9) {
            uVar7 = 0;
            uVar11 = 1;
            break;
          }
          lVar6 = 0;
          uVar7 = 0;
          while (pbVar3[lVar6 + uVar9] - 0x30 < 10) {
            uVar7 = (ulonglong)(pbVar3[lVar6 + uVar9] - 0x30) + uVar7 * 10;
            lVar6 = lVar6 + 1;
            if (lVar6 == uVar4 + -uVar9) goto LAB_006327ab;
          }
        }
        else {
          lVar6 = uVar4 + -uVar9;
          lVar8 = 0;
          uVar7 = 0;
          while( true ) {
            if (lVar8 == lVar6) goto LAB_006327ab;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar7;
            uVar4 = SUB168(auVar13 * ZEXT816(10),0);
            uVar7 = -lVar6;
            if (SUB168(auVar13 * ZEXT816(10),8) != 0) break;
            uVar10 = pbVar3[lVar8 + uVar9] - 0x30;
            uVar7 = uVar4 + uVar10;
            if ((9 < uVar10) || (lVar8 = lVar8 + 1, CARRY8(uVar4,(ulonglong)uVar10))) break;
          }
        }
      }
    }
LAB_00632590:
    local_b8 = lVar1;
  } while (local_78._1_1_ == '\0');
LAB_00632793:
  auVar14._8_8_ = uVar7;
  auVar14._0_8_ = uVar11;
  return auVar14;
LAB_006327ab:
  if (uVar7 >> 0x36 == 0) {
    uVar7 = uVar7 << 10;
    uVar11 = 1;
  }
  else {
    uVar7 = 0xffffffffffffffff;
    uVar11 = 1;
  }
  goto LAB_00632793;
}


