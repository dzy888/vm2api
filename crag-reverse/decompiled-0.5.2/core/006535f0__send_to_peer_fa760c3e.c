// 006535f0 send_to_peer

/* <craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::send_to_peer */

ulonglong __rustcall
<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::send_to_peer(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar8;
  undefined1 local_89;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 **local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_88._0_4_ = *(undefined4 *)(param_1 + 0x30);
  local_88._4_4_ = *(undefined4 *)(param_1 + 0x34);
  uStack_80 = *(undefined4 *)(param_1 + 0x38);
  uStack_7c = *(undefined4 *)(param_1 + 0x3c);
  uVar8 = *(undefined4 *)(param_1 + 0x40);
  local_89 = 0xa6;
  local_78 = &local_89;
  local_70 = 1;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  local_48 = (undefined8 *)(*(code *)PTR___rust_alloc_zeroed_007997c8)();
  if (local_48 == (undefined8 *)0x0) {
    uVar8 = (*(code *)PTR_handle_error_00798ff0)();
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_68 = 0;
  uStack_60 = 0;
  local_38 = 0;
  local_58 = &local_78;
  uStack_50 = 1;
  local_48[1] = 0x100000001;
  *local_48 = 0x24;
  *(undefined4 *)(local_48 + 2) = (undefined4)local_88;
  *(undefined4 *)((longlong)local_48 + 0x14) = local_88._4_4_;
  *(undefined4 *)(local_48 + 3) = uStack_80;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uStack_7c;
  *(undefined4 *)(local_48 + 4) = uVar8;
  puVar3 = PTR_sendmsg_0079a258;
  puVar2 = PTR_get_os_functions_007992e0;
  uStack_40 = 0x24;
  uVar8 = (undefined4)local_88;
  local_88 = local_48;
  while( true ) {
    lVar5 = (*(code *)puVar3)(uVar8,0x4000);
    if (lVar5 == 1) {
      uVar7 = 0;
      uVar8 = extraout_XMM0_Da;
      goto LAB_00653732;
    }
    if (-1 < lVar5) break;
    piVar6 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar6;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    lVar5 = (*(code *)puVar2)();
    cVar4 = (**(code **)(lVar5 + 8))();
    uVar8 = extraout_XMM0_Da_00;
    if (cVar4 != '#') {
      uVar7 = (longlong)iVar1 << 0x20 | 2;
LAB_00653732:
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
      return uVar7;
    }
  }
  uVar7 = (*(code *)PTR_<&str>_007991e8)(extraout_XMM0_Da,0x26);
  uVar8 = extraout_XMM0_Da_01;
  goto LAB_00653732;
}


