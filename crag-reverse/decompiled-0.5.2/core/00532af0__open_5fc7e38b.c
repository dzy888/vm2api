// 00532af0 open

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::open */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::open
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  int local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  uVar18 = (*(code *)PTR__join_00799210)(&DAT_0019ba3c,param_3,0x1a);
  if (local_50 < 0) {
LAB_00532b37:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_005330c6:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (local_50 == 0) {
    lVar7 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar7 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar7 == 0) goto LAB_00532b37;
    uVar18 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,local_50);
  }
  local_b8 = local_50;
  local_a8 = local_50;
  local_88 = 0x80;
  uStack_a0 = 0;
  uStack_98 = 8;
  lStack_90 = 0;
  uStack_b0 = lVar7;
  (*(code *)PTR_inner_00799760)(uVar18,local_50);
  if (local_48 == -1) {
    uVar14 = (uint)local_40 & 3;
    switch(uVar14) {
    case 0:
      if (*(char *)(local_40 + 0x10) == '\0') goto LAB_0053302f;
      goto LAB_00532fdb;
    case 1:
      cVar6 = *(char *)(local_40 + 0x1f);
      break;
    case 2:
      lVar7 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar6 = (**(code **)(lVar7 + 8))();
      break;
    case 3:
      cVar6 = (char)(local_40 >> 0x20);
    }
    if (cVar6 != '\0') {
LAB_00532fdb:
      param_1[1] = local_40;
      *param_1 = 0xffffffffffffffff;
      uVar18 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>
                         (&local_b8,local_58);
      goto joined_r0x00533000;
    }
LAB_0053302f:
    if ((1 < uVar14 - 2) && ((local_40 & 3) != 0)) {
      local_d8 = local_40 - 1;
      local_e0 = CONCAT71(local_e0._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
  }
  else {
    local_e0 = local_40;
    local_d8 = local_38;
    local_d0 = 0;
    uStack_c8 = 0;
    uVar18 = serde_json[dc3825464c436029]::de::from_trait::
             <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::resume::PersistedReceipts>
                       (&local_80,&local_e0);
    if (CONCAT44(uStack_7c,local_80) == -1) {
      uVar18 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                         (&uStack_78);
LAB_00532f28:
      if (local_48 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
      }
    }
    else {
      if (local_68 != 1) {
        lVar7 = CONCAT44(uStack_74,uStack_78);
        for (lVar12 = local_70 + 1; lVar12 != 1; lVar12 = lVar12 + -1) {
          uVar18 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>(lVar7);
          lVar7 = lVar7 + 0xd8;
        }
        if (CONCAT44(uStack_7c,local_80) != 0) {
          uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,8);
        }
        goto LAB_00532f28;
      }
      (*(code *)PTR_now_00799478)();
      iVar15 = (int)(uint)local_e0 >> 0xd;
      iVar13 = iVar15 + -1;
      iVar11 = 0;
      if (iVar15 < 1) {
        iVar11 = (1U - iVar15) / 400 + 1;
        iVar13 = iVar13 + iVar11 * 400;
        iVar11 = iVar11 * -0x23ab1;
      }
      lVar12 = (local_d8 & 0xffffffff) / 1000000 +
               ((longlong)
                (int)(((((uint)local_e0 >> 4 & 0x1ff) + iVar11) - iVar13 / 100) +
                      (iVar13 * 0x5b5 >> 2) + (iVar13 / 100 >> 2) + -0xaf93b) * 0x15180 +
               (local_e0 >> 0x20)) * 1000;
      lVar7 = 0;
      if (0 < lVar12) {
        lVar7 = lVar12;
      }
      local_c0 = param_1;
      if (uStack_a0 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(lVar12,8);
      }
      lStack_90 = local_70;
      uStack_a0 = CONCAT44(uStack_7c,local_80);
      uStack_98 = CONCAT44(uStack_74,uStack_78);
      lVar12 = uStack_98;
      if (local_70 == 0) {
        if (local_48 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(local_80,1);
        }
        param_1 = local_c0;
      }
      else {
        lVar17 = 0;
        bVar16 = false;
        uVar18 = local_80;
        do {
          if (*(char *)(lVar12 + 0xd5 + lVar17) == '\0') {
            if (*(char *)(lVar12 + 0xd4 + lVar17) == '\0') {
              *(undefined1 *)(lVar12 + 0xd5 + lVar17) = 2;
              *(undefined4 *)(lVar12 + 0xd0 + lVar17) = 0x1f70001;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
              uVar5 = _UNK_00183c6c;
              uVar4 = _UNK_00183c68;
              uVar3 = _UNK_00183c64;
              uVar18 = _DAT_00183c60;
              if (puVar8 == (undefined4 *)0x0) goto LAB_005330b8;
              *puVar8 = _DAT_00183c60;
              puVar8[1] = uVar3;
              puVar8[2] = uVar4;
              puVar8[3] = uVar5;
              lVar1 = *(longlong *)(lVar12 + 0x78 + lVar17);
              if ((lVar1 != -1) && (lVar1 != 0)) {
                uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
              }
              *(undefined8 *)(lVar12 + 0x78 + lVar17) = 0x10;
              uVar9 = 0x10;
            }
            else {
              *(undefined1 *)(lVar12 + 0xd5 + lVar17) = 3;
              *(undefined4 *)(lVar12 + 0xd0 + lVar17) = 0x1990001;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
              uVar9 = _UNK_0019ba34;
              if (puVar8 == (undefined4 *)0x0) {
LAB_005330b8:
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_005330c6;
              }
              *(ulonglong *)((longlong)puVar8 + 0xb) =
                   CONCAT35(_UNK_0019ba31,CONCAT41(_UNK_0019ba2d,DAT_0019ba2c));
              *(undefined8 *)((longlong)puVar8 + 0x13) = uVar9;
              uVar5 = _UNK_0019ba2d;
              uVar4 = _UNK_0019ba29;
              uVar3 = _UNK_0019ba25;
              uVar18 = _DAT_0019ba21;
              *puVar8 = _DAT_0019ba21;
              puVar8[1] = uVar3;
              puVar8[2] = uVar4;
              puVar8[3] = uVar5;
              lVar1 = *(longlong *)(lVar12 + 0x78 + lVar17);
              if ((lVar1 != -1) && (lVar1 != 0)) {
                uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
              }
              *(undefined8 *)(lVar12 + 0x78 + lVar17) = 0x1b;
              uVar9 = 0x1b;
            }
            *(undefined4 **)(lVar12 + 0x80 + lVar17) = puVar8;
            *(undefined8 *)(lVar12 + 0x88 + lVar17) = uVar9;
            *(longlong *)(lVar12 + 200 + lVar17) = lVar7;
            bVar16 = true;
          }
          lVar17 = lVar17 + 0xd8;
        } while (local_70 * 0xd8 != lVar17);
        if (local_48 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
        }
        param_1 = local_c0;
        if ((((bVar16) && (uVar10 = persist(&local_b8), uVar10 != 0)) &&
            (1 < ((uint)uVar10 & 3) - 2)) && ((uVar10 & 3) != 0)) {
          local_d8 = uVar10 - 1;
          local_e0 = CONCAT71(local_e0._1_7_,3);
          (*(code *)PTR_drop_00799040)();
        }
      }
    }
  }
  param_1[6] = local_88;
  param_1[4] = uStack_98;
  param_1[5] = lStack_90;
  param_1[2] = local_a8;
  param_1[3] = uStack_a0;
  *(undefined4 *)param_1 = (undefined4)local_b8;
  *(undefined4 *)((longlong)param_1 + 4) = local_b8._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_b0._4_4_;
  uVar18 = (undefined4)local_b8;
joined_r0x00533000:
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
  }
  return param_1;
}


