// 0018c980 read_registration

/* craggemini[b21da2d71f2da7a3]::license::issuer::read_registration */

undefined8 * __rustcall
craggemini[b21da2d71f2da7a3]::license::issuer::read_registration
          (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auVar14 [16];
  int local_214;
  undefined8 *local_210;
  int *local_208;
  int *local_200;
  int *piStack_1f8;
  int *local_1f0;
  int *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  int *piStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  int *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  int *local_188;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int *local_150;
  undefined8 local_148;
  int *local_128;
  int *piStack_120;
  int *local_118;
  int *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int *local_f8;
  uint local_f0;
  int local_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  int *local_b8;
  int *piStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  int *local_98;
  int *piStack_90;
  int *local_88;
  int *piStack_80;
  int *local_78;
  undefined8 uStack_70;
  
  psVar10 = (short *)(*(code *)PTR_file_name_0021a1e8)();
  if (psVar10 == (short *)0x0) {
LAB_0018cde7:
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  if (param_3 == 2) {
    if (*psVar10 == 0x2e2e) goto LAB_0018cde7;
  }
  else if ((param_3 == 1) && ((char)*psVar10 == '.')) goto LAB_0018cde7;
  cVar6 = (*(code *)PTR_is_absolute_0021a0f0)();
  puVar11 = &DAT_00119218;
  if (cVar6 == '\0') {
    puVar11 = &DAT_00119217;
  }
  local_1d8 = (int *)0x1b600000000;
  uStack_1d0 = (int *)((ulonglong)uStack_1d0._6_2_ << 0x30);
  uStack_1d0 = (int *)CONCAT71(uStack_1d0._1_7_,1);
  (*(code *)PTR__open_0021a0f8)(1,puVar11);
  if ((int)local_128 == 1) {
    if ((1 < ((uint)piStack_120 & 3) - 2) && (((ulonglong)piStack_120 & 3) != 0)) {
      uStack_1d0 = (int *)((longlong)piStack_120 + -1);
      local_1d8 = (int *)CONCAT71(local_1d8._1_7_,3);
      (*(code *)PTR_drop_00219c58)();
    }
    goto LAB_0018cde7;
  }
  local_210 = param_1;
  (*(code *)PTR_parent_00219ef0)();
  (*(code *)PTR_components_0021a100)();
  puVar11 = PTR_next_0021a108;
  local_1a8 = local_78;
  uStack_1a0 = uStack_70;
  local_1b8 = local_88;
  uStack_1b0 = piStack_80;
  local_1c8 = local_98;
  piStack_1c0 = piStack_90;
  local_1d8 = (int *)CONCAT44(uStack_a4,local_a8);
  uStack_1d0 = piStack_a0;
LAB_0018cb10:
  uVar13 = (*(code *)puVar11)();
  if ((byte)local_128 != 0xff) {
    bVar7 = (byte)local_128 - 5;
    if ((byte)local_128 < 5) {
      bVar7 = 0;
    }
    if (1 < bVar7 - 1) {
      if (bVar7 == 4) {
        uVar13 = (*(code *)PTR_spec_new_impl_0021a110)(3,local_118);
        if (local_200 == (int *)0xffffffffffffffff) {
          local_208 = local_1f0;
          local_d8 = piStack_1f8;
          iVar8 = (*(code *)PTR_openat_0021a070)(uVar13,0xb0000);
          if (-1 < iVar8) {
            local_1e0 = (int *)CONCAT44(local_1e0._4_4_,iVar8);
            uVar13 = (*(code *)PTR_close_00219d60)();
            *(undefined1 *)local_d8 = 0;
            if (local_208 != (int *)0x0) {
              (*(code *)PTR___rust_dealloc_00219c40)(uVar13,1);
            }
            goto LAB_0018cb10;
          }
          *(undefined1 *)local_d8 = 0;
          uVar13 = extraout_XMM0_Da;
          local_200 = local_208;
        }
        if (local_200 != (int *)0x0) {
          (*(code *)PTR___rust_dealloc_00219c40)(uVar13,1);
        }
      }
      (*(code *)PTR_close_00219d60)();
      param_1 = local_210;
      goto LAB_0018cde7;
    }
    goto LAB_0018cb10;
  }
  uVar13 = (*(code *)PTR_spec_new_impl_0021a110)(uVar13,param_3);
  piVar3 = local_1c8;
  piVar2 = uStack_1d0;
  puVar12 = local_210;
  if (local_1d8 != (int *)0xffffffffffffffff) {
    if (local_1d8 != (int *)0x0) {
      (*(code *)PTR___rust_dealloc_00219c40)(uVar13,1);
    }
    *(undefined1 *)(puVar12 + 1) = 3;
    *puVar12 = 0xffffffffffffffff;
    goto LAB_0018cda3;
  }
  iVar8 = (*(code *)PTR_openat_0021a070)(uVar13,0xa0800);
  if (iVar8 < 0) {
    *(undefined1 *)(puVar12 + 1) = 3;
    *puVar12 = 0xffffffffffffffff;
    uVar13 = extraout_XMM0_Da_00;
  }
  else {
    local_214 = iVar8;
    (*(code *)PTR_metadata_0021a048)();
    piVar4 = local_1a8;
    if ((int)local_1d8 == 2) {
      if ((1 < ((uint)uStack_1d0 & 3) - 2) && (((ulonglong)uStack_1d0 & 3) != 0)) {
        piStack_a0 = (int *)((longlong)uStack_1d0 + -1);
        local_a8 = CONCAT31(local_a8._1_3_,3);
        (*(code *)PTR_drop_00219c58)();
      }
      *(undefined1 *)(puVar12 + 1) = 3;
      *puVar12 = 0xffffffffffffffff;
    }
    else {
      uVar5 = (uint)uStack_1a0;
      if (((uint)uStack_1a0 & 0xf000) == 0x8000) {
        local_b8 = local_1b8;
        piStack_b0 = uStack_1b0;
        iVar8 = uStack_1a0._4_4_;
        local_208 = local_188;
        local_d8 = (int *)CONCAT44(uStack_15c,local_160);
        uStack_d0 = uStack_158;
        uStack_cc = uStack_154;
        local_1e0 = local_150;
        local_c0 = local_148;
        iVar9 = (*(code *)PTR_geteuid_0021a050)();
        if (((((iVar8 == iVar9) && ((uVar5 & 0xfff | 0x80) == 0x180)) &&
             (local_208 < (int *)0x10001 && piVar4 == (int *)0x1)) &&
            ((iVar9 = (*(code *)PTR_fstatfs_0021a058)(), iVar9 == 0 &&
             (CONCAT44(uStack_a4,local_a8) != 0x1021997)))) &&
           (CONCAT44(uStack_a4,local_a8) != 0x53464846)) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                    (&local_1d8,local_208,0,1,1);
          if ((int)local_1d8 == 1) {
            (*(code *)PTR_handle_error_00219c78)();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          local_200 = uStack_1d0;
          piStack_1f8 = local_1c8;
          local_1f0 = (int *)0x0;
          uStack_1d0 = (int *)0x10001;
          local_1c8 = (int *)0x10001;
          local_1d8 = &local_214;
          auVar14 = std[6c98fd8553dbae28]::io::default_read_to_end::
                    <core[c0acaeba6ab4c2e0]::io::util::Take<&mut_std[6c98fd8553dbae28]::fs::File>>
                              (&local_1d8,&local_200,0);
          if (auVar14._0_8_ == 1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                      (auVar14._8_8_);
          }
          else {
            (*(code *)PTR_metadata_0021a048)();
            if ((int)local_1d8 == 2) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                        (uStack_1d0,&local_214);
            }
            else if (local_1f0 < (int *)0x10001) {
              local_128 = local_b8;
              piStack_120 = piStack_b0;
              local_f0 = uVar5;
              local_ec = iVar8;
              local_118 = (int *)0x1;
              local_110 = local_208;
              local_108 = (undefined4)local_d8;
              uStack_104 = local_d8._4_4_;
              uStack_100 = uStack_d0;
              uStack_fc = uStack_cc;
              local_f8 = local_1e0;
              local_e8 = local_c0;
              local_1d8 = local_1b8;
              uStack_1d0 = uStack_1b0;
              local_1c8 = local_1a8;
              piStack_1c0 = local_188;
              local_1b8 = (int *)CONCAT44(uStack_15c,local_160);
              uStack_1b0 = (int *)CONCAT44(uStack_154,uStack_158);
              local_1a8 = local_150;
              local_198 = local_148;
              cVar6 = <(u64,u64,u32,u32,u64,u64,i64,i64,i64,i64)as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>
                      ::ne(&local_128,&local_1d8);
              if (cVar6 == '\0') {
                local_118 = local_1f0;
                local_128 = local_200;
                piStack_120 = piStack_1f8;
                local_200 = (int *)0x0;
                piStack_1f8 = (int *)0x1;
                local_1f0 = (int *)0x0;
                <alloc[12e961f32105355]::string::String>::from_utf8(&local_1d8,&local_128);
                if (local_1d8 == (int *)0xffffffffffffffff) {
                  local_210[2] = piStack_1c0;
                  *(undefined4 *)local_210 = (undefined4)uStack_1d0;
                  *(undefined4 *)((longlong)local_210 + 4) = uStack_1d0._4_4_;
                  *(undefined4 *)(local_210 + 1) = (undefined4)local_1c8;
                  *(undefined4 *)((longlong)local_210 + 0xc) = local_1c8._4_4_;
                }
                else {
                  local_118 = local_1c8;
                  local_128 = local_1d8;
                  piStack_120 = uStack_1d0;
                  *(undefined1 *)(local_210 + 1) = 3;
                  *local_210 = 0xffffffffffffffff;
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::vec::Vec<u8>>>
                            (&local_128);
                }
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::vec::Vec<u8>>>
                          (&local_200);
                uVar13 = (*(code *)PTR_close_00219d60)();
                *(undefined1 *)piVar2 = 0;
                if (piVar3 != (int *)0x0) {
                  (*(code *)PTR___rust_dealloc_00219c40)(uVar13,1);
                }
                (*(code *)PTR_close_00219d60)();
                return local_210;
              }
            }
          }
          puVar12 = local_210;
          *(undefined1 *)(local_210 + 1) = 3;
          *local_210 = 0xffffffffffffffff;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::vec::Vec<u8>>>(&local_200);
          goto LAB_0018cd7f;
        }
      }
      *(undefined1 *)(local_210 + 1) = 3;
      *local_210 = 0xffffffffffffffff;
      puVar12 = local_210;
    }
LAB_0018cd7f:
    uVar13 = (*(code *)PTR_close_00219d60)();
  }
  *(undefined1 *)piVar2 = 0;
  if (piVar3 != (int *)0x0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar13,1);
  }
LAB_0018cda3:
  (*(code *)PTR_close_00219d60)();
  return puVar12;
}


