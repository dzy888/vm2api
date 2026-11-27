// 004c8cd0 sample_memory_snapshot

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::sample_memory_snapshot */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::sample_memory_snapshot
          (undefined8 param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  int iVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 (*pauVar10) [16];
  byte bVar11;
  char cVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  undefined1 (*local_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 (*local_88) [16];
  longlong local_80;
  undefined1 (*local_78) [16];
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pauVar1 = (undefined1 (*) [16])(param_2 + 0x340);
  LOCK();
  bVar15 = *(int *)(param_2 + 0x340) == 0;
  if (bVar15) {
    *(int *)(param_2 + 0x340) = 1;
  }
  UNLOCK();
  if (!bVar15) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar8 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  local_98 = param_1;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar11 = 0;
    cVar12 = *(char *)(param_2 + 0x344);
  }
  else {
    bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar11 = bVar11 ^ 1;
    cVar12 = *(char *)(param_2 + 0x344);
  }
  if (cVar12 == '\0') {
    local_f8 = *(undefined1 (**) [16])(param_2 + 0x348);
    local_e8 = *local_f8 + *(longlong *)(param_2 + 0x350) + 1;
    auVar4 = *local_f8;
    local_d8 = *(undefined8 *)(param_2 + 0x360);
    pauStack_f0 = local_f8 + 1;
    uVar7 = (ulonglong)uStack_e0 >> 0x10;
    uStack_e0 = (undefined1 *)
                CONCAT62((int6)uVar7,
                         ~((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar4[0xf] >> 7) << 0xf));
    <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>,core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<std[6c98fd8553dbae28]::collections::hash::map::Values<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>>>>
    ::from_iter(&local_90,&local_f8);
    if (((bVar11 == 0) && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
       (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
      *(undefined1 *)(param_2 + 0x344) = 1;
    }
    LOCK();
    iVar3 = *(int *)*pauVar1;
    *(undefined4 *)*pauVar1 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    local_120 = 0;
    local_118 = 4;
    local_110 = 0;
    uStack_e0 = *local_88 + local_80 * 8;
    local_f8 = local_88;
    pauStack_f0 = local_88;
    local_e8 = (undefined1 *)local_90;
    local_108 = param_2;
    if (local_80 != 0) {
      lVar13 = local_80 << 3;
      pauVar1 = local_88;
      do {
        plVar5 = *(longlong **)*pauVar1;
        local_100 = plVar5;
        pauStack_f0 = (undefined1 (*) [16])(*pauVar1 + 8);
        uVar16 = <craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_child_pids
                           (&local_78,plVar5 + 2);
        pauVar10 = local_78;
        uVar7 = CONCAT44(uStack_64,local_68);
        if ((ulonglong)(local_120 - local_110) < uVar7) {
          uVar16 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_120,local_110,uVar7,4,4);
LAB_004c8e72:
          lVar14 = local_110;
          uVar16 = (*(code *)PTR_memcpy_00799008)(uVar16,uVar7 * 4);
        }
        else {
          lVar14 = local_110;
          if (uVar7 != 0) goto LAB_004c8e72;
        }
        local_110 = lVar14 + uVar7;
        if (pauVar10 != (undefined1 (*) [16])0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,4);
        }
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(&local_100);
        }
        lVar13 = lVar13 + -8;
        pauVar1 = (undefined1 (*) [16])(*pauVar1 + 8);
      } while (lVar13 != 0);
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_f8);
    lVar14 = local_108;
    uVar16 = local_118;
    lVar13 = local_120;
    puVar8 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    local_a0 = local_110;
    piVar2 = (int *)(local_108 + 0x270);
    LOCK();
    bVar15 = *(int *)(local_108 + 0x270) == 0;
    if (bVar15) {
      *(int *)(local_108 + 0x270) = 1;
    }
    UNLOCK();
    if (!bVar15) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) == 0) {
      bVar11 = 0;
    }
    else {
      bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar11 = bVar11 ^ 1;
    }
    local_78 = *(undefined1 (**) [16])(lVar14 + 0x278);
    uStack_70 = *(undefined8 *)(lVar14 + 0x280);
    local_68 = *(undefined4 *)(lVar14 + 0x288);
    uStack_64 = *(undefined4 *)(lVar14 + 0x28c);
    uStack_60 = *(undefined4 *)(lVar14 + 0x290);
    uStack_5c = *(undefined4 *)(lVar14 + 0x294);
    local_58 = *(undefined4 *)(lVar14 + 0x298);
    uStack_54 = *(undefined4 *)(lVar14 + 0x29c);
    uStack_50 = *(undefined4 *)(lVar14 + 0x2a0);
    uStack_4c = *(undefined4 *)(lVar14 + 0x2a4);
    local_48 = *(undefined4 *)(lVar14 + 0x2a8);
    uStack_44 = *(undefined4 *)(lVar14 + 0x2ac);
    uStack_40 = *(undefined4 *)(lVar14 + 0x2b0);
    uStack_3c = *(undefined4 *)(lVar14 + 0x2b4);
    lVar14 = *(longlong *)(lVar14 + 0x2c8);
    if (-1 < lVar14) {
      if (lVar14 == 0) {
        local_b0 = 1;
LAB_004c900a:
        uVar9 = local_98;
        local_f8 = local_78;
        pauStack_f0 = (undefined1 (*) [16])uStack_70;
        local_e8 = (undefined1 *)CONCAT44(uStack_64,local_68);
        uStack_e0 = (undefined1 *)CONCAT44(uStack_5c,uStack_60);
        local_d8 = CONCAT44(uStack_54,local_58);
        uStack_d0 = uStack_50;
        uStack_cc = uStack_4c;
        local_c8 = local_48;
        uStack_c4 = uStack_44;
        uStack_c0 = uStack_40;
        uStack_bc = uStack_3c;
        local_b8 = lVar14;
        local_a8 = lVar14;
        if (((bVar11 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
          *(undefined1 *)(local_108 + 0x274) = 1;
        }
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = 0;
        UNLOCK();
        if (iVar3 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        uVar16 = <craggemini_core[66f3c71560d70857]::admission::MemoryAdmission>::sample
                           (uVar9,&local_f8,uVar16,local_a0);
        if (lVar14 != 0) {
          uVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
        }
        if (lVar13 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,4);
        }
        return uVar9;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_b0 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_b0 != 0) {
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,lVar14);
        goto LAB_004c900a;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    uVar7 = (ulonglong)pauStack_f0 >> 8;
    pauStack_f0 = (undefined1 (*) [16])CONCAT71((int7)uVar7,bVar11);
    local_f8 = pauVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_572fb51faa0db1e51baf8d00d92dd3e9_183_llvm_7677212527096675952,&local_f8,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bcd0);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


