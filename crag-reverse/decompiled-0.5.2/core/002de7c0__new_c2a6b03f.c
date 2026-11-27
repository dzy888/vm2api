// 002de7c0 new

/* <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::acp_backend::StderrRing>>>::new
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::acp_backend::StderrRing>>>
::new(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *puVar6 = 1;
  puVar6[1] = 1;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  puVar6[4] = uVar1;
  puVar6[5] = uVar2;
  return;
}


