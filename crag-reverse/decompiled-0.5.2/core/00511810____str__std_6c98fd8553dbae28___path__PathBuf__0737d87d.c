// 00511810 <&str,&std[6c98fd8553dbae28]::path::PathBuf>

/* <craggemini_core[66f3c71560d70857]::license::LicenseGate>::for_account::<&str,
   &std[6c98fd8553dbae28]::path::PathBuf> */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::license::LicenseGate>::for_account::
<&str,&std[6c98fd8553dbae28]::path::PathBuf>
          (undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  
  uVar6 = param_4 == 0;
  lVar5 = param_5;
  if (-1 < param_4) goto LAB_00511838;
  uVar3 = 0;
  do {
    param_1 = uVar3;
    uVar6 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = param_4;
    lVar5 = param_5;
LAB_00511838:
    if ((bool)uVar6) {
      local_b0 = 1;
      goto LAB_00511884;
    }
    param_5 = lVar5;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_b0 = (*(code *)PTR___rust_alloc_00799000)();
    uVar3 = 1;
  } while (local_b0 == 0);
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_4);
LAB_00511884:
  lVar5 = *(longlong *)(lVar5 + 0x10);
  local_b8 = param_4;
  local_a8 = param_4;
  if (lVar5 < 0) {
LAB_0051189e:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0051199a;
  }
  if (lVar5 == 0) {
    lVar4 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar4 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar4 == 0) goto LAB_0051189e;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar5);
  }
  lVar1 = *(longlong *)(param_2 + 0x40);
  local_a0 = lVar5;
  local_98 = lVar4;
  local_90 = lVar5;
  if (lVar1 < 0) {
LAB_00511919:
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    if (lVar1 == 0) {
      lVar5 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar5 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar5 == 0) goto LAB_00511919;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar1);
    }
    lVar4 = *(longlong *)(param_2 + 0x58);
    local_88 = lVar1;
    local_80 = lVar5;
    local_78 = lVar1;
    if (-1 < lVar4) {
      if (lVar4 == 0) {
        local_68 = 1;
LAB_005119e8:
        local_38 = *(undefined1 *)(param_2 + 600);
        local_58 = *(undefined4 *)(param_2 + 0x238);
        uStack_54 = *(undefined4 *)(param_2 + 0x23c);
        uStack_50 = *(undefined4 *)(param_2 + 0x240);
        uStack_4c = *(undefined4 *)(param_2 + 0x244);
        local_48 = *(undefined4 *)(param_2 + 0x248);
        uStack_44 = *(undefined4 *)(param_2 + 0x24c);
        uStack_40 = *(undefined4 *)(param_2 + 0x250);
        uStack_3c = *(undefined4 *)(param_2 + 0x254);
        local_70 = lVar4;
        local_60 = lVar4;
        construct(param_1,&local_b8,&local_a0,&local_88,&local_70,&local_58);
        return param_1;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_68 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_68 != 0) {
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar4);
        goto LAB_005119e8;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
LAB_0051199a:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


