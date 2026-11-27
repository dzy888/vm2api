// 0072d630 <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>::remove_kv::{closure#0},alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   std[6c98fd8553dbae28]::ffi::os_str::OsString, std[6c98fd8553dbae28]::ffi::os_str::OsString,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,
   alloc[12e961f32105355]::collections::btree::node::marker::KV>>::remove_leaf_kv::<<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<std[6c98fd8553dbae28]::ffi::os_str::OsString,
   std[6c98fd8553dbae28]::ffi::os_str::OsString>>::remove_kv::{closure#0},
   alloc[12e961f32105355]::alloc::Global> */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
::remove_leaf_kv::
<<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
          (undefined8 *param_1,longlong *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 uVar19;
  longlong *local_178;
  ulonglong local_170;
  ulonglong local_168;
  longlong *local_160;
  ulonglong local_158;
  longlong *local_150;
  ulonglong local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  ulonglong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  ulonglong local_f0;
  undefined8 *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  ulonglong local_90;
  longlong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  plVar2 = (longlong *)*param_2;
  uVar9 = param_2[2];
  uVar6 = *(ushort *)((longlong)plVar2 + 0x21a);
  plVar12 = plVar2 + uVar9 * 3 + 1;
  local_a8 = (longlong *)*plVar12;
  uStack_a0 = (undefined4)plVar12[1];
  uStack_9c = *(undefined4 *)((longlong)plVar12 + 0xc);
  local_40 = plVar2[uVar9 * 3 + 3];
  lVar10 = (~uVar9 + (ulonglong)uVar6) * 0x18;
  local_e8 = param_1;
  local_e0 = param_3;
  local_38 = uVar9;
  (*(code *)PTR_memmove_00799258)(local_40,lVar10);
  local_118 = plVar2[uVar9 * 3 + 0x24];
  plVar12 = plVar2 + uVar9 * 3 + 0x22;
  local_128 = (undefined4)*plVar12;
  uStack_124 = *(undefined4 *)((longlong)plVar12 + 4);
  uStack_120 = (undefined4)plVar12[1];
  uStack_11c = *(undefined4 *)((longlong)plVar12 + 0xc);
  (*(code *)PTR_memmove_00799258)(local_128,lVar10);
  uVar5 = uVar6 - 1;
  *(ushort *)((longlong)plVar2 + 0x21a) = uVar5;
  uVar9 = param_2[1];
  local_140 = (undefined4)local_a8;
  uStack_13c = local_a8._4_4_;
  uStack_138 = uStack_a0;
  uStack_134 = uStack_9c;
  local_130 = local_40;
  if (4 < uVar5) {
    local_b0 = plVar2;
    goto LAB_0072d87a;
  }
  plVar12 = (longlong *)*plVar2;
  if (plVar12 == (longlong *)0x0) {
LAB_0072d848:
    local_58 = plVar2;
    local_50 = uVar9;
    local_48 = local_38;
  }
  else {
    uVar17 = uVar9 + 1;
    uVar8 = (ulonglong)*(ushort *)(plVar2 + 0x43);
    if (uVar8 == 0) {
      if (*(short *)((longlong)plVar12 + 0x21a) == 0) {
LAB_0072de3c:
        (*(code *)PTR_panic_fmt_007991a8)
                  (plVar12,&
                           PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796c18
                  );
LAB_0072de55:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      local_70 = (longlong *)plVar12[0x45];
      local_88 = 0;
      local_80 = plVar2;
      if (0xb < (uint)uVar6 + (uint)*(ushort *)((longlong)local_70 + 0x21a)) {
        local_98 = plVar12;
        local_90 = uVar17;
        local_78 = uVar9;
        local_68 = uVar9;
        <alloc[12e961f32105355]::collections::btree::node::BalancingContext<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
        ::bulk_steal_right(&local_98,1);
        goto LAB_0072d848;
      }
      local_98 = plVar12;
      local_90 = uVar17;
      local_78 = uVar9;
      local_68 = uVar9;
      <alloc[12e961f32105355]::collections::btree::node::BalancingContext<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
      ::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
                (&local_58,&local_98,0,local_38);
    }
    else {
      local_80 = (longlong *)plVar12[uVar8 + 0x43];
      local_88 = uVar8 - 1;
      local_70 = plVar2;
      if (0xb < (uint)uVar5 + (uint)*(ushort *)((longlong)local_80 + 0x21a) + 1) {
        local_98 = plVar12;
        local_90 = uVar17;
        local_78 = uVar9;
        local_68 = uVar9;
        <alloc[12e961f32105355]::collections::btree::node::BalancingContext<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
        ::bulk_steal_left(&local_98,1);
        local_38 = local_38 + 1;
        goto LAB_0072d848;
      }
      local_98 = plVar12;
      local_90 = uVar17;
      local_78 = uVar9;
      local_68 = uVar9;
      <alloc[12e961f32105355]::collections::btree::node::BalancingContext<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
      ::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
                (&local_58,&local_98,1,local_38);
    }
  }
  local_38 = local_48;
  local_b0 = local_58;
  plVar12 = (longlong *)*local_58;
  uVar9 = local_50;
  if (plVar12 != (longlong *)0x0) {
    uVar6 = *(ushort *)((longlong)plVar12 + 0x21a);
    if (uVar6 < 5) {
      uVar17 = local_50 + 1;
      local_b8 = local_50;
      do {
        uVar8 = (ulonglong)uVar6;
        plVar2 = (longlong *)*plVar12;
        if (plVar2 == (longlong *)0x0) {
          if (uVar8 == 0) {
            *local_e0 = 1;
          }
          break;
        }
        local_110 = uVar17 + 1;
        uVar15 = (ulonglong)*(ushort *)(plVar12 + 0x43);
        if (uVar15 == 0) {
          uVar6 = *(ushort *)((longlong)plVar2 + 0x21a);
          if (uVar6 == 0) goto LAB_0072de3c;
          local_70 = (longlong *)plVar2[0x45];
          local_88 = 0;
          uVar14 = uVar8 + *(ushort *)((longlong)local_70 + 0x21a) + 1;
          local_98 = plVar2;
          local_90 = local_110;
          local_80 = plVar12;
          local_78 = uVar17;
          local_68 = uVar17;
          if (0xb < uVar14) {
            <alloc[12e961f32105355]::collections::btree::node::BalancingContext<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
            ::bulk_steal_right(&local_98,5 - uVar8);
            break;
          }
          uVar15 = 0;
          uVar9 = uVar8;
          plVar16 = plVar12;
          local_a8 = local_70;
          local_40 = (ulonglong)*(ushort *)((longlong)local_70 + 0x21a);
        }
        else {
          local_160 = (longlong *)plVar2[uVar15 + 0x43];
          uVar15 = uVar15 - 1;
          uVar5 = *(ushort *)((longlong)local_160 + 0x21a);
          local_178 = plVar2;
          local_170 = local_110;
          local_168 = uVar15;
          local_158 = uVar17;
          local_150 = plVar12;
          local_148 = uVar17;
          if (0xb < (uint)uVar6 + (uint)uVar5 + 1) {
            <alloc[12e961f32105355]::collections::btree::node::BalancingContext<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
            ::bulk_steal_left(&local_178,5 - uVar8);
            break;
          }
          uVar14 = uVar5 + uVar8 + 1;
          if (0xb < uVar14) {
            (*(code *)PTR_panic_00799338)
                      (plVar12,&
                               PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796098
                      );
            goto LAB_0072de55;
          }
          uVar6 = *(ushort *)((longlong)plVar2 + 0x21a);
          uVar9 = (ulonglong)uVar5;
          plVar16 = local_160;
          local_a8 = plVar12;
          local_40 = uVar8;
        }
        local_60 = uVar9 + 1;
        local_108 = (ulonglong)uVar6;
        *(short *)((longlong)plVar16 + 0x21a) = (short)uVar14;
        local_c8 = plVar2[uVar15 * 3 + 3];
        plVar12 = plVar2 + uVar15 * 3 + 1;
        local_d8 = (undefined4)*plVar12;
        uStack_d4 = *(undefined4 *)((longlong)plVar12 + 4);
        uStack_d0 = (undefined4)plVar12[1];
        uStack_cc = *(undefined4 *)((longlong)plVar12 + 0xc);
        lVar18 = ~uVar15 + local_108;
        local_c0 = uVar14;
        (*(code *)PTR_memmove_00799258)(local_108,lVar18 * 0x18);
        lVar10 = (ulonglong)(uint)((int)uVar9 * 8) * 3;
        puVar1 = (undefined4 *)((longlong)plVar16 + lVar10 + 8);
        *puVar1 = local_d8;
        puVar1[1] = uStack_d4;
        puVar1[2] = uStack_d0;
        puVar1[3] = uStack_cc;
        *(longlong *)((longlong)plVar16 + lVar10 + 0x18) = local_c8;
        local_100 = (ulonglong)(uint)((int)local_60 * 8) * 3;
        local_f8 = (ulonglong)(uint)((int)local_40 * 8) * 3;
        local_f0 = uVar9;
        (*(code *)PTR_memcpy_00799008)();
        local_c8 = plVar2[uVar15 * 3 + 0x24];
        plVar12 = plVar2 + uVar15 * 3 + 0x22;
        local_d8 = (undefined4)*plVar12;
        uStack_d4 = *(undefined4 *)((longlong)plVar12 + 4);
        uStack_d0 = (undefined4)plVar12[1];
        uStack_cc = *(undefined4 *)((longlong)plVar12 + 0xc);
        (*(code *)PTR_memmove_00799258)(uVar15 * 3,lVar18 * 0x18);
        puVar1 = (undefined4 *)((longlong)plVar16 + lVar10 + 0x110);
        *puVar1 = local_d8;
        puVar1[1] = uStack_d4;
        puVar1[2] = uStack_d0;
        puVar1[3] = uStack_cc;
        *(longlong *)((longlong)plVar16 + lVar10 + 0x120) = local_c8;
        uVar19 = (*(code *)PTR_memcpy_00799008)(local_d8,local_f8);
        uVar9 = uVar15 + 1;
        uVar19 = (*(code *)PTR_memmove_00799258)(uVar19,lVar18 * 8);
        lVar10 = local_60;
        uVar17 = local_110;
        if (uVar9 < local_108) {
          uVar11 = (int)local_108 - (int)uVar9 & 3;
          uVar14 = (ulonglong)uVar11;
          uVar8 = uVar9;
          if (uVar11 != 0) {
            do {
              uVar9 = uVar8 + 1;
              puVar3 = (undefined8 *)plVar2[uVar8 + 0x44];
              *puVar3 = plVar2;
              *(short *)(puVar3 + 0x43) = (short)uVar8;
              uVar14 = uVar14 - 1;
              uVar8 = uVar9;
            } while (uVar14 != 0);
          }
          if (2 < ((int)local_108 - (int)uVar15) - 2U) {
            do {
              puVar3 = (undefined8 *)plVar2[uVar9 + 0x44];
              *puVar3 = plVar2;
              sVar7 = (short)uVar9;
              *(short *)(puVar3 + 0x43) = sVar7;
              puVar3 = (undefined8 *)plVar2[uVar9 + 0x45];
              *puVar3 = plVar2;
              *(short *)(puVar3 + 0x43) = sVar7 + 1;
              puVar3 = (undefined8 *)plVar2[uVar9 + 0x46];
              *puVar3 = plVar2;
              *(short *)(puVar3 + 0x43) = sVar7 + 2;
              puVar3 = (undefined8 *)plVar2[uVar9 + 0x47];
              *puVar3 = plVar2;
              *(short *)(puVar3 + 0x43) = sVar7 + 3;
              uVar9 = uVar9 + 4;
            } while (uVar9 != local_108);
          }
        }
        *(short *)((longlong)plVar2 + 0x21a) = *(short *)((longlong)plVar2 + 0x21a) + -1;
        if (1 < local_110) {
          if (local_40 + 1 != local_c0 - local_f0) {
            (*(code *)PTR_panic_00799338)
                      (uVar19,&
                              PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796420
                      );
            goto LAB_0072de55;
          }
          uVar19 = (*(code *)PTR_memcpy_00799008)(uVar19,(int)(local_40 + 1) << 3);
          iVar13 = (int)lVar10;
          uVar11 = ((int)local_c0 - iVar13) + 1U & 3;
          uVar9 = (ulonglong)uVar11;
          if (uVar11 != 0) {
            lVar18 = lVar10;
            do {
              lVar10 = lVar18 + 1;
              puVar3 = (undefined8 *)plVar16[lVar18 + 0x44];
              *puVar3 = plVar16;
              *(short *)(puVar3 + 0x43) = (short)lVar18;
              uVar9 = uVar9 - 1;
              lVar18 = lVar10;
            } while (uVar9 != 0);
          }
          if (2 < (uint)((int)local_c0 - iVar13)) {
            do {
              puVar3 = (undefined8 *)plVar16[lVar10 + 0x44];
              *puVar3 = plVar16;
              sVar7 = (short)lVar10;
              *(short *)(puVar3 + 0x43) = sVar7;
              puVar3 = (undefined8 *)plVar16[lVar10 + 0x45];
              *puVar3 = plVar16;
              *(short *)(puVar3 + 0x43) = sVar7 + 1;
              puVar3 = (undefined8 *)plVar16[lVar10 + 0x46];
              *puVar3 = plVar16;
              *(short *)(puVar3 + 0x43) = sVar7 + 2;
              puVar3 = (undefined8 *)plVar16[lVar10 + 0x47];
              *puVar3 = plVar16;
              uVar9 = lVar10 + 3;
              *(short *)(puVar3 + 0x43) = (short)uVar9;
              lVar10 = lVar10 + 4;
            } while (uVar9 != local_c0);
          }
        }
        uVar9 = local_b8;
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,8);
        uVar6 = *(ushort *)((longlong)plVar2 + 0x21a);
        plVar12 = plVar2;
      } while (uVar6 < 5);
    }
  }
LAB_0072d87a:
  local_e8[4] = CONCAT44(uStack_11c,uStack_120);
  local_e8[5] = local_118;
  local_e8[2] = local_130;
  local_e8[3] = CONCAT44(uStack_124,local_128);
  *local_e8 = CONCAT44(uStack_13c,local_140);
  local_e8[1] = CONCAT44(uStack_134,uStack_138);
  local_e8[6] = local_b0;
  local_e8[7] = uVar9;
  local_e8[8] = local_38;
  return;
}


