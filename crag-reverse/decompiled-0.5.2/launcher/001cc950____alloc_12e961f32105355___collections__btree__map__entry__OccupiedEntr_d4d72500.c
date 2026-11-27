// 001cc950 <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>::remove_kv::{closure#0},alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   usize, std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,
   alloc[12e961f32105355]::collections::btree::node::marker::KV>>::remove_leaf_kv::<<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<usize,
   std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>::remove_kv::{closure#0},
   alloc[12e961f32105355]::alloc::Global> */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
::remove_leaf_kv::
<<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
          (longlong *param_1,longlong *param_2,undefined1 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  longlong *local_180;
  ulonglong local_178;
  ulonglong local_170;
  longlong *local_168;
  ulonglong local_160;
  longlong *local_158;
  ulonglong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined1 *local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong *local_90;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  plVar16 = (longlong *)*param_2;
  uVar11 = param_2[2];
  uVar6 = *(ushort *)((longlong)plVar16 + 0x21a);
  local_e0 = plVar16[uVar11 + 1];
  local_e8 = param_1;
  local_d8 = param_3;
  (*(code *)PTR_memmove_00219fb0)(param_4,(~uVar11 + (ulonglong)uVar6) * 8);
  local_c0 = plVar16[uVar11 * 5 + 0xc];
  local_c8 = plVar16[uVar11 * 5 + 0xd];
  local_108 = plVar16[uVar11 * 5 + 0x10];
  plVar12 = plVar16 + uVar11 * 5 + 0xe;
  local_118 = (undefined4)*plVar12;
  uStack_114 = *(undefined4 *)((longlong)plVar12 + 4);
  uStack_110 = (undefined4)plVar12[1];
  uStack_10c = *(undefined4 *)((longlong)plVar12 + 0xc);
  local_38 = uVar11;
  (*(code *)PTR_memmove_00219fb0)(local_108,(~uVar11 + (ulonglong)uVar6) * 0x28);
  uVar5 = uVar6 - 1;
  *(ushort *)((longlong)plVar16 + 0x21a) = uVar5;
  uVar11 = param_2[1];
  if (4 < uVar5) goto LAB_001ccba2;
  plVar12 = (longlong *)*plVar16;
  if (plVar12 == (longlong *)0x0) {
LAB_001ccb69:
    local_68 = plVar16;
    local_60 = uVar11;
    local_58 = local_38;
  }
  else {
    uVar8 = uVar11 + 1;
    uVar13 = (ulonglong)*(ushort *)(plVar16 + 0x43);
    if (uVar13 == 0) {
      if (*(short *)((longlong)plVar12 + 0x21a) == 0) {
LAB_001cd133:
        (*(code *)PTR_panic_fmt_0021a010)
                  (plVar12,&
                           PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217c00
                  );
LAB_001cd14c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_80 = (longlong *)plVar12[0x45];
      local_98 = 0;
      local_90 = plVar16;
      if (0xb < (uint)uVar6 + (uint)*(ushort *)((longlong)local_80 + 0x21a)) {
        local_a8 = plVar12;
        local_a0 = uVar8;
        local_88 = uVar11;
        local_78 = uVar11;
        <alloc[12e961f32105355]::collections::btree::node::BalancingContext<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>
        ::bulk_steal_right(&local_a8,1);
        goto LAB_001ccb69;
      }
      local_a8 = plVar12;
      local_a0 = uVar8;
      local_88 = uVar11;
      local_78 = uVar11;
      <alloc[12e961f32105355]::collections::btree::node::BalancingContext<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>
      ::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
                (&local_68,&local_a8,0,local_38);
    }
    else {
      local_90 = (longlong *)plVar12[uVar13 + 0x43];
      local_98 = uVar13 - 1;
      local_80 = plVar16;
      if (0xb < (uint)uVar5 + (uint)*(ushort *)((longlong)local_90 + 0x21a) + 1) {
        local_a8 = plVar12;
        local_a0 = uVar8;
        local_88 = uVar11;
        local_78 = uVar11;
        <alloc[12e961f32105355]::collections::btree::node::BalancingContext<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>
        ::bulk_steal_left(&local_a8,1);
        local_38 = local_38 + 1;
        goto LAB_001ccb69;
      }
      local_a8 = plVar12;
      local_a0 = uVar8;
      local_88 = uVar11;
      local_78 = uVar11;
      <alloc[12e961f32105355]::collections::btree::node::BalancingContext<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>
      ::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
                (&local_68,&local_a8,1,local_38);
    }
  }
  local_b0 = local_60;
  local_38 = local_58;
  plVar12 = (longlong *)*local_68;
  plVar16 = local_68;
  if ((plVar12 != (longlong *)0x0) && (uVar6 = *(ushort *)((longlong)plVar12 + 0x21a), uVar6 < 5)) {
    uVar11 = local_60 + 1;
    local_b8 = local_68;
    do {
      plVar16 = local_b8;
      uVar8 = (ulonglong)uVar6;
      plVar1 = (longlong *)*plVar12;
      if (plVar1 == (longlong *)0x0) {
        if (uVar8 == 0) {
          *local_d8 = 1;
        }
        break;
      }
      local_d0 = uVar11 + 1;
      uVar13 = (ulonglong)*(ushort *)(plVar12 + 0x43);
      if (uVar13 == 0) {
        uVar6 = *(ushort *)((longlong)plVar1 + 0x21a);
        if (uVar6 == 0) goto LAB_001cd133;
        local_80 = (longlong *)plVar1[0x45];
        local_98 = 0;
        uVar9 = (ulonglong)*(ushort *)((longlong)local_80 + 0x21a);
        uVar14 = uVar8 + uVar9 + 1;
        local_a8 = plVar1;
        local_a0 = local_d0;
        local_90 = plVar12;
        local_88 = uVar11;
        local_78 = uVar11;
        if (0xb < uVar14) {
          <alloc[12e961f32105355]::collections::btree::node::BalancingContext<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>
          ::bulk_steal_right(&local_a8,5 - uVar8);
          break;
        }
        uVar13 = 0;
        plVar16 = plVar12;
        local_50 = local_80;
        local_48 = uVar8;
      }
      else {
        local_168 = (longlong *)plVar1[uVar13 + 0x43];
        uVar13 = uVar13 - 1;
        uVar5 = *(ushort *)((longlong)local_168 + 0x21a);
        local_180 = plVar1;
        local_178 = local_d0;
        local_170 = uVar13;
        local_160 = uVar11;
        local_158 = plVar12;
        local_150 = uVar11;
        if (0xb < (uint)uVar6 + (uint)uVar5 + 1) {
          <alloc[12e961f32105355]::collections::btree::node::BalancingContext<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>
          ::bulk_steal_left(&local_180,5 - uVar8);
          plVar16 = local_b8;
          break;
        }
        uVar14 = uVar5 + uVar8 + 1;
        if (0xb < uVar14) {
          (*(code *)PTR_panic_00219ca8)
                    (plVar12,&
                             PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217280
                    );
          goto LAB_001cd14c;
        }
        uVar6 = *(ushort *)((longlong)plVar1 + 0x21a);
        uVar9 = uVar8;
        plVar16 = local_168;
        local_50 = plVar12;
        local_48 = (ulonglong)uVar5;
      }
      local_40 = local_48 + 1;
      local_100 = (ulonglong)uVar6;
      *(short *)((longlong)plVar16 + 0x21a) = (short)uVar14;
      local_70 = plVar1[uVar13 + 1];
      lVar18 = ~uVar13 + local_100;
      lVar19 = lVar18 * 8;
      local_f8 = uVar14;
      (*(code *)PTR_memmove_00219fb0)(local_70,lVar19);
      plVar16[local_48 + 1] = local_70;
      puVar4 = PTR_memcpy_00219c60;
      local_70 = (ulonglong)(uint)((int)uVar9 * 8);
      local_f0 = uVar9;
      (*(code *)PTR_memcpy_00219c60)();
      local_128 = plVar1[uVar13 * 5 + 0x10];
      plVar12 = plVar1 + uVar13 * 5 + 0xc;
      local_148 = (undefined4)*plVar12;
      uStack_144 = *(undefined4 *)((longlong)plVar12 + 4);
      uStack_140 = (undefined4)plVar12[1];
      uStack_13c = *(undefined4 *)((longlong)plVar12 + 0xc);
      plVar12 = plVar1 + uVar13 * 5 + 0xe;
      local_138 = (undefined4)*plVar12;
      uStack_134 = *(undefined4 *)((longlong)plVar12 + 4);
      uStack_130 = (undefined4)plVar12[1];
      uStack_12c = *(undefined4 *)((longlong)plVar12 + 0xc);
      (*(code *)PTR_memmove_00219fb0)(local_128,lVar18 * 0x28);
      plVar12 = plVar16 + local_48 * 5 + 0xc;
      *(undefined4 *)plVar12 = local_148;
      *(undefined4 *)((longlong)plVar12 + 4) = uStack_144;
      *(undefined4 *)(plVar12 + 1) = uStack_140;
      *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_13c;
      plVar12 = plVar16 + local_48 * 5 + 0xe;
      *(undefined4 *)plVar12 = local_138;
      *(undefined4 *)((longlong)plVar12 + 4) = uStack_134;
      *(undefined4 *)(plVar12 + 1) = uStack_130;
      *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_12c;
      plVar16[local_48 * 5 + 0x10] = local_128;
      uVar20 = (*(code *)puVar4)(local_128,local_70 * 5);
      uVar11 = uVar13 + 1;
      uVar20 = (*(code *)PTR_memmove_00219fb0)(uVar20,lVar19);
      lVar18 = local_40;
      uVar8 = local_f8;
      if (uVar11 < local_100) {
        uVar10 = (int)local_100 - (int)uVar11 & 3;
        uVar14 = (ulonglong)uVar10;
        uVar9 = uVar11;
        if (uVar10 != 0) {
          do {
            uVar9 = uVar11 + 1;
            puVar2 = (undefined8 *)plVar1[uVar11 + 0x44];
            *puVar2 = plVar1;
            *(short *)(puVar2 + 0x43) = (short)uVar11;
            uVar14 = uVar14 - 1;
            uVar11 = uVar9;
          } while (uVar14 != 0);
        }
        if (2 < ((int)local_100 - (int)uVar13) - 2U) {
          do {
            puVar2 = (undefined8 *)plVar1[uVar9 + 0x44];
            *puVar2 = plVar1;
            sVar7 = (short)uVar9;
            *(short *)(puVar2 + 0x43) = sVar7;
            puVar2 = (undefined8 *)plVar1[uVar9 + 0x45];
            *puVar2 = plVar1;
            *(short *)(puVar2 + 0x43) = sVar7 + 1;
            puVar2 = (undefined8 *)plVar1[uVar9 + 0x46];
            *puVar2 = plVar1;
            *(short *)(puVar2 + 0x43) = sVar7 + 2;
            puVar2 = (undefined8 *)plVar1[uVar9 + 0x47];
            *puVar2 = plVar1;
            *(short *)(puVar2 + 0x43) = sVar7 + 3;
            uVar9 = uVar9 + 4;
          } while (uVar9 != local_100);
        }
      }
      *(short *)((longlong)plVar1 + 0x21a) = *(short *)((longlong)plVar1 + 0x21a) + -1;
      if (1 < local_d0) {
        if (local_f0 + 1 != local_f8 - local_48) {
          (*(code *)PTR_panic_00219ca8)
                    (uVar20,&
                            PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217590
                    );
          goto LAB_001cd14c;
        }
        uVar20 = (*(code *)PTR_memcpy_00219c60)(uVar20,(int)(local_f0 + 1) << 3);
        iVar15 = (int)uVar8;
        iVar17 = (int)lVar18;
        uVar10 = (iVar15 - iVar17) + 1U & 3;
        uVar11 = (ulonglong)uVar10;
        if (uVar10 != 0) {
          lVar19 = lVar18;
          do {
            lVar18 = lVar19 + 1;
            puVar2 = (undefined8 *)plVar16[lVar19 + 0x44];
            *puVar2 = plVar16;
            *(short *)(puVar2 + 0x43) = (short)lVar19;
            uVar11 = uVar11 - 1;
            lVar19 = lVar18;
          } while (uVar11 != 0);
        }
        if (2 < (uint)(iVar15 - iVar17)) {
          do {
            puVar2 = (undefined8 *)plVar16[lVar18 + 0x44];
            *puVar2 = plVar16;
            sVar7 = (short)lVar18;
            *(short *)(puVar2 + 0x43) = sVar7;
            puVar2 = (undefined8 *)plVar16[lVar18 + 0x45];
            *puVar2 = plVar16;
            *(short *)(puVar2 + 0x43) = sVar7 + 1;
            puVar2 = (undefined8 *)plVar16[lVar18 + 0x46];
            *puVar2 = plVar16;
            *(short *)(puVar2 + 0x43) = sVar7 + 2;
            puVar2 = (undefined8 *)plVar16[lVar18 + 0x47];
            *puVar2 = plVar16;
            uVar11 = lVar18 + 3;
            *(short *)(puVar2 + 0x43) = (short)uVar11;
            lVar18 = lVar18 + 4;
          } while (uVar11 != uVar8);
        }
      }
      uVar11 = local_d0;
      (*(code *)PTR___rust_dealloc_00219c40)(uVar20,8);
      uVar6 = *(ushort *)((longlong)plVar1 + 0x21a);
      plVar16 = local_b8;
      plVar12 = plVar1;
    } while (uVar6 < 5);
  }
  uVar11 = local_b0;
LAB_001ccba2:
  *local_e8 = local_e0;
  local_e8[1] = local_c0;
  local_e8[2] = local_c8;
  local_e8[3] = CONCAT44(uStack_114,local_118);
  local_e8[4] = CONCAT44(uStack_10c,uStack_110);
  local_e8[5] = local_108;
  local_e8[6] = (longlong)plVar16;
  local_e8[7] = uVar11;
  local_e8[8] = local_38;
  return;
}


