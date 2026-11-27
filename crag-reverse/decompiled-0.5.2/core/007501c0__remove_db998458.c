// 007501c0 remove

/* WARNING: Switch with 1 destination removed at 0x00750702 */
/* <std[6c98fd8553dbae28]::sys::process::env::CommandEnv>::remove */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::env::CommandEnv>::remove
          (undefined4 param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar19;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  int *local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  int *piStack_70;
  ulonglong local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  ulonglong *local_48;
  ulonglong local_40;
  uint local_38;
  char local_31;
  
  if (param_4 == 0) {
    cVar2 = (char)param_2[3];
    local_90 = (int *)0x1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    piVar8 = (int *)(*(code *)PTR___rust_alloc_00799000)();
    if (piVar8 == (int *)0x0) {
      uVar19 = (*(code *)PTR_handle_error_00798ff0)();
      if (param_4 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    param_1 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_4);
    if (((param_4 == 4) && (*(char *)((longlong)param_2 + 0x19) == '\0')) && (*piVar8 == 0x48544150)
       ) {
      *(undefined1 *)((longlong)param_2 + 0x19) = 1;
    }
    cVar2 = (char)param_2[3];
    local_90 = piVar8;
  }
  if (cVar2 == '\0') {
    local_e8 = 0xffffffffffffffff;
    local_78 = param_4;
    piStack_70 = local_90;
    local_68 = param_4;
    uVar19 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>>
             ::insert(&local_100,param_2,&local_78,&local_e8);
    if (0 < local_100) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
    }
  }
  else {
    uVar12 = *param_2;
    local_98 = uVar12;
    local_48 = param_2;
    if (uVar12 != 0) {
      local_80 = param_2[1];
      local_38 = (int)local_80 + 7;
      local_a0 = 0;
      local_40 = local_80;
LAB_00750280:
      uVar3 = *(ushort *)(uVar12 + 0x21a);
      uVar11 = (ulonglong)((uint)uVar3 * 8);
      lVar17 = uVar11 * 3;
      uVar16 = 0xffffffffffffffff;
      lVar9 = uVar12 + 8;
      local_88 = uVar12;
      do {
        if (lVar17 == 0) {
          uVar16 = (ulonglong)uVar3;
          goto LAB_00750317;
        }
        uVar12 = *(ulonglong *)(lVar9 + 0x10);
        uVar13 = uVar12;
        if (param_4 < uVar12) {
          uVar13 = param_4;
        }
        iVar7 = (*(code *)PTR_memcmp_00799528)(uVar11,uVar13);
        puVar15 = local_48;
        uVar13 = local_80;
        lVar14 = param_4 - uVar12;
        if (iVar7 != 0) {
          lVar14 = (longlong)iVar7;
        }
        bVar10 = (0 < lVar14) - (lVar14 < 0);
        uVar11 = (ulonglong)bVar10;
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + -0x18;
        lVar9 = lVar9 + 0x18;
        param_1 = extraout_XMM0_Da_00;
      } while (bVar10 == 1);
      if (bVar10 == 0) {
        local_31 = '\0';
        if (local_40 == 0) {
          local_78 = local_88;
          piStack_70 = (int *)0x0;
          local_68 = uVar16;
          <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
          ::remove_leaf_kv::
          <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
                    (&local_e8,&local_78,&local_31);
          puVar15 = local_48;
          uVar13 = local_80;
        }
        else {
          local_100 = *(longlong *)(local_88 + 0x220 + uVar16 * 8);
          uVar12 = local_40 - 1;
          if (uVar12 != 0) {
            if ((uVar12 & 7) != 0) {
              uVar16 = 1;
              do {
                local_100 = *(longlong *)
                             (local_100 + 0x220 + (ulonglong)*(ushort *)(local_100 + 0x21a) * 8);
                uVar12 = uVar16 + 1;
                bVar18 = uVar16 != (local_38 & 7);
                uVar16 = uVar12;
              } while (bVar18);
              uVar12 = local_40 - uVar12;
            }
            if (6 < (local_80 - local_a0) - 2) {
              do {
                lVar17 = *(longlong *)
                          (local_100 + 0x220 + (ulonglong)*(ushort *)(local_100 + 0x21a) * 8);
                lVar17 = *(longlong *)(lVar17 + 0x220 + (ulonglong)*(ushort *)(lVar17 + 0x21a) * 8);
                lVar17 = *(longlong *)(lVar17 + 0x220 + (ulonglong)*(ushort *)(lVar17 + 0x21a) * 8);
                lVar17 = *(longlong *)(lVar17 + 0x220 + (ulonglong)*(ushort *)(lVar17 + 0x21a) * 8);
                lVar17 = *(longlong *)(lVar17 + 0x220 + (ulonglong)*(ushort *)(lVar17 + 0x21a) * 8);
                lVar17 = *(longlong *)(lVar17 + 0x220 + (ulonglong)*(ushort *)(lVar17 + 0x21a) * 8);
                lVar17 = *(longlong *)(lVar17 + 0x220 + (ulonglong)*(ushort *)(lVar17 + 0x21a) * 8);
                local_100 = *(longlong *)
                             (lVar17 + 0x220 + (ulonglong)*(ushort *)(lVar17 + 0x21a) * 8);
                uVar12 = uVar12 - 8;
              } while (uVar12 != 0);
            }
          }
          local_f0 = (ulonglong)*(ushort *)(local_100 + 0x21a) - 1;
          local_f8 = 0;
          <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
          ::remove_leaf_kv::
          <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
                    (&local_e8,&local_100,&local_31);
          if (*(ushort *)((longlong)local_b8 + 0x21a) <= local_a8) {
            do {
              puVar1 = (ushort *)(local_b8 + 0x43);
              local_a8 = (ulonglong)*puVar1;
              local_b8 = (longlong *)*local_b8;
            } while (*(ushort *)((longlong)local_b8 + 0x21a) <= *puVar1);
          }
          lVar17 = local_b8[local_a8 * 3 + 3];
          uVar12 = local_b8[local_a8 * 3 + 1];
          uVar16 = (local_b8 + local_a8 * 3 + 1)[1];
          local_b8[local_a8 * 3 + 1] = local_e8;
          local_b8[local_a8 * 3 + 2] = uStack_e0;
          local_b8[local_a8 * 3 + 3] = local_d8;
          lVar9 = local_b8[local_a8 * 3 + 0x24];
          lVar14 = local_b8[local_a8 * 3 + 0x22];
          lVar6 = (local_b8 + local_a8 * 3 + 0x22)[1];
          local_b8[local_a8 * 3 + 0x22] = local_d0;
          local_b8[local_a8 * 3 + 0x23] = local_c8;
          local_b8[local_a8 * 3 + 0x24] = local_c0;
          local_e8 = uVar12;
          uStack_e0 = uVar16;
          local_d8 = lVar17;
          local_d0 = lVar14;
          local_c8 = lVar6;
          local_c0 = lVar9;
        }
        lStack_58 = local_c8;
        local_50 = local_c0;
        local_68 = local_d8;
        puVar15[2] = puVar15[2] - 1;
        local_60 = local_d0;
        local_78 = local_e8;
        piStack_70 = (int *)uStack_e0;
        param_1 = (undefined4)local_e8;
        if (local_31 == '\x01') {
          if (uVar13 == 0) {
            (*(code *)PTR_panic_00799338)
                      (local_d0,&
                                PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796198
                      );
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          puVar4 = *(undefined8 **)(local_98 + 0x220);
          *puVar15 = (ulonglong)puVar4;
          puVar15[1] = uVar13 - 1;
          *puVar4 = 0;
          param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(local_d0,8);
        }
        lVar17 = local_60;
        if (local_78 != 0xffffffffffffffff) {
          if (local_78 != 0) {
            param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
          }
          if (lVar17 - 1U < 0xfffffffffffffffd) {
            param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
          }
        }
      }
      else {
LAB_00750317:
        if (local_40 != 0) goto code_r0x00750324;
      }
    }
    if (param_4 != 0) {
      (*(code *)PTR_free_0079adc8)(param_1,1);
      return;
    }
  }
  return;
code_r0x00750324:
  uVar12 = *(ulonglong *)(local_88 + 0x220 + uVar16 * 8);
  local_40 = local_40 - 1;
  local_a0 = local_a0 + 1;
  local_38 = CONCAT31((int3)(local_38 >> 8),(char)local_38 + '\a');
  goto LAB_00750280;
}


