// 00524fc0 update_subagents

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::update_subagents */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::update_subagents
          (undefined4 param_1,longlong param_2,undefined8 param_3,longlong param_4,
          ulonglong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da_03;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong *local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_58;
  ulonglong *local_50;
  longlong local_48;
  undefined1 local_3c [12];
  
  if (0x20 < param_5[2]) {
    local_70 = param_5[2] - 0x20;
    param_5[2] = 0;
    local_88 = param_5[1];
    uStack_80 = local_70 * 200 + local_88;
    local_68 = 0x20;
    local_78 = param_5;
    param_1 = <alloc[12e961f32105355]::vec::drain::Drain<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(&local_88);
  }
  bVar3 = true;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar9 = *(longlong *)(param_2 + 0x38);
    local_48 = *(longlong *)(param_2 + 0x40) * 0x280 + lVar9;
    local_58 = param_2;
    local_50 = param_5;
    do {
      if (((*(longlong *)(lVar9 + 0x10) == param_4) &&
          (iVar4 = (*(code *)PTR_bcmp_00799020)(lVar9,param_4), param_1 = extraout_XMM0_Da,
          iVar4 == 0)) ||
         ((*(longlong *)(lVar9 + 0x128) != -1 &&
          ((*(longlong *)(lVar9 + 0x138) == param_4 &&
           (iVar4 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), param_1 = extraout_XMM0_Da_00,
           iVar4 == 0)))))) {
LAB_005251ea:
        param_5 = local_50;
        local_78 = (ulonglong *)local_50[2];
        uVar16 = (undefined4)*local_50;
        local_88 = *local_50;
        uStack_80 = local_50[1];
        lVar10 = *(longlong *)(lVar9 + 0x100);
        for (lVar15 = *(longlong *)(lVar9 + 0x108) + 1; lVar15 != 1; lVar15 = lVar15 + -1) {
          uVar16 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(lVar10);
          lVar10 = lVar10 + 200;
        }
        if (*(longlong *)(lVar9 + 0xf8) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,8);
        }
        *(ulonglong **)(lVar9 + 0x108) = local_78;
        *(uint *)(lVar9 + 0xf8) = (uint)local_88;
        *(undefined4 *)(lVar9 + 0xfc) = local_88._4_4_;
        *(undefined4 *)(lVar9 + 0x100) = (undefined4)uStack_80;
        *(undefined4 *)(lVar9 + 0x104) = uStack_80._4_4_;
        (*(code *)PTR_now_00799478)();
        uVar16 = <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>
                 ::to_rfc3339(&local_88,local_3c);
        if (*(longlong *)(lVar9 + 0x60) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
        }
        *(ulonglong **)(lVar9 + 0x70) = local_78;
        *(uint *)(lVar9 + 0x60) = (uint)local_88;
        *(undefined4 *)(lVar9 + 100) = local_88._4_4_;
        *(undefined4 *)(lVar9 + 0x68) = (undefined4)uStack_80;
        *(undefined4 *)(lVar9 + 0x6c) = uStack_80._4_4_;
        (*(code *)PTR_now_00799478)();
        iVar11 = (int)(uint)local_88 >> 0xd;
        iVar4 = iVar11 + -1;
        iVar6 = 0;
        if (iVar11 < 1) {
          iVar6 = (1U - iVar11) / 400 + 1;
          iVar4 = iVar4 + iVar6 * 400;
          iVar6 = iVar6 * -0x23ab1;
        }
        lVar10 = (uStack_80 & 0xffffffff) / 1000000 +
                 ((longlong)
                  (int)(((((uint)local_88 >> 4 & 0x1ff) + iVar6) - iVar4 / 100) +
                        (iVar4 * 0x5b5 >> 2) + (iVar4 / 100 >> 2) + -0xaf93b) * 0x15180 +
                 (local_88 >> 0x20)) * 1000;
        bVar3 = false;
        if (lVar10 < 1) {
          lVar10 = 0;
        }
        *(longlong *)(lVar9 + 0x260) = lVar10;
        param_2 = local_58;
        goto LAB_0052536a;
      }
      uVar5 = *(ulonglong *)(lVar9 + 0xf0);
      if (uVar5 != 0) {
        uVar1 = *(ulonglong *)(lVar9 + 0xe8);
        uVar2 = *(ulonglong *)(lVar9 + 0xd8);
        uVar12 = uVar2;
        if (uVar1 < uVar2) {
          uVar12 = 0;
        }
        uVar13 = uVar1 - uVar12;
        uVar7 = uVar2 - uVar13;
        lVar10 = (uVar5 - uVar7) * 0x18;
        if (uVar5 <= uVar7) {
          lVar10 = 0;
        }
        lVar15 = *(longlong *)(lVar9 + 0xe0);
        uVar14 = uVar13 + uVar5;
        if (uVar7 < uVar5) {
          uVar14 = uVar2;
        }
        if (uVar13 != uVar14) {
          if (uVar5 < uVar7) {
            uVar7 = uVar5;
          }
          lVar8 = 0;
          do {
            if ((*(longlong *)(lVar15 + uVar1 * 0x18 + uVar12 * -0x18 + 0x10 + lVar8) == param_4) &&
               (iVar4 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), param_1 = extraout_XMM0_Da_02
               , iVar4 == 0)) goto LAB_005251ea;
            lVar8 = lVar8 + 0x18;
          } while (uVar7 * 0x18 != lVar8);
        }
        if (lVar10 != 0) {
          lVar8 = 0;
          do {
            if ((*(longlong *)(lVar15 + 0x10 + lVar8) == param_4) &&
               (iVar4 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), param_1 = extraout_XMM0_Da_01
               , iVar4 == 0)) goto LAB_005251ea;
            lVar8 = lVar8 + 0x18;
          } while (lVar10 != lVar8);
        }
      }
      lVar9 = lVar9 + 0x280;
    } while (lVar9 != local_48);
    bVar3 = true;
    param_2 = local_58;
    param_5 = local_50;
  }
LAB_0052536a:
  uVar5 = persist(param_2);
  uVar16 = extraout_XMM0_Da_03;
  if (((uVar5 != 0) && (1 < ((uint)uVar5 & 3) - 2)) && ((uVar5 & 3) != 0)) {
    uStack_80 = uVar5 - 1;
    local_88 = CONCAT71(local_88._1_7_,3);
    uVar16 = (*(code *)PTR_drop_00799040)();
  }
  if (bVar3) {
    uVar5 = param_5[1];
    for (lVar9 = param_5[2] + 1; lVar9 != 1; lVar9 = lVar9 + -1) {
      uVar16 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(uVar5);
      uVar5 = uVar5 + 200;
    }
    if (*param_5 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,8);
    }
  }
  return;
}


