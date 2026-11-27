// 006fcba0 <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::run::{closure#0},()>

/* tokio[d7d91d38da47d894]::runtime::context::runtime::enter_runtime::<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::run::{closure#0},
   ()> */

void __rustcall
tokio[d7d91d38da47d894]::runtime::context::runtime::enter_runtime::
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::run::_closure_0_,()>
          (undefined4 param_1,undefined8 param_2,code *param_3,longlong param_4,set *param_5,
          undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 uVar4;
  set *this;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong *in_FS_OFFSET;
  bool bVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar14;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  set *local_b8;
  undefined8 local_b0;
  set *local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  set *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  
  uVar4 = SUB81(param_3,0);
  lVar2 = *in_FS_OFFSET;
  local_b0 = param_6;
  local_a0 = param_4;
  local_58 = param_4;
  local_50 = param_5;
  if (*(char *)(lVar2 + -0xf0) == '\0') {
    cVar1 = *(char *)(lVar2 + -0xf2);
joined_r0x006fcde5:
    local_a8 = param_5;
    if (cVar1 == '\x02') {
      uVar10 = (undefined4)param_4;
      *(undefined1 *)(lVar2 + -0xf2) = uVar4;
      uVar5 = (*(code *)PTR_next_seed_007996b0)();
      if ((*(byte *)(lVar2 + -0x100) & 1) == 0) {
        plVar7 = (longlong *)
                 <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::{K#0}::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut_core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>,)>>
                 ::call_once(0,param_3);
        if (plVar7 == (longlong *)0x0) goto LAB_006fce04;
        local_c8 = (longlong *)*plVar7;
        plStack_c0 = (longlong *)plVar7[1];
        *plVar7 = *plVar7 + 1;
        iVar12 = loom::std::rand::COUNTER;
        LOCK();
        loom::std::rand::COUNTER = loom::std::rand::COUNTER + 1;
        UNLOCK();
        uVar8 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<u32>(&local_c8,iVar12);
        iVar9 = (int)(uVar8 >> 0x20);
        iVar6 = (int)uVar8;
        bVar13 = uVar8 >> 0x20 != 0;
        iVar12 = 1;
        if (bVar13 || iVar9 != iVar6) {
          iVar12 = iVar6;
        }
        uVar14 = extraout_XMM0_Da_00;
        iVar11 = 0;
        if (bVar13 || iVar9 != iVar6) {
          iVar11 = iVar9;
        }
      }
      else {
        iVar12 = *(int *)(lVar2 + -0xf8);
        uVar14 = extraout_XMM0_Da;
        iVar11 = *(int *)(lVar2 + -0xfc);
      }
      *(undefined4 *)(lVar2 + -0x100) = 1;
      *(undefined4 *)(lVar2 + -0xfc) = uVar5;
      *(undefined4 *)(lVar2 + -0xf8) = uVar10;
      (*(code *)PTR_set_current_007996c0)(uVar14,param_2);
      this = local_a8;
      iVar6 = 1;
      if (iVar11 != 0 || iVar12 != 0) {
        iVar6 = iVar12;
      }
      local_80 = CONCAT44(iVar6,iVar11);
      param_1 = (undefined4)local_90;
      local_e8 = local_90;
      uVar5 = (undefined4)uStack_88;
      lStack_e0 = uStack_88;
      local_d8 = local_80;
      if (local_98 == -2) goto LAB_006fce04;
      local_38 = local_80;
      uStack_44 = local_90._4_4_;
      uStack_3c = uStack_88._4_4_;
      local_48 = param_1;
      uStack_40 = uVar5;
      if (local_98 != -1) {
        local_e8 = local_98;
        lStack_e0 = local_90;
        local_d8 = uStack_88;
        local_d0 = local_80;
        local_90 = local_a0;
        uStack_88 = 0;
        local_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 8;
        local_60 = 0;
        local_98 = 1;
        local_b8 = local_a8;
        local_c8 = &local_98;
        plStack_c0 = &local_98;
        if (*(char *)(lVar2 + -0xf0) == '\0') {
LAB_006fcd86:
          <tokio[d7d91d38da47d894]::runtime::context::scoped::Scoped<tokio[d7d91d38da47d894]::runtime::scheduler::Context>>
          ::set::
          <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::run::_closure_0_::_closure_0_,()>
                    (this);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <tokio[d7d91d38da47d894]::runtime::scheduler::Context>(&local_98,&local_98);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <tokio[d7d91d38da47d894]::runtime::context::runtime::EnterRuntimeGuard>(&local_e8);
          return;
        }
        if (*(char *)(lVar2 + -0xf0) != '\x02') {
          (*(code *)PTR_register_00799240)();
          *(undefined1 *)(lVar2 + -0xf0) = 0;
          goto LAB_006fcd86;
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>
                  (&local_b8,lVar2 + -0x138);
        (*(code *)PTR_panic_access_error_00799458)();
        goto LAB_006fce32;
      }
    }
    (*(code *)PTR_panic_fmt_007991a8)(param_1,local_b0);
  }
  else {
    if (*(char *)(lVar2 + -0xf0) == '\x01') {
      param_3 = std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
                <tokio[d7d91d38da47d894]::runtime::context::Context>;
      param_1 = (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar2 + -0xf0) = 0;
      cVar1 = *(char *)(lVar2 + -0xf2);
      goto joined_r0x006fcde5;
    }
LAB_006fce04:
    (*(code *)PTR_panic_access_error_00799458)();
  }
LAB_006fce32:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


