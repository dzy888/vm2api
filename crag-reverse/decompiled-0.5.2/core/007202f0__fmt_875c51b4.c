// 007202f0 fmt

/* <serde_json[dc3825464c436029]::error::Error as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

ulonglong __rustcall
<serde_json[dc3825464c436029]::error::Error_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  ulonglong uVar4;
  undefined4 extraout_XMM0_Da;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 *local_40;
  undefined **local_38;
  longlong local_30;
  undefined *local_28;
  longlong local_20;
  undefined *local_18;
  
  lVar1 = *param_1;
  local_70 = 0;
  uStack_68 = 1;
  local_60 = 0;
  local_30 = 0x60000020;
  local_40 = &local_70;
  local_38 = &anon_59e2fb66b8c947e9c506f2bec78bddb3_43_llvm_10337461052197347093;
  cVar3 = (*(code *)PTR_fmt_0079ab48)();
  if (cVar3 != '\0') {
    (*(code *)PTR_unwrap_failed_00799028)
              (anon_59e2fb66b8c947e9c506f2bec78bddb3_4_llvm_10337461052197347093,&local_71,
               &anon_59e2fb66b8c947e9c506f2bec78bddb3_46_llvm_10337461052197347093);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_48 = local_60;
  local_58 = (undefined4)local_70;
  uStack_54 = local_70._4_4_;
  uStack_50 = (undefined4)uStack_68;
  uStack_4c = uStack_68._4_4_;
  local_30 = lVar1 + 0x18;
  local_20 = lVar1 + 0x20;
  local_40 = (undefined8 *)&local_58;
  local_38 = (undefined **)
             <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
  local_28 = PTR_fmt_007991f0;
  local_18 = PTR_fmt_007991f0;
  uVar4 = (*(code *)PTR_write_007994b0)(&local_40,&DAT_00186e54);
  if (CONCAT44(uStack_54,local_58) != 0) {
    uVar4 = uVar4 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
  }
  return uVar4;
}


