// 00316520 {closure#0}

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_inbound_routing::{closure#0} */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_inbound_routing::_closure_0_
          (undefined8 *param_1,longlong *param_2)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined *puVar6;
  longlong lVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar16 [16];
  byte local_164;
  longlong *local_160;
  undefined1 (*local_158) [16];
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined1 (*local_138) [16];
  undefined1 (*local_130) [16];
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_b0 = param_1;
  if ((char)param_2[3] != '\0') {
    if ((char)param_2[3] == '\x01') {
      (*(code *)PTR_panic_const_async_fn_resumed_007991b8)();
    }
    (*(code *)PTR_panic_const_async_fn_resumed_panic_007991b0)();
    LOCK();
    *local_160 = *local_160 + -1;
    UNLOCK();
    if (*local_160 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(&local_160);
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_a8);
    *(undefined1 *)(local_148 + 3) = 2;
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  lVar2 = *param_2;
  auVar16 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2[1],param_2[2]);
  lVar11 = auVar16._8_8_;
  local_140 = auVar16._0_8_;
  if (lVar11 != 0) {
    local_158 = (undefined1 (*) [16])(lVar2 + 0x1d0);
    LOCK();
    bVar14 = *(int *)(lVar2 + 0x1d0) == 0;
    if (bVar14) {
      *(int *)(lVar2 + 0x1d0) = 1;
    }
    UNLOCK();
    if (!bVar14) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar8 = 0;
      cVar9 = *(char *)(lVar2 + 0x1d4);
    }
    else {
      bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar8 = bVar8 ^ 1;
      cVar9 = *(char *)(lVar2 + 0x1d4);
    }
    if (cVar9 != '\0') {
      local_130._1_7_ = (undefined7)((ulonglong)local_130 >> 8);
      local_130 = (undefined1 (*) [16])CONCAT71(local_130._1_7_,bVar8);
      local_138 = local_158;
      (*(code *)PTR_unwrap_failed_00799028)
                (&
                 PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>_00787498
                 ,&local_138,
                 &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_00786d88);
LAB_00316bdc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_100 = lVar2 + 0x1d8;
    <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::resolve_inbound_id
              (&local_f8,local_100,local_140,lVar11);
    if ((int)local_c8 != 2) {
      if (((bVar8 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
         (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
        *(undefined1 *)(lVar2 + 0x1d4) = 1;
      }
      LOCK();
      iVar10 = *(int *)*local_158;
      *(undefined4 *)*local_158 = 0;
      UNLOCK();
      if (iVar10 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      goto LAB_003167f7;
    }
    if (((bVar8 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
      *(undefined1 *)(lVar2 + 0x1d4) = 1;
    }
    LOCK();
    iVar10 = *(int *)(lVar2 + 0x1d0);
    *(int *)(lVar2 + 0x1d0) = 0;
    UNLOCK();
    if (iVar10 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    pauVar1 = (undefined1 (*) [16])(lVar2 + 0x340);
    LOCK();
    bVar14 = *(int *)(lVar2 + 0x340) == 0;
    if (bVar14) {
      *(int *)(lVar2 + 0x340) = 1;
    }
    UNLOCK();
    if (!bVar14) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) == 0) {
      bVar8 = 0;
      cVar9 = *(char *)(lVar2 + 0x344);
    }
    else {
      bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar8 = bVar8 ^ 1;
      cVar9 = *(char *)(lVar2 + 0x344);
    }
    if (cVar9 != '\0') {
      local_130._1_7_ = (undefined7)((ulonglong)local_130 >> 8);
      local_130 = (undefined1 (*) [16])CONCAT71(local_130._1_7_,bVar8);
      local_138 = pauVar1;
      (*(code *)PTR_unwrap_failed_00799028)
                (&
                 PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>_007873d8
                 ,&local_138,
                 &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_00786da0);
      goto LAB_00316bdc;
    }
    local_138 = *(undefined1 (**) [16])(lVar2 + 0x348);
    local_128 = *local_138 + *(longlong *)(lVar2 + 0x350) + 1;
    auVar16 = *local_138;
    uStack_118 = *(undefined8 *)(lVar2 + 0x360);
    local_130 = local_138 + 1;
    uVar5 = (ulonglong)local_120 >> 0x10;
    local_120 = CONCAT62((int6)uVar5,
                         ~((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar16[0xf] >> 7) << 0xf));
    <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>,core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<std[6c98fd8553dbae28]::collections::hash::map::Values<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>>>>
    ::from_iter(&local_88,&local_138);
    if (((bVar8 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
      *(undefined1 *)(lVar2 + 0x344) = 1;
    }
    LOCK();
    iVar10 = *(int *)*pauVar1;
    *(undefined4 *)*pauVar1 = 0;
    UNLOCK();
    if (iVar10 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    local_90 = local_80 + local_78;
    local_a8 = local_80;
    local_a0 = local_80;
    local_98 = local_88;
    local_148 = param_2;
    if (local_78 != 0) {
      lVar12 = local_78 << 3;
      puVar4 = local_80;
      do {
        local_160 = (longlong *)*puVar4;
        local_a0 = puVar4 + 1;
        uVar15 = <craggemini_core[66f3c71560d70857]::pool::AccountPool>::lookup_inbound_session
                           (&local_70,local_160 + 2,local_140,lVar11);
        lVar7 = local_60;
        if (local_58 != 2) {
          local_108 = local_70;
          local_150 = uStack_68;
          LOCK();
          bVar14 = *(int *)(lVar2 + 0x1d0) == 0;
          if (bVar14) {
            *(int *)(lVar2 + 0x1d0) = 1;
          }
          UNLOCK();
          if (!bVar14) {
            uVar15 = (*(code *)PTR_lock_contended_00798fe0)();
          }
          if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
            local_164 = 0;
            cVar9 = *(char *)(lVar2 + 0x1d4);
            param_2 = local_148;
          }
          else {
            local_164 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            local_164 = local_164 ^ 1;
            cVar9 = *(char *)(lVar2 + 0x1d4);
            uVar15 = extraout_XMM0_Qa;
            param_2 = local_148;
          }
          local_148 = param_2;
          if (cVar9 != '\0') {
            local_130._1_7_ = (undefined7)((ulonglong)local_130 >> 8);
            local_130 = (undefined1 (*) [16])CONCAT71(local_130._1_7_,local_164);
            local_138 = local_158;
            (*(code *)PTR_unwrap_failed_00799028)
                      (&
                       PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>_00787498
                       ,&local_138,
                       &
                       PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_00786db8
                      );
            goto LAB_00316bdc;
          }
          if ((lVar7 == lVar11) &&
             (iVar10 = (*(code *)PTR_bcmp_00799020)(uVar15,lVar11), iVar10 == 0)) {
            <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::bind_conversation
                      (local_100,local_150,lVar11,local_160[3],local_160[4]);
          }
          else {
            uVar15 = 0;
            if ((local_58 & 1) != 0) {
              uVar15 = local_50;
            }
            <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::bind_response
                      (local_100,local_140,lVar11,local_160[3],local_160[4],local_150,lVar7,uVar15);
          }
          plVar13 = local_160 + 2;
          (*(code *)PTR_clone_00798fd0)();
          local_110 = local_60;
          local_120 = local_70;
          uStack_118 = uStack_68;
          local_128 = (undefined1 *)local_38;
          local_f8 = local_48;
          uStack_f0 = uStack_40;
          local_e8 = local_38;
          uStack_e0 = local_70;
          local_d8 = uStack_68;
          lStack_d0 = local_60;
          local_c8 = local_58;
          local_c0 = local_50;
          if (((local_164 == 0) &&
              ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
             (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
            *(undefined1 *)(lVar2 + 0x1d4) = 1;
          }
          LOCK();
          iVar10 = *(int *)(lVar2 + 0x1d0);
          *(int *)(lVar2 + 0x1d0) = 0;
          UNLOCK();
          if (iVar10 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          LOCK();
          *local_160 = *local_160 + -1;
          UNLOCK();
          if (*local_160 == 0) {
            <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
            ::drop_slow(&local_160,plVar13);
          }
          <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(&local_a8);
          goto LAB_003167f7;
        }
        LOCK();
        *local_160 = *local_160 + -1;
        UNLOCK();
        if (*local_160 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(&local_160);
        }
        lVar12 = lVar12 + -8;
        puVar4 = puVar4 + 1;
      } while (lVar12 != 0);
    }
    param_2 = local_148;
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_a8);
  }
  local_c8 = 2;
LAB_003167f7:
  local_b0[6] = local_c8;
  local_b0[7] = local_c0;
  local_b0[4] = local_d8;
  local_b0[5] = lStack_d0;
  local_b0[2] = local_e8;
  local_b0[3] = uStack_e0;
  *local_b0 = local_f8;
  local_b0[1] = uStack_f0;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}


