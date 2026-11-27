// 004a41a0 default_host_license_dir

/* craggemini_core[66f3c71560d70857]::default_host_license_dir */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::default_host_license_dir(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar3 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar2 = anon_572fb51faa0db1e51baf8d00d92dd3e9_138_llvm_7677212527096675952._8_8_;
  if (pcVar3 == (char *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar1)();
    return puVar4;
  }
  *(undefined8 *)pcVar3 = anon_572fb51faa0db1e51baf8d00d92dd3e9_138_llvm_7677212527096675952._0_8_;
  *(undefined8 *)(pcVar3 + 8) = uVar2;
  pcVar3[0x10] = 's';
  pcVar3[0x11] = 't';
  *param_1 = 0x12;
  param_1[1] = pcVar3;
  param_1[2] = 0x12;
  return param_1;
}


