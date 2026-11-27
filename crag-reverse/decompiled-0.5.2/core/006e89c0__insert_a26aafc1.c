// 006e89c0 insert

/* <tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::insert */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::insert
          (longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 *in_RAX;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 **ppuVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 *local_8;
  
  puVar2 = (undefined8 *)param_2[3];
  if (puVar2 == (undefined8 *)0xffffffffffffffff) {
    local_8 = in_RAX;
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&anon_880d723ff0f66ce4ced63274bf095def_30_llvm_12887403613343987975);
LAB_006e8a9a:
    ppuVar9 = &local_8;
    (*(code *)
      PTR_<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>>_0079a840
    )(0,&local_8);
    pcVar4 = (code *)swi(3);
    auVar12._0_8_ = (*pcVar4)();
    auVar12._8_8_ = ppuVar9;
    return auVar12;
  }
  param_2[2] = puVar2;
  uVar6 = 1;
  if ((undefined8 *)param_1[1] < puVar2) {
    uVar8 = (ulonglong)param_1[1] ^ (ulonglong)puVar2;
    uVar7 = 5;
    if (uVar8 >> 0x24 == 0) {
      uVar8 = uVar8 | 0x3f;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar7 = (ulonglong)((uint)(byte)((byte)lVar10 ^ 1) * 0x2b >> 8);
    }
    lVar10 = *param_1 + uVar7 * 0x410;
    uVar5 = (uint)((ulonglong)param_2[2] >>
                  ((char)*(undefined4 *)(*param_1 + 0x400 + uVar7 * 0x410) * '\x06' & 0x3fU)) & 0x3f
    ;
    uVar7 = (ulonglong)(uVar5 << 4);
    puVar1 = (undefined8 *)(lVar10 + uVar7);
    puVar3 = *(undefined8 **)(uVar7 + lVar10);
    local_8 = param_2;
    if (puVar3 == param_2) goto LAB_006e8a9a;
    param_2[1] = puVar3;
    *param_2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_2;
    }
    *puVar1 = param_2;
    if (puVar1[1] == 0) {
      puVar1[1] = param_2;
    }
    *(ulonglong *)(lVar10 + 0x408) = *(ulonglong *)(lVar10 + 0x408) | 1L << (sbyte)uVar5;
    uVar6 = 0;
    param_2 = puVar2;
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = uVar6;
  return auVar11;
}


