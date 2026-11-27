// 00546680 default_server_name

/* craggemini_core[66f3c71560d70857]::mcp_stdio::default_server_name */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::mcp_stdio::default_server_name(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  *puVar2 = 0x67617263;
  *param_1 = 4;
  param_1[1] = puVar2;
  param_1[2] = 4;
  return param_1;
}


