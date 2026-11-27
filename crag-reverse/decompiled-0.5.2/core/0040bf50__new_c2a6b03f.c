// 0040bf50 new

/* <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<core[c0acaeba6ab4c2e0]::option::Option<i32>>>>::new
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<core[c0acaeba6ab4c2e0]::option::Option<i32>>>>
::new(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar3 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *puVar3 = 1;
  puVar3[1] = 1;
  uVar2 = param_1[1];
  puVar3[2] = *param_1;
  puVar3[3] = uVar2;
  return;
}


