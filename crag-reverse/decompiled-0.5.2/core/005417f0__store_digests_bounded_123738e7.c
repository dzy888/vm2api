// 005417f0 store_digests_bounded

/* WARNING: Switch with 1 destination removed at 0x00541f5d */
/* craggemini_core[66f3c71560d70857]::resume::store_digests_bounded */

void __rustcall
craggemini_core[66f3c71560d70857]::resume::store_digests_bounded(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  longlong local_f8;
  ulonglong local_d8;
  undefined8 uStack_d0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar4 = PTR_bcmp_00799020;
  local_b8 = *(longlong *)(param_1 + 0x270);
  uVar15 = param_2[2];
  if ((local_b8 == 0) || (uVar16 = *(ulonglong *)(param_1 + 0xa0), uVar15 < uVar16)) {
LAB_00541835:
    local_48 = 0;
    lVar10 = param_2[1];
    local_b8 = 0;
    local_78 = 0;
    uVar9 = 1;
  }
  else {
    lVar10 = param_2[1];
    if (uVar16 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x98);
      lVar13 = 0x10;
      do {
        if ((*(longlong *)(lVar10 + lVar13) != *(longlong *)(lVar11 + lVar13)) ||
           (iVar6 = (*(code *)puVar4)(), iVar6 != 0)) goto LAB_00541835;
        lVar13 = lVar13 + 0x18;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    (*(code *)PTR_clone_00798fd0)();
    local_78 = local_38;
    uVar9 = local_40;
  }
  local_f8 = local_48;
  uVar17 = chain_digests_from(&local_70,uVar9,local_78,lVar10,uVar15);
  uVar16 = local_60;
  puVar4 = PTR___rust_dealloc_00798fc8;
  if (uVar15 < 0x201) {
    lVar11 = *(longlong *)(param_1 + 0xa0);
    if (lVar11 != 0) {
      lVar13 = *(longlong *)(param_1 + 0x98) + 8;
      do {
        if (*(longlong *)(lVar13 + -8) != 0) {
          uVar17 = (*(code *)puVar4)(uVar17,1);
        }
        lVar13 = lVar13 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,8);
    }
    *(longlong *)(param_1 + 0xa0) = param_2[2];
    uVar17 = (undefined4)*param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar11 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x90) = uVar17;
    *(undefined4 *)(param_1 + 0x94) = uVar2;
    *(int *)(param_1 + 0x98) = (int)lVar11;
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
    puVar4 = PTR___rust_dealloc_00798fc8;
    lVar11 = *(longlong *)(param_1 + 0xb8);
    if (lVar11 != 0) {
      lVar13 = *(longlong *)(param_1 + 0xb0) + 8;
      do {
        if (*(longlong *)(lVar13 + -8) != 0) {
          uVar17 = (*(code *)puVar4)(uVar17,1);
        }
        lVar13 = lVar13 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    *(ulonglong *)(param_1 + 0xb8) = local_60;
    *(undefined4 *)(param_1 + 0xa8) = local_70;
    *(undefined4 *)(param_1 + 0xac) = uStack_6c;
    *(undefined4 *)(param_1 + 0xb0) = uStack_68;
    *(undefined4 *)(param_1 + 0xb4) = uStack_64;
    local_98 = local_70;
    goto LAB_00541e21;
  }
  if (local_60 <= uVar15 - 0x201) {
    (*(code *)PTR_panic_bounds_check_00799520)(uVar17,&PTR_s_src_resume_rs_0078d800);
    goto LAB_00541f85;
  }
  uVar17 = (*(code *)PTR_clone_00798fd0)();
  if (local_f8 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
  }
  local_f8 = CONCAT44(uStack_ac,local_b0);
  uVar9 = CONCAT44(uStack_a4,uStack_a8);
  local_78 = local_a0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  puVar4 = PTR_clone_00798fd0;
  if (puVar7 != (undefined4 *)0x0) {
    local_50 = uVar16;
    local_b8 = local_b8 + (uVar15 - 0x200);
    local_58 = (uVar15 - 0x200) * 3;
    lVar11 = 0;
    puVar12 = puVar7;
    do {
      (*(code *)puVar4)();
      lVar11 = lVar11 + 1;
      *(undefined8 *)(puVar12 + 4) = local_a0;
      *puVar12 = local_b0;
      puVar12[1] = uStack_ac;
      puVar12[2] = uStack_a8;
      puVar12[3] = uStack_a4;
      puVar5 = PTR___rust_dealloc_00798fc8;
      puVar12 = puVar12 + 6;
    } while (lVar11 != 0x200);
    local_d8._0_4_ = 0x200;
    uStack_d0._4_4_ = (undefined4)((ulonglong)puVar7 >> 0x20);
    local_98 = 0x200;
    lVar11 = *(longlong *)(param_1 + 0xa0);
    if (lVar11 != 0) {
      lVar13 = *(longlong *)(param_1 + 0x98) + 8;
      do {
        if (*(longlong *)(lVar13 + -8) != 0) {
          local_d8._0_4_ = (*(code *)puVar5)((undefined4)local_d8,1);
        }
        lVar13 = lVar13 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    uVar16 = local_50;
    *(undefined8 *)(param_1 + 0xa0) = 0x200;
    *(undefined4 *)(param_1 + 0x90) = 0x200;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(int *)(param_1 + 0x98) = (int)puVar7;
    *(undefined4 *)(param_1 + 0x9c) = uStack_d0._4_4_;
    uVar8 = local_50 - (uVar15 - 0x200);
    if (uVar8 < 0x555555555555556) {
      if (uVar8 * 0x18 == 0) {
        local_d8 = 0;
        uStack_d0 = 8;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uStack_d0 = (*(code *)PTR___rust_alloc_00799000)();
        if (uStack_d0 == 0) goto LAB_00541bd6;
        local_98 = extraout_XMM0_Da;
        local_d8 = uVar8;
        if (uVar8 != 0) {
          lVar11 = 0;
          uVar14 = 0;
          local_98 = extraout_XMM0_Da;
          do {
            if (uVar16 * 0x18 + uVar15 * -0x18 + 0x3000 == lVar11) break;
            (*(code *)puVar4)();
            uVar14 = uVar14 + 1;
            *(undefined8 *)(uStack_d0 + 0x10 + lVar11) = local_a0;
            puVar7 = (undefined4 *)(uStack_d0 + lVar11);
            *puVar7 = local_b0;
            puVar7[1] = uStack_ac;
            puVar7[2] = uStack_a8;
            puVar7[3] = uStack_a4;
            lVar11 = lVar11 + 0x18;
            local_98 = local_b0;
          } while (uVar8 != uVar14);
        }
      }
      puVar4 = PTR___rust_dealloc_00798fc8;
      lVar11 = *(longlong *)(param_1 + 0xb8);
      if (lVar11 != 0) {
        lVar13 = *(longlong *)(param_1 + 0xb0) + 8;
        do {
          if (*(longlong *)(lVar13 + -8) != 0) {
            local_98 = (*(code *)puVar4)(local_98,1);
          }
          lVar13 = lVar13 + 0x18;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
      }
      *(ulonglong *)(param_1 + 0xb8) = uVar8;
      local_98 = (undefined4)local_d8;
      uStack_94 = (undefined4)(local_d8 >> 0x20);
      uStack_90 = (undefined4)uStack_d0;
      uStack_8c = (undefined4)((ulonglong)uStack_d0 >> 0x20);
      *(undefined4 *)(param_1 + 0xa8) = local_98;
      *(undefined4 *)(param_1 + 0xac) = uStack_94;
      *(undefined4 *)(param_1 + 0xb0) = uStack_90;
      *(undefined4 *)(param_1 + 0xb4) = uStack_8c;
LAB_00541e21:
      *(longlong *)(param_1 + 0x270) = local_b8;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        local_98 = (*(code *)PTR___rust_dealloc_00798fc8)(local_98,1);
      }
      *(longlong *)(param_1 + 0x78) = local_f8;
      *(undefined8 *)(param_1 + 0x80) = uVar9;
      *(undefined8 *)(param_1 + 0x88) = local_78;
      puVar4 = PTR___rust_dealloc_00798fc8;
      if (0x200 < uVar15) {
        if (local_60 != 0) {
          lVar11 = CONCAT44(uStack_64,uStack_68) + 8;
          uVar16 = local_60;
          do {
            if (*(longlong *)(lVar11 + -8) != 0) {
              local_98 = (*(code *)puVar4)(local_98,1);
            }
            lVar11 = lVar11 + 0x18;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        if (CONCAT44(uStack_6c,local_70) != 0) {
          local_98 = (*(code *)PTR___rust_dealloc_00798fc8)(local_98,8);
        }
        puVar4 = PTR___rust_dealloc_00798fc8;
        lVar10 = lVar10 + 8;
        do {
          if (*(longlong *)(lVar10 + -8) != 0) {
            local_98 = (*(code *)puVar4)(local_98,1);
          }
          lVar10 = lVar10 + 0x18;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        if (*param_2 != 0) {
          (*(code *)PTR_free_0079adc8)(local_98,8);
          return;
        }
      }
      return;
    }
  }
LAB_00541bd6:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_00541f85:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


