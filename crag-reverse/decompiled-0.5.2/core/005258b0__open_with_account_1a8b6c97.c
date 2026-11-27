// 005258b0 open_with_account

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::open_with_account */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::open_with_account
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
          longlong param_5,undefined8 param_6,longlong param_7,longlong param_8,ulonglong param_9,
          longlong param_10)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  longlong local_1c0;
  longlong local_1b0;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  longlong lStack_158;
  longlong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  int local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong lStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong local_80;
  undefined *local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar11 = &DAT_0019b675;
  (*(code *)PTR__join_00799210)(&DAT_0019b675,param_3,0xd);
  if (-1 < local_118) {
    if (local_118 == 0) {
      lVar8 = 1;
      if (param_4 != 0) goto LAB_00525953;
LAB_00525976:
      param_5 = -1;
joined_r0x00525988:
      if (param_7 < 0) {
LAB_005259cf:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00525a72;
      }
LAB_005259fa:
      if (param_7 == 0) {
        local_1c0 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_1c0 = (*(code *)PTR___rust_alloc_00799000)();
        if (local_1c0 == 0) goto LAB_005259cf;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,param_7);
      }
      if (param_8 == 0) {
        param_9 = 0xffffffffffffffff;
      }
      else {
        if ((longlong)param_9 < 0) {
LAB_00525a69:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00525a72;
        }
        if (param_9 == 0) {
          puVar11 = (undefined *)0x1;
          param_9 = 0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar11 = (undefined *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar11 == (undefined *)0x0) goto LAB_00525a69;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,param_9);
        }
      }
      local_110 = local_118;
      local_100 = local_118;
      local_a8 = local_1b0;
      local_f8 = param_7;
      local_f0 = local_1c0;
      local_e8 = param_7;
      local_98 = -1;
      local_e0 = 0;
      lStack_d8 = 8;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 8;
      local_b8 = 0;
      local_108 = lVar8;
      local_b0 = param_5;
      local_a0 = param_5;
      local_80 = param_9;
      local_78 = puVar11;
      local_70 = param_9;
      local_68 = param_10 + (ulonglong)(param_10 == 0);
      uVar22 = (*(code *)PTR_inner_00799760)(0,local_118);
      if (local_60 == -1) {
        uVar13 = (uint)local_58 & 3;
        switch(uVar13) {
        case 0:
          cVar6 = *(char *)(local_58 + 0x10);
          break;
        case 1:
          cVar6 = *(char *)(local_58 + 0x1f);
          break;
        case 2:
          lVar8 = (*(code *)PTR_get_os_functions_007992e0)();
          cVar6 = (**(code **)(lVar8 + 8))();
          uVar22 = extraout_XMM0_Da_03;
          break;
        case 3:
          cVar6 = (char)(local_58 >> 0x20);
        }
        if (cVar6 != '\0') {
          param_1[1] = local_58;
          *param_1 = 0xffffffffffffffff;
          uVar22 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <craggemini_core[66f3c71560d70857]::resume::SessionStore>(&local_110,local_120);
          goto LAB_00526162;
        }
        if ((1 < uVar13 - 2) && ((local_58 & 3) != 0)) {
          lStack_158 = local_58 - 1;
          local_160 = CONCAT31(local_160._1_3_,3);
          uVar22 = (*(code *)PTR_drop_00799040)();
        }
      }
      else {
        local_190 = local_58;
        local_188 = local_50;
        uStack_180 = 0;
        uStack_178 = 0;
        serde_json[dc3825464c436029]::de::from_trait::
        <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::resume::PersistedSessions>
                  (&local_160,&local_190);
        if (CONCAT44(uStack_15c,local_160) == -1) {
          uVar22 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::error::Error>(&lStack_158);
        }
        else if (local_130 - 1U < 2) {
          local_88 = local_138;
          local_98 = CONCAT44(uStack_144,local_148);
          uStack_90 = uStack_140;
          uStack_8c = uStack_13c;
          if (local_e0 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(local_148,8);
          }
          lVar8 = lStack_158;
          local_d0 = local_150;
          local_e0 = CONCAT44(uStack_15c,local_160);
          lStack_d8 = lStack_158;
          uVar22 = local_160;
          if (local_150 != 0) {
            lVar14 = lStack_158 + 0x260;
            lVar19 = 0;
            do {
              if (*(longlong *)(lVar14 + lVar19) == 0) {
                uVar22 = (*(code *)PTR_parse_from_rfc3339_00799ce8)();
                if ((uint)local_190 == 0) {
                  *(undefined8 *)(lVar14 + lVar19) = 0;
                  lVar15 = *(longlong *)(lVar8 + 0x110 + lVar19);
                }
                else {
                  iVar9 = (int)(uint)local_190 >> 0xd;
                  iVar7 = iVar9 + -1;
                  iVar10 = 0;
                  if (iVar9 < 1) {
                    iVar10 = (1U - iVar9) / 400 + 1;
                    iVar7 = iVar7 + iVar10 * 400;
                    iVar10 = iVar10 * -0x23ab1;
                  }
                  lVar15 = ((ulonglong)local_188 & 0xffffffff) / 1000000 +
                           ((longlong)
                            (int)(((((uint)local_190 >> 4 & 0x1ff) + iVar10) - iVar7 / 100) +
                                  (iVar7 * 0x5b5 >> 2) + (iVar7 / 100 >> 2) + -0xaf93b) * 0x15180 +
                           (local_190 >> 0x20)) * 1000;
                  if (lVar15 < 1) {
                    lVar15 = 0;
                  }
                  *(longlong *)(lVar14 + lVar19) = lVar15;
                  lVar15 = *(longlong *)(lVar8 + 0x110 + lVar19);
                }
              }
              else {
                lVar15 = *(longlong *)(lVar8 + 0x110 + lVar19);
              }
              if (lVar15 == -1) {
                if (local_b0 == -1) {
                  uVar20 = 0xffffffffffffffff;
                }
                else {
                  (*(code *)PTR_clone_00798fd0)();
                  uVar20 = local_190;
                  local_48 = (undefined4)local_188;
                  uStack_44 = local_188._4_4_;
                  uStack_40 = (undefined4)uStack_180;
                  uStack_3c = uStack_180._4_4_;
                  lVar15 = *(longlong *)(lVar8 + 0x110 + lVar19);
                  if ((lVar15 != -1) && (lVar15 != 0)) {
                    (*(code *)PTR___rust_dealloc_00798fc8)((undefined4)local_188,1);
                  }
                }
                *(ulonglong *)(lVar8 + 0x110 + lVar19) = uVar20;
                puVar1 = (undefined4 *)(lVar8 + 0x118 + lVar19);
                *puVar1 = local_48;
                puVar1[1] = uStack_44;
                puVar1[2] = uStack_40;
                puVar1[3] = uStack_3c;
                uVar22 = local_48;
              }
              lVar19 = lVar19 + 0x280;
            } while (local_150 * 0x280 != lVar19);
          }
          lVar8 = local_88;
          if (local_80 == 0xffffffffffffffff) {
            if ((local_98 != -1) && (local_d0 != 0)) {
              local_168 = local_d0 * 0x280 + lStack_d8;
              lVar14 = lStack_d8;
              do {
                if ((*(longlong *)(lVar14 + 0x10) == lVar8) &&
                   (iVar7 = (*(code *)PTR_bcmp_00799020)(uVar22,lVar8), uVar22 = extraout_XMM0_Da_04
                   , iVar7 == 0)) {
                  lVar19 = *(longlong *)(lVar14 + 0x128);
joined_r0x00526104:
                  if (lVar19 != -1) {
LAB_005260e2:
                    uVar22 = (*(code *)PTR_clone_00798fd0)();
                    goto LAB_0052610f;
                  }
                  break;
                }
                lVar19 = *(longlong *)(lVar14 + 0x128);
                if (((lVar19 != -1) && (*(longlong *)(lVar14 + 0x138) == lVar8)) &&
                   (iVar7 = (*(code *)PTR_bcmp_00799020)(uVar22,lVar8), uVar22 = extraout_XMM0_Da_05
                   , iVar7 == 0)) goto LAB_005260e2;
                uVar20 = *(ulonglong *)(lVar14 + 0xf0);
                local_170 = lVar19;
                if (uVar20 != 0) {
                  uVar2 = *(ulonglong *)(lVar14 + 0xe8);
                  uVar3 = *(ulonglong *)(lVar14 + 0xd8);
                  uVar16 = uVar3;
                  if (uVar2 < uVar3) {
                    uVar16 = 0;
                  }
                  uVar17 = uVar2 - uVar16;
                  uVar12 = uVar3 - uVar17;
                  lVar15 = (uVar20 - uVar12) * 0x18;
                  if (uVar20 <= uVar12) {
                    lVar15 = 0;
                  }
                  lVar4 = *(longlong *)(lVar14 + 0xe0);
                  uVar18 = uVar17 + uVar20;
                  if (uVar12 < uVar20) {
                    uVar18 = uVar3;
                  }
                  if (uVar17 != uVar18) {
                    if (uVar20 < uVar12) {
                      uVar12 = uVar20;
                    }
                    lVar21 = 0;
                    do {
                      if ((*(longlong *)(lVar4 + uVar2 * 0x18 + uVar16 * -0x18 + 0x10 + lVar21) ==
                           lVar8) &&
                         (iVar7 = (*(code *)PTR_bcmp_00799020)(uVar22,lVar8),
                         uVar22 = extraout_XMM0_Da_07, lVar19 = local_170, iVar7 == 0))
                      goto joined_r0x00526104;
                      lVar21 = lVar21 + 0x18;
                    } while (uVar12 * 0x18 != lVar21);
                  }
                  if (lVar15 != 0) {
                    lVar21 = 0;
                    do {
                      if ((*(longlong *)(lVar4 + 0x10 + lVar21) == lVar8) &&
                         (iVar7 = (*(code *)PTR_bcmp_00799020)(uVar22,lVar8),
                         uVar22 = extraout_XMM0_Da_06, lVar19 = local_170, iVar7 == 0))
                      goto joined_r0x00526104;
                      lVar21 = lVar21 + 0x18;
                    } while (lVar15 != lVar21);
                  }
                }
                lVar14 = lVar14 + 0x280;
              } while (lVar14 != local_168);
            }
            local_190 = 0xffffffffffffffff;
LAB_0052610f:
            local_70 = uStack_180;
            local_80 = local_190;
            local_78 = local_188;
          }
        }
        else {
          uVar22 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <craggemini_core[66f3c71560d70857]::resume::PersistedSessions>(&local_160);
        }
        if (local_60 != 0) {
          uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
        }
      }
      uVar22 = (*(code *)PTR_memcpy_00799008)(uVar22,0xb0);
LAB_00526162:
      if (local_128 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
      }
      return param_1;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar8 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar8 != 0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,local_118);
      if (param_4 == 0) goto LAB_00525976;
LAB_00525953:
      if (-1 < param_5) {
        if (param_5 == 0) {
          local_1b0 = 1;
          param_5 = 0;
          if (-1 < param_7) goto LAB_005259fa;
          goto LAB_005259cf;
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_1b0 = (*(code *)PTR___rust_alloc_00799000)();
        if (local_1b0 != 0) {
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,param_5);
          goto joined_r0x00525988;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00525a72;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_00525a72:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


