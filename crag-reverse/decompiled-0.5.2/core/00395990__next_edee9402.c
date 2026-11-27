// 00395990 next

/* <alloc[12e961f32105355]::collections::btree::map::Iter<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::collections::btree::map::Iter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(int *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,ulonglong param_5)

{
  ushort *puVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    return auVar3 << 0x40;
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  if (*param_1 != 1) {
    (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar4 = *(ulonglong *)(param_1 + 2);
  if (uVar4 == 0) {
    uVar4 = *(ulonglong *)(param_1 + 4);
    uVar7 = *(ulonglong *)(param_1 + 6);
    if (uVar7 != 0) {
      uVar6 = uVar7;
      if ((uVar7 & 7) != 0) {
        param_5 = 0;
        do {
          uVar4 = *(ulonglong *)(uVar4 + 0x278);
          param_5 = param_5 + 1;
        } while ((uVar7 & 7) != param_5);
        uVar6 = uVar7 - param_5;
      }
      if (7 < uVar7) {
        do {
          uVar4 = *(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(uVar4 + 0x278) + 0x278) + 0x278) + 0x278)
                         + 0x278) + 0x278) + 0x278) + 0x278);
          uVar6 = uVar6 - 8;
        } while (uVar6 != 0);
      }
    }
    param_1[0] = 1;
    param_1[1] = 0;
    *(ulonglong *)(param_1 + 2) = uVar4;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  uVar7 = *(ulonglong *)(param_1 + 4);
  uVar6 = *(ulonglong *)(param_1 + 6);
  uVar9 = uVar4;
  if (*(ushort *)(uVar4 + 0x272) <= uVar6) {
    do {
      uVar4 = *(ulonglong *)(uVar9 + 0x160);
      if (uVar4 == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar7 = uVar7 + 1;
      puVar1 = (ushort *)(uVar9 + 0x270);
      uVar6 = (ulonglong)*puVar1;
      uVar9 = uVar4;
    } while (*(ushort *)(uVar4 + 0x272) <= *puVar1);
  }
  if (uVar7 == 0) {
    lVar8 = uVar6 + 1;
    param_5 = uVar4;
  }
  else {
    puVar5 = (ulonglong *)(uVar4 + uVar6 * 8 + 0x280);
    uVar9 = uVar7;
    if ((uVar7 & 7) != 0) {
      uVar9 = 0;
      do {
        param_5 = *puVar5;
        puVar5 = (ulonglong *)(param_5 + 0x278);
        uVar9 = uVar9 + 1;
      } while ((uVar7 & 7) != uVar9);
      uVar9 = uVar7 - uVar9;
    }
    if (uVar7 < 8) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      do {
        param_5 = *(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(*puVar5 + 0x278) + 0x278) + 0x278) + 0x278)
                       + 0x278) + 0x278) + 0x278);
        puVar5 = (ulonglong *)(param_5 + 0x278);
        uVar9 = uVar9 - 8;
      } while (uVar9 != 0);
    }
  }
  auVar10._0_8_ = uVar4 + uVar6 * 0x18 + 0x168;
  auVar10._8_8_ = uVar6 * 0x20 + uVar4;
  *(ulonglong *)(param_1 + 2) = param_5;
  param_1[4] = 0;
  param_1[5] = 0;
  *(longlong *)(param_1 + 6) = lVar8;
  return auVar10;
}


