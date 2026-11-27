// 006b30f0 content_length_parse

/* hyper[c4782d5b5c5e3493]::headers::content_length_parse */

undefined1  [16] __rustcall
hyper[c4782d5b5c5e3493]::headers::content_length_parse(longlong param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar5 = 0;
    uVar3 = 0;
    do {
      param_2 = uVar3;
      if (*(longlong *)(param_1 + 0x10) == lVar5) {
        auVar7._8_8_ = param_2;
        auVar7._0_8_ = 1;
        return auVar7;
      }
      bVar6 = *(char *)(*(longlong *)(param_1 + 8) + lVar5) - 0x30;
      if ((9 < bVar6) ||
         (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, uVar4 = SUB168(auVar1 * ZEXT816(10),0),
         SUB168(auVar1 * ZEXT816(10),8) != 0)) break;
      lVar5 = lVar5 + 1;
      uVar3 = uVar4 + bVar6;
    } while (!CARRY8(uVar4,(ulonglong)bVar6));
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}


