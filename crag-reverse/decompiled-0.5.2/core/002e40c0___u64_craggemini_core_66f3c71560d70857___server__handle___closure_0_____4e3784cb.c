// 002e40c0 <u64,craggemini_core[66f3c71560d70857]::server::handle::{closure#0}::{closure#7}>

/* <core[c0acaeba6ab4c2e0]::option::Option<&str>>::and_then::<u64,
   craggemini_core[66f3c71560d70857]::server::handle::{closure#0}::{closure#7}> */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<&str>>::and_then::
<u64,craggemini_core[66f3c71560d70857]::server::handle::_closure_0_::_closure_7_>
          (char *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  char cVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (param_1 == (char *)0x0) {
LAB_002e4157:
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    return auVar2 << 0x40;
  }
  if (param_2 == 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_3;
    return auVar5 << 0x40;
  }
  if (param_2 == 1) {
    cVar10 = *param_1;
    uVar8 = 0;
    if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_002e419e;
  }
  else {
    cVar10 = *param_1;
  }
  uVar7 = (ulonglong)(cVar10 == '+');
  if (param_2 - uVar7 < 0x11) {
    uVar8 = 1;
    if (param_2 == uVar7) {
      return ZEXT816(1);
    }
    lVar11 = 0;
    param_3 = 0;
    do {
      if (9 < (byte)param_1[lVar11 + uVar7] - 0x30) goto LAB_002e4157;
      param_3 = (ulonglong)((byte)param_1[lVar11 + uVar7] - 0x30) + param_3 * 10;
      lVar11 = lVar11 + 1;
    } while (lVar11 != param_2 + -uVar7);
  }
  else {
    lVar11 = 0;
    param_3 = 0;
    do {
      if (lVar11 == param_2 + -uVar7) {
        auVar14._8_8_ = param_3;
        auVar14._0_8_ = 1;
        return auVar14;
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_3;
      uVar12 = SUB168(auVar1 * ZEXT816(10),8);
      uVar9 = SUB168(auVar1 * ZEXT816(10),0);
      if (uVar12 != 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar12;
        return auVar4 << 0x40;
      }
      uVar6 = (byte)param_1[lVar11 + uVar7] - 0x30;
      param_3 = uVar9 + uVar6;
      uVar8 = 0;
      if (9 < uVar6) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_3;
        return auVar3 << 0x40;
      }
      lVar11 = lVar11 + 1;
    } while (!CARRY8(uVar9,(ulonglong)uVar6));
  }
LAB_002e419e:
  auVar13._8_8_ = param_3;
  auVar13._0_8_ = uVar8;
  return auVar13;
}


