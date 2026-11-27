// 00750780 capture

/* <std[6c98fd8553dbae28]::sys::process::env::CommandEnv>::capture */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::env::CommandEnv>::capture
          (undefined8 *param_1,longlong *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  ulonglong *puStack_160;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong uStack_120;
  longlong local_118;
  longlong *local_110;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  ulonglong *puStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong *local_b8;
  ulonglong local_a8;
  longlong *local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  ulonglong *puStack_70;
  longlong *local_68;
  ulonglong *local_60;
  longlong lStack_58;
  longlong local_50;
  longlong local_48;
  uint local_3c;
  longlong *local_38;
  
  local_a0 = (longlong *)0x0;
  local_90 = 0;
  if ((char)param_2[3] == '\0') {
    (*(code *)PTR_vars_os_0079af88)();
    local_d8 = local_168;
    puStack_d0 = puStack_160;
    local_e8 = (longlong *)CONCAT44(uStack_174,local_178);
    uStack_e0 = (ulonglong *)CONCAT44(uStack_16c,uStack_170);
    puVar21 = uStack_e0;
    local_38 = param_2;
    if (uStack_e0 != puStack_160) {
      do {
        puVar21 = uStack_e0 + 6;
        if (*uStack_e0 == 0xffffffffffffffff) break;
        local_128 = uStack_e0[1];
        uStack_120 = uStack_e0[2];
        local_f8 = uStack_e0[5];
        local_108 = uStack_e0[3];
        uStack_100 = uStack_e0[4];
        local_130 = *uStack_e0;
        local_178 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
                    ::insert(&local_78,&local_a0,&local_130,&local_108);
        if (0 < (longlong)local_78) {
          local_178 = (*(code *)PTR___rust_dealloc_00798fc8)(local_178,1);
        }
        uStack_e0 = puVar21;
      } while (puVar21 != puStack_160);
    }
    puVar7 = PTR___rust_dealloc_00798fc8;
    uStack_e0 = puVar21;
    if (puStack_160 != puVar21) {
      uVar17 = (ulonglong)((longlong)puStack_160 - (longlong)puVar21) / 0x30;
      puVar21 = puVar21 + 4;
      do {
        if (puVar21[-4] != 0) {
          local_178 = (*(code *)puVar7)(local_178,1);
        }
        if (puVar21[-1] != 0) {
          local_178 = (*(code *)puVar7)(local_178,1);
        }
        puVar21 = puVar21 + 6;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (local_d8 != (longlong *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(local_178,8);
    }
    param_2 = local_38;
  }
  puVar9 = (undefined8 *)*param_2;
  lVar15 = param_2[2];
  if (puVar9 != (undefined8 *)0x0 && lVar15 != 0) {
    uVar17 = param_2[1];
    puVar13 = (undefined8 *)0x0;
    do {
      if (puVar13 == (undefined8 *)0x0) {
        if (uVar17 == 0) {
          puVar13 = puVar9;
        }
        else {
          uVar22 = uVar17;
          if ((uVar17 & 7) != 0) {
            uVar22 = 0;
            do {
              puVar9 = (undefined8 *)puVar9[0x44];
              uVar22 = uVar22 + 1;
            } while ((uVar17 & 7) != uVar22);
            uVar22 = uVar17 - uVar22;
          }
          puVar13 = puVar9;
          if (7 < uVar17) {
            do {
              puVar9 = *(undefined8 **)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar9[0x44] + 0x220) + 0x220) + 0x220)
                              + 0x220) + 0x220) + 0x220) + 0x220);
              uVar22 = uVar22 - 8;
              puVar13 = puVar9;
            } while (uVar22 != 0);
          }
        }
        puVar9 = (undefined8 *)0x0;
        uVar22 = 0;
        if (*(short *)((longlong)puVar13 + 0x21a) == 0) goto LAB_00750a60;
