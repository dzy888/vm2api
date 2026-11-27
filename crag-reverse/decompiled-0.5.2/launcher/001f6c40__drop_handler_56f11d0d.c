// 001f6c40 drop_handler

/* std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::drop_handler */

void __rustcall
std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::drop_handler(longlong param_1)

{
  ushort *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da_00;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined4 *local_b0;
  byte local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  ulonglong local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  char local_31;
  
  if (param_1 != 0) {
    uVar10 = (*(code *)PTR_getauxval_0021ab50)();
    local_90 = 0x2000;
    if (0x2000 < uVar10) {
      local_90 = uVar10;
    }
    local_a0 = 0;
    local_98 = 2;
    (*(code *)PTR_sigaltstack_0021ab58)();
    (*(code *)PTR_munmap_0021a738)();
  }
  uVar10 = (*(code *)PTR___errno_location_00219f18)();
  LOCK();
  bVar19 = thread_info::LOCK == 0;
  if (bVar19) {
    thread_info::LOCK = 1;
  }
  UNLOCK();
  uVar20 = extraout_XMM0_Da;
  if (!bVar19) {
    uVar20 = (*(code *)PTR_lock_contended_00219d70)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00219d08;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00219d18)();
    bVar8 = bVar8 ^ 1;
    uVar20 = extraout_XMM0_Da_00;
  }
  puVar6 = PTR_pause_0021aa70;
  local_b8 = (ulonglong)(DAT_0021c93c != '\0');
  local_b0 = &thread_info::LOCK;
  uVar11 = 0;
  LOCK();
  bVar19 = thread_info::SPIN_LOCK == 0;
  if (bVar19) {
    thread_info::SPIN_LOCK = uVar10;
  }
  else {
    uVar11 = thread_info::SPIN_LOCK;
  }
  UNLOCK();
  local_a8 = bVar8;
  while (!bVar19) {
    if (uVar11 == uVar10) {
      (*(code *)PTR_panic_fmt_0021a010)(uVar20,&PTR_s__rustc_48a229ceaefd4985c50990b14_00217ff0);
      goto LAB_001f7137;
    }
    uVar20 = (*(code *)puVar6)();
    uVar11 = 0;
    LOCK();
    bVar19 = thread_info::SPIN_LOCK == 0;
    if (bVar19) {
      thread_info::SPIN_LOCK = uVar10;
    }
    else {
      uVar11 = thread_info::SPIN_LOCK;
    }
    UNLOCK();
  }
  if (thread_info::THREAD_INFO == (undefined8 *)0x0) {
LAB_001f7051:
    thread_info::SPIN_LOCK = 0;
    if (((bVar8 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar9 == '\0')) {
      DAT_0021c93c = '\x01';
    }
    iVar7 = thread_info::LOCK;
    LOCK();
    thread_info::LOCK = 0;
    UNLOCK();
    if (iVar7 == 2) {
      (*(code *)PTR_syscall_0021a0a0)(1,0x81);
    }
    return;
  }
  uVar13 = (int)thread_info::THREAD_INFO + 7;
  lVar15 = 0;
  lVar12 = thread_info::THREAD_INFO;
  puVar14 = thread_info::THREAD_INFO;
  do {
    uVar11 = (ulonglong)*(ushort *)((longlong)puVar14 + 0x21a);
    lVar18 = (ulonglong)*(ushort *)((longlong)puVar14 + 0x21a) << 3;
    uVar17 = 0xffffffffffffffff;
    do {
      uVar16 = uVar17;
      if (lVar18 == 0) goto LAB_001f6dc3;
      uVar3 = puVar14[uVar16 + 2];
      uVar17 = uVar16 + 1;
      lVar18 = lVar18 + -8;
    } while ((char)((uVar3 < uVar10) - (uVar10 < uVar3)) == '\x01');
    uVar11 = uVar17;
    if (uVar3 < uVar10 == uVar10 < uVar3) {
      local_31 = '\0';
      if (lVar12 == 0) {
        uStack_50 = 0;
        local_58 = puVar14;
        local_48 = uVar17;
        uVar20 = <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
                 ::remove_leaf_kv::
                 <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
                           (&local_a0,&local_58,&local_31);
        lVar12 = CONCAT44(uStack_94,local_98);
        uVar10 = local_90;
        puVar14 = local_58;
      }
      else {
        local_d0 = puVar14[uVar16 + 0x45];
        uVar10 = lVar12 - 1;
        if (uVar10 != 0) {
          if ((uVar10 & 7) != 0) {
            uVar11 = 1;
            do {
              local_d0 = *(longlong *)
                          (local_d0 + 0x220 + (ulonglong)*(ushort *)(local_d0 + 0x21a) * 8);
              uVar10 = uVar11 + 1;
              bVar19 = uVar11 != (uVar13 & 7);
              uVar11 = uVar10;
            } while (bVar19);
            uVar10 = lVar12 - uVar10;
          }
          if (6 < (thread_info::THREAD_INFO - lVar15) - 2U) {
            do {
              lVar12 = *(longlong *)
                        (local_d0 + 0x220 + (ulonglong)*(ushort *)(local_d0 + 0x21a) * 8);
              lVar12 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              lVar12 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              lVar12 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              lVar12 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              lVar12 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              lVar12 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              local_d0 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
          }
        }
        local_c0 = (ulonglong)*(ushort *)(local_d0 + 0x21a) - 1;
        local_c8 = 0;
        <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
        ::remove_leaf_kv::
        <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
                  (&local_a0,&local_d0,&local_31);
        if (*(ushort *)((longlong)local_70 + 0x21a) <= local_60) {
          do {
            puVar1 = (ushort *)(local_70 + 0x43);
            local_60 = (ulonglong)*puVar1;
            local_70 = (longlong *)*local_70;
          } while (*(ushort *)((longlong)local_70 + 0x21a) <= *puVar1);
        }
        local_70[local_60 + 1] = local_a0;
        lVar12 = local_70[local_60 * 5 + 0xc];
        uVar10 = local_70[local_60 * 5 + 0xd];
        local_70[local_60 * 5 + 0xc] = CONCAT44(uStack_94,local_98);
        local_70[local_60 * 5 + 0xd] = local_90;
        local_58._0_4_ = SUB84(local_88,0);
        local_58._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
        uStack_50._0_4_ = (undefined4)uStack_80;
        uStack_50._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
        plVar2 = local_70 + local_60 * 5 + 0xe;
        *(undefined4 *)plVar2 = (undefined4)local_58;
        *(undefined4 *)((longlong)plVar2 + 4) = local_58._4_4_;
        *(undefined4 *)(plVar2 + 1) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)plVar2 + 0xc) = uStack_50._4_4_;
        local_70[local_60 * 5 + 0x10] = local_78;
        puVar14 = local_88;
        uStack_50 = uStack_80;
        local_48 = local_78;
        uVar20 = (undefined4)local_58;
      }
      local_58 = puVar14;
      thread_info::THREAD_INFO = thread_info::THREAD_INFO + -1;
      if (local_31 == '\x01') {
        if (thread_info::THREAD_INFO == (undefined8 *)0x0) {
          (*(code *)PTR_unwrap_failed_00219e58)();
LAB_001f7137:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (thread_info::THREAD_INFO == 0) {
          (*(code *)PTR_panic_00219ca8)
                    (uVar20,&
                            PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217360
                    );
          goto LAB_001f7137;
        }
        puVar14 = (undefined8 *)thread_info::THREAD_INFO[0x44];
        thread_info::THREAD_INFO = thread_info::THREAD_INFO + -1;
        thread_info::THREAD_INFO = puVar14;
        *puVar14 = 0;
        uVar20 = (*(code *)PTR___rust_dealloc_00219c40)(puVar14,8);
      }
      if ((lVar12 != 0) && (uVar10 != 0)) {
        (*(code *)PTR___rust_dealloc_00219c40)(uVar20,1);
      }
      goto LAB_001f7051;
    }
LAB_001f6dc3:
    if (lVar12 == 0) goto LAB_001f7051;
    puVar14 = (undefined8 *)puVar14[uVar11 + 0x44];
    lVar12 = lVar12 + -1;
    lVar15 = lVar15 + 1;
    uVar13 = (uint)(byte)((char)uVar13 + 7);
  } while( true );
}


