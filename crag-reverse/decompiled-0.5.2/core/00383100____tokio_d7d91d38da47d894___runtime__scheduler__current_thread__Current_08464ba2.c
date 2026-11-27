// 00383100 <<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CurrentThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>::{closure#0},core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>

/* tokio[d7d91d38da47d894]::runtime::context::runtime::enter_runtime::<<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CurrentThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>::{closure#0},
   core[c0acaeba6ab4c2e0]::result::Result<(), core[c0acaeba6ab4c2e0]::io::error::Error>> */

undefined8 __rustcall
tokio[d7d91d38da47d894]::runtime::context::runtime::enter_runtime::
<<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CurrentThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
          (int param_1,longlong param_2,ulonglong param_3,undefined4 *param_4,undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong *unaff_R14;
  longlong *in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 local_189;
  undefined8 local_188;
  int iStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  uint uStack_170;
  int iStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128 [2];
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  uint uStack_100;
  int iStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_98 [3];
  undefined8 local_80;
  int local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  lVar2 = *in_FS_OFFSET;
  local_d0 = param_5;
  local_c8 = param_4;
  if ((char)in_FS_OFFSET[-0x1e] == '\0') {
    cVar1 = *(char *)((longlong)in_FS_OFFSET + -0xf2);
    iVar12 = param_1;
    iVar10 = iStack_180;
  }
  else {
    if ((char)in_FS_OFFSET[-0x1e] != '\x01') goto LAB_003834f1;
    iVar12 = (*(code *)PTR_register_00799240)();
    param_3 = param_3 & 0xffffffff;
    *(undefined1 *)(in_FS_OFFSET + -0x1e) = 0;
    cVar1 = *(char *)((longlong)in_FS_OFFSET + -0xf2);
    iVar10 = iStack_180;
  }
  iStack_180 = iVar12;
  if (cVar1 == '\x02') {
    iVar12 = (int)param_4;
    *(char *)((longlong)in_FS_OFFSET + -0xf2) = (char)param_3;
    iStack_180 = iVar10;
    uVar6 = (*(code *)PTR_next_seed_007996b0)(*(undefined8 *)(param_2 + 8));
    if ((*(byte *)(in_FS_OFFSET + -0x20) & 1) == 0) {
      iVar10 = iVar12;
      uStack_170 = (*(code *)PTR_new_007996b8)();
    }
    else {
      uStack_170 = *(uint *)((longlong)in_FS_OFFSET + -0xfc);
      iVar10 = (int)in_FS_OFFSET[-0x1f];
    }
    unaff_R14 = (longlong *)(ulonglong)uStack_170;
    iVar11 = 1;
    if (uStack_170 != 0 || iVar10 != 0) {
      iVar11 = iVar10;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x20) = 1;
    *(undefined4 *)((longlong)in_FS_OFFSET + -0xfc) = uVar6;
    *(int *)(in_FS_OFFSET + -0x1f) = iVar12;
    (*(code *)PTR_set_current_007996c0)(uVar6,param_2);
    local_118 = iStack_180;
    uStack_114 = uStack_17c;
    iStack_110 = iStack_178;
    uStack_10c = uStack_174;
    local_108 = CONCAT44(iVar11,uStack_170);
    param_3 = lVar2 - 0x138;
    iStack_16c = iVar11;
    if (local_188 == (longlong *)0xfffffffffffffffe) goto LAB_003834f1;
    local_b8 = iStack_180;
    uStack_b4 = uStack_17c;
    iStack_b0 = iStack_178;
    uStack_ac = uStack_174;
    local_a8 = local_108;
    if (local_188 != (longlong *)0xffffffffffffffff) {
      local_98[0] = (longlong)local_188;
      local_138 = *local_c8;
      uStack_134 = local_c8[1];
      uStack_130 = local_c8[2];
      uStack_12c = local_c8[3];
      local_128[0] = *(undefined8 *)(local_c8 + 4);
      local_80 = local_108;
      uVar7 = (*(code *)PTR_as_current_thread_007996c8)();
      puVar5 = PTR_take_core_007996d0;
      puVar4 = PTR_notified_00799190;
      uVar6 = extraout_XMM0_Da;
      do {
        (*(code *)puVar5)(uVar6,uVar7);
        if (local_78 != 2) {
          local_d8 = local_38;
          local_e8 = local_48;
          uStack_e4 = uStack_44;
          uStack_e0 = uStack_40;
          uStack_dc = uStack_3c;
          local_f8 = local_58;
          uStack_f4 = uStack_54;
          uStack_f0 = uStack_50;
          uStack_ec = uStack_4c;
          local_108 = CONCAT44(uStack_64,local_68);
          uStack_100 = uStack_60;
          iStack_fc = iStack_5c;
          local_118 = local_78;
          uStack_114 = uStack_74;
          iStack_110 = iStack_70;
          uStack_10c = uStack_6c;
          plVar8 = (longlong *)(*(code *)PTR_current_007996d8)();
          local_188 = plVar8;
          (*(code *)PTR_set_thread_id_007996e0)();
          LOCK();
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (*plVar8 == 0) {
            (*(code *)PTR_drop_slow_007996e8)();
          }
          local_148 = local_d8;
          local_158 = local_e8;
          uStack_154 = uStack_e4;
          uStack_150 = uStack_e0;
          uStack_14c = uStack_dc;
          local_168 = local_f8;
          uStack_164 = uStack_f4;
          uStack_160 = uStack_f0;
          uStack_15c = uStack_ec;
          iStack_178 = (int)local_108;
          uStack_174 = local_108._4_4_;
          uStack_170 = uStack_100;
          iStack_16c = iStack_fc;
          local_188 = (longlong *)CONCAT44(uStack_114,local_118);
          iStack_180 = iStack_110;
          uStack_17c = uStack_10c;
          uVar9 = <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::block_on
                  ::
                  <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>
                            (&local_188,local_128[0],
                             &
                             PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_00787728
                            );
LAB_0038337d:
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <tokio[d7d91d38da47d894]::runtime::context::runtime::EnterRuntimeGuard>(local_98);
          return uVar9;
        }
        (*(code *)puVar4)();
        local_158 = local_e8;
        uStack_154 = uStack_e4;
        uStack_150 = uStack_e0;
        uStack_14c = uStack_dc;
        local_168 = local_f8;
        uStack_164 = uStack_f4;
        uStack_160 = uStack_f0;
        uStack_15c = uStack_ec;
        iStack_178 = (int)local_108;
        uStack_174 = local_108._4_4_;
        uStack_170 = uStack_100;
        iStack_16c = iStack_fc;
        local_188 = (longlong *)CONCAT44(uStack_114,local_118);
        iStack_180 = iStack_110;
        uStack_17c = uStack_10c;
        local_c0 = &local_188;
        auVar13 = <tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::block_on::
                  <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CurrentThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>::_closure_0_::_closure_0_>>
                            (&local_189,&local_c0,local_128);
        uVar9 = auVar13._8_8_;
        if (auVar13._0_8_ != 0) {
          if (auVar13._0_8_ == 2) {
            (*(code *)PTR_unwrap_failed_00799028)
                      (&DAT_007877a0,&local_189,
                       &
                       PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_00787740
                      );
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          (*(code *)PTR_drop_007990e8)();
          if (CONCAT44(uStack_164,local_168) != 0) {
            (**(code **)(CONCAT44(uStack_164,local_168) + 0x18))();
          }
          goto LAB_0038337d;
        }
        uVar6 = (*(code *)PTR_drop_007990e8)();
        if (CONCAT44(uStack_164,local_168) != 0) {
          uVar6 = (**(code **)(CONCAT44(uStack_164,local_168) + 0x18))();
        }
      } while( true );
    }
  }
  param_3 = 0x231;
  (*(code *)PTR_panic_fmt_007991a8)(iStack_180,local_d0);
LAB_003834f1:
  (*(code *)PTR_panic_access_error_00799458)();
  LOCK();
  *unaff_R14 = *unaff_R14 + -1;
  UNLOCK();
  if (*unaff_R14 == 0) {
    (*(code *)PTR_drop_slow_007996e8)();
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>(&local_118,param_3);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <tokio[d7d91d38da47d894]::runtime::context::runtime::EnterRuntimeGuard>(local_98);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