LAB_007509a3:
        puVar18 = puVar13;
      }
      else {
        uVar22 = uVar17;
        if (uVar17 < *(ushort *)((longlong)puVar13 + 0x21a)) goto LAB_007509a3;
LAB_00750a60:
        do {
          puVar18 = (undefined8 *)*puVar13;
          if (puVar18 == (undefined8 *)0x0) {
            (*(code *)PTR_unwrap_failed_00799278)();
            goto LAB_0075112a;
          }
          puVar9 = (undefined8 *)((longlong)puVar9 + 1);
          puVar1 = (ushort *)(puVar13 + 0x43);
          uVar22 = (ulonglong)*puVar1;
          puVar13 = puVar18;
        } while (*(ushort *)((longlong)puVar18 + 0x21a) <= *puVar1);
      }
      puVar13 = puVar18;
      if (puVar9 == (undefined8 *)0x0) {
        uVar17 = uVar22 + 1;
      }
      else {
        plVar11 = puVar18 + uVar22 + 0x45;
        puVar14 = puVar9;
        if (((ulonglong)puVar9 & 7) != 0) {
          uVar17 = 0;
          do {
            puVar13 = (undefined8 *)*plVar11;
            plVar11 = puVar13 + 0x44;
            uVar17 = uVar17 + 1;
          } while (((ulonglong)puVar9 & 7) != uVar17);
          puVar14 = (undefined8 *)((longlong)puVar9 - uVar17);
        }
        if (&DAT_00000007 < puVar9) {
          do {
            puVar13 = *(undefined8 **)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(*plVar11 + 0x220) + 0x220) + 0x220) +
                             0x220) + 0x220) + 0x220) + 0x220);
            plVar11 = puVar13 + 0x44;
            puVar14 = puVar14 + -1;
          } while (puVar14 != (undefined8 *)0x0);
        }
        uVar17 = 0;
      }
      if (puVar18[uVar22 * 3 + 0x22] == -1) {
        local_110 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          local_38 = (longlong *)puVar18[uVar22 * 3 + 2];
          lVar4 = puVar18[uVar22 * 3 + 3];
          local_3c = (int)lStack_98 + 7;
          local_118 = 0;
          local_80 = lStack_98;
          local_48 = lStack_98;
          local_88 = local_a0;
LAB_00750c91:
          uVar2 = *(ushort *)((longlong)local_88 + 0x21a);
          lVar19 = (ulonglong)((uint)uVar2 * 8) * 3;
          plVar11 = local_88 + 1;
          uVar22 = 0xffffffffffffffff;
          do {
            uVar12 = uVar22;
            uVar22 = (ulonglong)uVar2;
            if (lVar19 == 0) goto joined_r0x00750d3e;
            lVar16 = plVar11[2];
            iVar8 = (*(code *)PTR_memcmp_00799528)();
            lVar20 = local_80;
            lVar16 = lVar4 - lVar16;
            if (iVar8 != 0) {
              lVar16 = (longlong)iVar8;
            }
            uVar22 = uVar12 + 1;
            lVar19 = lVar19 + -0x18;
            plVar11 = plVar11 + 3;
          } while ((char)((0 < lVar16) - (lVar16 < 0)) == '\x01');
          if (0 < lVar16 == lVar16 < 0) {
            local_130 = local_130 & 0xffffffffffffff00;
            if (local_48 == 0) {
              local_78 = local_88;
              puStack_70 = (ulonglong *)0x0;
              local_68 = (longlong *)uVar22;
              <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
              ::remove_leaf_kv::
              <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
                        (&local_e8,&local_78,&local_130);
              lVar20 = local_80;
            }
            else {
              local_108 = local_88[uVar12 + 0x45];
              uVar22 = local_48 - 1;
              if (uVar22 != 0) {
                if ((uVar22 & 7) != 0) {
                  uVar12 = 1;
                  do {
                    local_108 = *(ulonglong *)
                                 (local_108 + 0x220 + (ulonglong)*(ushort *)(local_108 + 0x21a) * 8)
                    ;
                    uVar22 = uVar12 + 1;
                    bVar23 = uVar12 != (local_3c & 7);
                    uVar12 = uVar22;
                  } while (bVar23);
                  uVar22 = local_48 - uVar22;
                }
                if (6 < (local_80 - local_118) - 2U) {
                  do {
                    lVar4 = *(longlong *)
                             (local_108 + 0x220 + (ulonglong)*(ushort *)(local_108 + 0x21a) * 8);
                    lVar4 = *(longlong *)(lVar4 + 0x220 + (ulonglong)*(ushort *)(lVar4 + 0x21a) * 8)
                    ;
                    lVar4 = *(longlong *)(lVar4 + 0x220 + (ulonglong)*(ushort *)(lVar4 + 0x21a) * 8)
                    ;
                    lVar4 = *(longlong *)(lVar4 + 0x220 + (ulonglong)*(ushort *)(lVar4 + 0x21a) * 8)
                    ;
                    lVar4 = *(longlong *)(lVar4 + 0x220 + (ulonglong)*(ushort *)(lVar4 + 0x21a) * 8)
                    ;
                    lVar4 = *(longlong *)(lVar4 + 0x220 + (ulonglong)*(ushort *)(lVar4 + 0x21a) * 8)
                    ;
                    lVar4 = *(longlong *)(lVar4 + 0x220 + (ulonglong)*(ushort *)(lVar4 + 0x21a) * 8)
                    ;
                    local_108 = *(ulonglong *)
                                 (lVar4 + 0x220 + (ulonglong)*(ushort *)(lVar4 + 0x21a) * 8);
                    uVar22 = uVar22 - 8;
                  } while (uVar22 != 0);
                }
              }
              local_f8 = (ulonglong)*(ushort *)(local_108 + 0x21a) - 1;
              uStack_100 = 0;
              <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
              ::remove_leaf_kv::
              <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
                        (&local_e8,&local_108,&local_130);
              plVar11 = local_b8;
              uVar22 = local_a8;
              if (*(ushort *)((longlong)local_b8 + 0x21a) <= local_a8) {
                do {
                  puVar1 = (ushort *)(plVar11 + 0x43);
                  uVar22 = (ulonglong)*puVar1;
                  plVar11 = (longlong *)*plVar11;
                } while (*(ushort *)((longlong)plVar11 + 0x21a) <= *puVar1);
              }
              plVar3 = (longlong *)plVar11[uVar22 * 3 + 3];
              plVar6 = (longlong *)plVar11[uVar22 * 3 + 1];
              puVar21 = (ulonglong *)(plVar11 + uVar22 * 3 + 1)[1];
              plVar11[uVar22 * 3 + 1] = (longlong)local_e8;
              plVar11[uVar22 * 3 + 2] = (longlong)uStack_e0;
              plVar11[uVar22 * 3 + 3] = (longlong)local_d8;
              lVar4 = plVar11[uVar22 * 3 + 0x24];
              puVar10 = (ulonglong *)plVar11[uVar22 * 3 + 0x22];
              lVar19 = (plVar11 + uVar22 * 3 + 0x22)[1];
              plVar11[uVar22 * 3 + 0x22] = (longlong)puStack_d0;
              plVar11[uVar22 * 3 + 0x23] = local_c8;
              plVar11[uVar22 * 3 + 0x24] = lStack_c0;
              local_e8 = plVar6;
              uStack_e0 = puVar21;
              local_d8 = plVar3;
              puStack_d0 = puVar10;
              local_c8 = lVar19;
              lStack_c0 = lVar4;
            }
            lStack_58 = local_c8;
            local_50 = lStack_c0;
            local_68 = local_d8;
            local_90 = local_90 + -1;
            local_60 = puStack_d0;
            local_78 = local_e8;
            puStack_70 = uStack_e0;
            if ((char)local_130 == '\x01') {
              if (lVar20 == 0) {
                (*(code *)PTR_panic_00799338)
                          (puStack_d0,
                           &
                           PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796198
                          );
                goto LAB_0075112a;
              }
              local_a0 = (longlong *)local_110[0x44];
              lStack_98 = lVar20 + -1;
              *local_a0 = 0;
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
            puVar21 = local_60;
            if (local_78 != (longlong *)0xffffffffffffffff) {
              if (local_78 != (longlong *)0x0) {
                (*(code *)PTR___rust_dealloc_00798fc8)();
              }
              if (0xfffffffffffffffd < (longlong)puVar21 - 1U) goto LAB_00750972;
              goto LAB_0075096c;
            }
          }
          else {
joined_r0x00750d3e:
            if (local_48 != 0) goto LAB_00750d44;
          }
        }
      }
      else {
        plVar11 = (longlong *)puVar18[uVar22 * 3 + 3];
        puVar21 = (ulonglong *)0x1;
        if (plVar11 != (longlong *)0x0) {
          local_38 = (longlong *)puVar18[uVar22 * 3 + 2];
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar21 = (ulonglong *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar21 == (ulonglong *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0075112a;
          }
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,plVar11);
        }
        puVar10 = (ulonglong *)0x1;
        plVar3 = (longlong *)puVar18[uVar22 * 3 + 0x24];
        local_78 = plVar11;
        puStack_70 = puVar21;
        local_68 = plVar11;
        local_38 = plVar11;
        if (plVar3 != (longlong *)0x0) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar10 = (ulonglong *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar10 == (ulonglong *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
LAB_0075112a:
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,plVar3);
        }
        local_e8 = plVar3;
        uStack_e0 = puVar10;
        local_d8 = plVar3;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
        ::insert(&local_108,&local_a0,&local_78,&local_e8);
        if (0 < (longlong)local_108) {
LAB_0075096c:
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
LAB_00750972:
      puVar9 = (undefined8 *)0x0;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  param_1[2] = local_90;
  *param_1 = local_a0;
  param_1[1] = lStack_98;
  return;
LAB_00750d44:
  local_88 = (longlong *)local_88[uVar22 + 0x44];
  local_48 = local_48 + -1;
  local_118 = local_118 + 1;
  local_3c = CONCAT31((int3)(local_3c >> 8),(char)local_3c + '\a');
  goto LAB_00750c91;
}


