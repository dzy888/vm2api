// 0071f3d0 <serde_json[dc3825464c436029]::error::Error>

/* <serde_json[dc3825464c436029]::error::Error as
   serde_core[48776c27239fa21f]::de::Error>::custom::<serde_json[dc3825464c436029]::error::Error> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::custom::
<serde_json[dc3825464c436029]::error::Error>(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined1 local_71;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong local_58;
  undefined *puStack_50;
  longlong local_48;
  undefined *local_40;
  longlong local_38;
  undefined *local_30;
  longlong *local_28;
  undefined **local_20;
  undefined8 local_18;
  
  local_70 = 0;
  uStack_68 = 1;
  local_60 = 0;
  local_18 = 0x60000020;
  local_28 = &local_70;
  local_20 = &anon_59e2fb66b8c947e9c506f2bec78bddb3_43_llvm_10337461052197347093;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    ppuVar4 = (undefined **)&local_28;
    cVar2 = (*(code *)PTR_fmt_0079ab48)();
  }
  else {
    local_48 = param_1 + 0x18;
    local_38 = param_1 + 0x20;
    puStack_50 = PTR_fmt_0079ab48;
    local_40 = PTR_fmt_007991f0;
    local_30 = PTR_fmt_007991f0;
    ppuVar4 = &anon_59e2fb66b8c947e9c506f2bec78bddb3_43_llvm_10337461052197347093;
    local_58 = param_1;
    cVar2 = (*(code *)PTR_write_007994b0)
                      (&local_58,anon_59e2fb66b8c947e9c506f2bec78bddb3_37_llvm_10337461052197347093)
    ;
  }
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_00799028)
              (anon_59e2fb66b8c947e9c506f2bec78bddb3_4_llvm_10337461052197347093,&local_71,
               &anon_59e2fb66b8c947e9c506f2bec78bddb3_46_llvm_10337461052197347093);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_48 = local_60;
  local_58 = local_70;
  puStack_50 = (undefined *)uStack_68;
  uVar3 = (*(code *)PTR_make_error_007999e8)();
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
            (param_1,ppuVar4);
  return uVar3;
}


