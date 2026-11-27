// 00511af0 <&alloc[12e961f32105355]::string::String,&std[6c98fd8553dbae28]::path::PathBuf,&std[6c98fd8553dbae28]::path::PathBuf>

/* <craggemini_core[66f3c71560d70857]::license::LicenseGate>::new::<&alloc[12e961f32105355]::string::String,
   &std[6c98fd8553dbae28]::path::PathBuf, &std[6c98fd8553dbae28]::path::PathBuf> */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::license::LicenseGate>::new::
<&alloc[12e961f32105355]::string::String,&std[6c98fd8553dbae28]::path::PathBuf,&std[6c98fd8553dbae28]::path::PathBuf>
          (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 local_d8 [24];
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_72;
  undefined4 local_71;
  undefined4 uStack_6d;
  undefined4 uStack_69;
  undefined4 uStack_65;
  undefined8 local_61;
  undefined8 uStack_59;
  char local_51;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  (*(code *)PTR_clone_00798fd0)();
  lVar4 = *(longlong *)(param_3 + 0x10);
  if (lVar4 < 0) {
LAB_00511b20:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_00511cd8;
  }
  if (lVar4 == 0) {
    lVar3 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar3 == 0) goto LAB_00511b20;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar4);
  }
  lVar1 = *(longlong *)(param_4 + 0x10);
  local_c0 = lVar4;
  local_b8 = lVar3;
  local_b0 = lVar4;
  if (lVar1 < 0) {
LAB_00511b8a:
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    if (lVar1 == 0) {
      lVar4 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar4 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar4 == 0) goto LAB_00511b8a;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar1);
    }
    local_a8 = lVar1;
    local_a0 = lVar4;
    local_98 = lVar1;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_88 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (local_88 != (undefined8 *)0x0) {
      *(undefined8 *)((longlong)local_88 + 7) = 0x64692d656e696863;
      *local_88 = 0x63616d2f6374652f;
      local_90 = 0xf;
      local_80 = 0xf;
      craggemini_core[66f3c71560d70857]::license::decode_hash(&local_51,&DAT_0019bad9,0x40);
      local_72 = local_51 == '\0';
      if ((bool)local_72) {
        local_61 = local_40;
        uStack_59 = uStack_38;
        local_71 = local_50;
        uStack_6d = uStack_4c;
        uStack_69 = uStack_48;
        uStack_65 = uStack_44;
      }
      construct(param_1,local_d8,&local_c0,&local_a8,&local_90,&local_72);
      return param_1;
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
LAB_00511cd8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


