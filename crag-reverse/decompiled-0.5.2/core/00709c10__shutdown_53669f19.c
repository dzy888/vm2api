// 00709c10 shutdown

/* <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CurrentThread>::shutdown */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CurrentThread>::shutdown
          (undefined4 param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  code *pcVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  longlong *unaff_RBX;
  int *piVar9;
  ulonglong *unaff_R15;
  longlong *in_FS_OFFSET;
  bool bVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  
  if (*param_3 == 1) {
LAB_00709eb6:
    uVar8 = (*(code *)PTR_panic_fmt_007991a8)
                      (param_1,&anon_1c7207ea9655bfcf55d918eab6d9918c_47_llvm_17559541839288726608);
LAB_00709ecf:
    if (uVar8 == 1) {
      uVar11 = (*(code *)PTR_register_00799240)();
      *(undefined1 *)(unaff_R15 + 9) = 0;
      uVar4 = *unaff_R15;
      lVar2 = local_b0;
      lVar1 = lStack_98;
      goto joined_r0x00709efa;
    }
  }
  else {
    LOCK();
    lVar1 = *(longlong *)(param_2 + 0x20);
    *(longlong *)(param_2 + 0x20) = 0;
    UNLOCK();
    if (lVar1 == 0) {
      if (((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) &&
         (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), param_1 = extraout_XMM0_Da,
         cVar7 == '\0')) {
        return;
      }
      param_1 = (*(code *)PTR_panic_fmt_007991a8)
                          (param_1,&
                                   PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_00795570
                          );
      goto LAB_00709eb6;
    }
    unaff_RBX = *(longlong **)(param_3 + 2);
    LOCK();
    lVar2 = *unaff_RBX;
    *unaff_RBX = *unaff_RBX + 1;
    UNLOCK();
    if (*unaff_RBX == 0 || SCARRY8(lVar2,1) != *unaff_RBX < 0) goto LAB_00709fac;
    uVar11 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_b0 = 0;
    local_a0 = 0;
    local_80 = 8;
    uStack_78 = 0;
    unaff_R15 = (ulonglong *)(*in_FS_OFFSET + -0x138);
    bVar3 = *(byte *)(*in_FS_OFFSET + -0xf0);
    uVar8 = (uint)bVar3;
    uStack_a8 = unaff_RBX;
    lStack_98 = lVar1;
    local_70 = param_2;
    if (bVar3 != 0) goto LAB_00709ecf;
    uVar4 = *unaff_R15;
    lVar2 = local_b0;
joined_r0x00709efa:
    local_b0 = lVar2;
    lStack_98 = lVar1;
    if (0x7ffffffffffffffe < uVar4) {
      (*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
      goto LAB_00709fac;
    }
    local_b0._0_4_ = (int)lVar2;
    if ((int)unaff_R15[1] != 2) {
      local_b0._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_a8._4_4_ = (undefined4)((ulonglong)uStack_a8 >> 0x20);
      local_90._4_4_ = (undefined4)((ulonglong)local_90 >> 0x20);
      uStack_88._4_4_ = (undefined4)((ulonglong)uStack_88 >> 0x20);
      local_80._4_4_ = (undefined4)((ulonglong)local_80 >> 0x20);
      uStack_78._4_4_ = (undefined4)((ulonglong)uStack_78 >> 0x20);
      local_68 = (int)local_b0;
      uStack_64 = local_b0._4_4_;
      uStack_60 = (undefined4)uStack_a8;
      uStack_5c = uStack_a8._4_4_;
      local_38 = (undefined4)local_80;
      uStack_34 = local_80._4_4_;
      uStack_30 = (undefined4)uStack_78;
      uStack_2c = uStack_78._4_4_;
      local_48 = (undefined4)local_90;
      uStack_44 = local_90._4_4_;
      uStack_40 = (undefined4)uStack_88;
      uStack_3c = uStack_88._4_4_;
      local_58 = local_a0;
      lStack_50 = lVar1;
      local_28 = local_70;
      if (lVar2 == 1) {
        (*(code *)PTR_panic_fmt_007991a8)
                  (1,&PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_00795450
                  );
        goto LAB_00709fac;
      }
      if (local_a0 != 0) {
        (*(code *)PTR_panic_already_borrowed_007997b0)();
        goto LAB_00709fac;
      }
      local_58 = -1;
      lStack_50 = 0;
      if (lVar1 == 0) {
        iVar6 = (int)local_b0;
        (*(code *)PTR_expect_failed_00799440)
                  (iVar6,&
                         PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_00795468
                  );
        goto LAB_00709fac;
      }
      local_58 = 0;
      uVar4 = unaff_R15[5];
      unaff_R15[5] = (ulonglong)&local_68;
      tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::shutdown2(lVar1,unaff_RBX + 0x10)
      ;
      unaff_R15[5] = uVar4;
      if (local_58 != 0) {
        (*(code *)PTR_panic_already_borrowed_007997b0)();
        goto LAB_00709fac;
      }
      local_58 = -1;
      if (lStack_50 == 0) {
        local_58 = 0;
      }
      else {
        uVar11 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>(lStack_50);
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
        local_58 = local_58 + 1;
      }
      lStack_50 = lVar1;
      (*(code *)PTR_drop_00799690)();
      piVar9 = &local_68;
      goto LAB_00709e6d;
    }
    bVar10 = (int)local_b0 == 1;
    if (bVar10) {
      (*(code *)PTR_panic_fmt_007991a8)
                (uVar11,&
                        PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_00795588
                );
      goto LAB_00709fac;
    }
  }
  lVar1 = lStack_98;
  if (local_a0 == 0) {
    local_a0 = -1;
    lStack_98 = 0;
    if (lVar1 == 0) {
      (*(code *)PTR_unwrap_failed_00799278)();
    }
    else {
      local_a0 = 0;
      tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::shutdown2(lVar1,unaff_RBX + 0x10)
      ;
      if (local_a0 == 0) {
        local_a0 = -1;
        if (lStack_98 == 0) {
          local_a0 = 0;
        }
        else {
          uVar11 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>(lStack_98);
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
          local_a0 = local_a0 + 1;
        }
        lStack_98 = lVar1;
        (*(code *)PTR_drop_00799690)();
        piVar9 = (int *)&local_b0;
LAB_00709e6d:
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <tokio[d7d91d38da47d894]::runtime::scheduler::Context>(piVar9);
        return;
      }
      (*(code *)PTR_panic_already_borrowed_007997b0)();
    }
  }
  else {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
  }
LAB_00709fac:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


