// 00638250 <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::{closure#0}::{closure#4}>

/* <tokio[d7d91d38da47d894]::process::Command>::pre_exec::<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::{closure#0}::{closure#4}>
    */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::process::Command>::pre_exec::
<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::_closure_0_::_closure_4_>
          (undefined8 param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *puVar6 = uVar2;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  (*(code *)PTR_pre_exec_00799430)
            (uVar2,anon_63b06cc94833867f683611f039574387_32_llvm_6903579140370050947);
  return param_1;
}


