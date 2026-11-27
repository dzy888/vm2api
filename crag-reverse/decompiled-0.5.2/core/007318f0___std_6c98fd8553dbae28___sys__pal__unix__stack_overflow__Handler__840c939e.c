// 007318f0 <std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::Handler>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::Handler>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::Handler>(longlong param_1)

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
  longlong lStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  ulonglong uStack_b8;
  undefined4 *puStack_b0;
  byte bStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  longlong *plStack_70;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  char cStack_31;
  
  if (param_1 != 0) {
    uVar10 = (*(code *)PTR_getauxval_0079b0f8)();
    uStack_90 = 0x2000;
    if (0x2000 < uVar10) {
      uStack_90 = uVar10;
    }
    lStack_a0 = 0;
    uStack_98 = 2;
    (*(code *)PTR_sigaltstack_0079b100)();
    (*(code *)PTR_munmap_007990b8)();
  }
  uVar10 = (*(code *)PTR___errno_location_007990a0)();
  LOCK();
  bVar19 = std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::LOCK == 0;
  if (bVar19) {
    std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::LOCK = 1;
  }
  UNLOCK();
  uVar20 = extraout_XMM0_Da;
  if (!bVar19) {
    uVar20 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
    uVar20 = extraout_XMM0_Da_00;
  }
  puVar6 = PTR_pause_0079afe8;
  uStack_b8 = (ulonglong)(DAT_0079d07c != '\0');
  puStack_b0 = &std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::LOCK;
  uVar11 = 0;
  LOCK();
  bVar19 = std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::SPIN_LOCK == 0;
  if (bVar19) {
    std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::SPIN_LOCK = uVar10;
  }
  else {
    uVar11 = std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::SPIN_LOCK;
  }
  UNLOCK();
  bStack_a8 = bVar8;
  while (!bVar19) {
    if (uVar11 == uVar10) {
      (*(code *)PTR_panic_fmt_007991a8)(uVar20,&PTR_s__rustc_48a229ceaefd4985c50990b14_007970b8);
      goto LAB_007619a7;
    }
    uVar20 = (*(code *)puVar6)();
    uVar11 = 0;
    LOCK();
    bVar19 = std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::SPIN_LOCK == 0;
    if (bVar19) {
      std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::SPIN_LOCK = uVar10;
    }
    else {
      uVar11 = std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::SPIN_LOCK;
    }
    UNLOCK();
  }
  if (std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO ==
      (undefined8 *)0x0) {
LAB_007618c1:
    std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::SPIN_LOCK = 0;
    if (((bVar8 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
      DAT_0079d07c = '\x01';
    }
    iVar7 = std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::LOCK;
    LOCK();
    std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::LOCK = 0;
    UNLOCK();
    if (iVar7 == 2) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
    }
    return;
  }
  uVar13 = (int)std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO + 7;
  lVar15 = 0;
  lVar12 = std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO;
  puVar14 = std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO;
  do {
    uVar11 = (ulonglong)*(ushort *)((longlong)puVar14 + 0x21a);
    lVar18 = (ulonglong)*(ushort *)((longlong)puVar14 + 0x21a) << 3;
    uVar17 = 0xffffffffffffffff;
    do {
      uVar16 = uVar17;
      if (lVar18 == 0) goto LAB_00761633;
      uVar3 = puVar14[uVar16 + 2];
      uVar17 = uVar16 + 1;
      lVar18 = lVar18 + -8;
    } while ((char)((uVar3 < uVar10) - (uVar10 < uVar3)) == '\x01');
    uVar11 = uVar17;
    if (uVar3 < uVar10 == uVar10 < uVar3) {
      cStack_31 = '\0';
      if (lVar12 == 0) {
        uStack_50 = 0;
        uStack_58 = puVar14;
        uStack_48 = uVar17;
        uVar20 = <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
                 ::remove_leaf_kv::
                 <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
                           (&lStack_a0,&uStack_58,&cStack_31);
        lVar12 = CONCAT44(uStack_94,uStack_98);
        uVar10 = uStack_90;
        puVar14 = uStack_58;
      }
      else {
        lStack_d0 = puVar14[uVar16 + 0x45];
        uVar10 = lVar12 - 1;
        if (uVar10 != 0) {
          if ((uVar10 & 7) != 0) {
            uVar11 = 1;
            do {
              lStack_d0 = *(longlong *)
                           (lStack_d0 + 0x220 + (ulonglong)*(ushort *)(lStack_d0 + 0x21a) * 8);
              uVar10 = uVar11 + 1;
              bVar19 = uVar11 != (uVar13 & 7);
              uVar11 = uVar10;
            } while (bVar19);
            uVar10 = lVar12 - uVar10;
          }
          if (6 < (std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO -
                  lVar15) - 2U) {
            do {
              lVar12 = *(longlong *)
                        (lStack_d0 + 0x220 + (ulonglong)*(ushort *)(lStack_d0 + 0x21a) * 8);
              lVar12 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              lVar12 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              lVar12 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              lVar12 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              lVar12 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              lVar12 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8);
              lStack_d0 = *(longlong *)(lVar12 + 0x220 + (ulonglong)*(ushort *)(lVar12 + 0x21a) * 8)
              ;
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
          }
        }
        lStack_c0 = (ulonglong)*(ushort *)(lStack_d0 + 0x21a) - 1;
        uStack_c8 = 0;
        <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
        ::remove_leaf_kv::
        <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
                  (&lStack_a0,&lStack_d0,&cStack_31);
        if (*(ushort *)((longlong)plStack_70 + 0x21a) <= uStack_60) {
          do {
            puVar1 = (ushort *)(plStack_70 + 0x43);
            uStack_60 = (ulonglong)*puVar1;
            plStack_70 = (longlong *)*plStack_70;
          } while (*(ushort *)((longlong)plStack_70 + 0x21a) <= *puVar1);
        }
        plStack_70[uStack_60 + 1] = lStack_a0;
        lVar12 = plStack_70[uStack_60 * 5 + 0xc];
        uVar10 = plStack_70[uStack_60 * 5 + 0xd];
        plStack_70[uStack_60 * 5 + 0xc] = CONCAT44(uStack_94,uStack_98);
        plStack_70[uStack_60 * 5 + 0xd] = uStack_90;
        uStack_58._0_4_ = SUB84(puStack_88,0);
        uStack_58._4_4_ = (undefined4)((ulonglong)puStack_88 >> 0x20);
        uStack_50._0_4_ = (undefined4)uStack_80;
        uStack_50._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
        plVar2 = plStack_70 + uStack_60 * 5 + 0xe;
        *(undefined4 *)plVar2 = (undefined4)uStack_58;
        *(undefined4 *)((longlong)plVar2 + 4) = uStack_58._4_4_;
        *(undefined4 *)(plVar2 + 1) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)plVar2 + 0xc) = uStack_50._4_4_;
        plStack_70[uStack_60 * 5 + 0x10] = uStack_78;
        puVar14 = puStack_88;
        uStack_50 = uStack_80;
        uStack_48 = uStack_78;
        uVar20 = (undefined4)uStack_58;
      }
      uStack_58 = puVar14;
      std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO =
           std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO + -1;
      if (cStack_31 == '\x01') {
        if (std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO ==
            (undefined8 *)0x0) {
          (*(code *)PTR_unwrap_failed_00799278)();
LAB_007619a7:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO == 0) {
          (*(code *)PTR_panic_00799338)
                    (uVar20,&
                            PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796198
                    );
          goto LAB_007619a7;
        }
        puVar14 = (undefined8 *)
                  std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO
                  [0x44];
        std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO =
             std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO + -1;
        std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::THREAD_INFO = puVar14;
        *puVar14 = 0;
        uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(puVar14,8);
      }
      if ((lVar12 != 0) && (uVar10 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
      }
      goto LAB_007618c1;
    }
LAB_00761633:
    if (lVar12 == 0) goto LAB_007618c1;
    puVar14 = (undefined8 *)puVar14[uVar11 + 0x44];
    lVar12 = lVar12 + -1;
    lVar15 = lVar15 + 1;
    uVar13 = (uint)(byte)((char)uVar13 + 7);
  } while( true );
}


