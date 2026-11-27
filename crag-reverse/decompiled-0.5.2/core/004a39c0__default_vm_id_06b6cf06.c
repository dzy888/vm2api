// 004a39c0 default_vm_id

/* craggemini_core[66f3c71560d70857]::default_vm_id */

undefined8 * __rustcall craggemini_core[66f3c71560d70857]::default_vm_id(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    puVar2 = (undefined8 *)(*pcVar1)();
    return puVar2;
  }
  *puVar2 = 0x6f6c61646e617473;
  *(undefined2 *)(puVar2 + 1) = 0x656e;
  *param_1 = 10;
  param_1[1] = puVar2;
  param_1[2] = 10;
  return param_1;
}


