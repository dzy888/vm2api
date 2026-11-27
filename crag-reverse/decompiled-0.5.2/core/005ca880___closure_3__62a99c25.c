// 005ca880 {closure#3}

/* <craggemini_core[66f3c71560d70857]::credential::AgyCredential>::load_detailed::{closure#3} */

void __rustcall
<craggemini_core[66f3c71560d70857]::credential::AgyCredential>::load_detailed::_closure_3_
          (undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined **local_18;
  undefined8 local_10;
  
  local_38 = 0;
  uStack_30 = 1;
  local_28 = 0;
  local_10 = 0x60000020;
  local_20 = &local_38;
  local_18 = &PTR_<alloc[12e961f32105355]::string::String>_0078ea48;
  local_40 = param_2;
  cVar2 = (*(code *)PTR_fmt_00799518)();
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_00799028)
              (&DAT_0078e388,&local_41,
               &PTR_anon_59e2fb66b8c947e9c506f2bec78bddb3_45_llvm_10337461052197347093_0078ea78);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1[3] = local_28;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_38._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_30._4_4_;
  *param_1 = 4;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
            (&local_40,&local_20);
  return;
}


