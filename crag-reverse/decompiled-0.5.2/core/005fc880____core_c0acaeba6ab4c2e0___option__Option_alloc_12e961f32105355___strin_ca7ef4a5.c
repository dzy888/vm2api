// 005fc880 <&core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>

/* serde_json[dc3825464c436029]::value::to_value::<&core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
    */

undefined1 * __rustcall
serde_json[dc3825464c436029]::value::to_value::
<&core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  if (*param_2 != -1) {
    lVar1 = param_2[2];
    if (lVar1 < 0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      if (lVar1 == 0) {
        lVar3 = 1;
LAB_005fc8f1:
        *param_1 = 3;
        *(longlong *)(param_1 + 8) = lVar1;
        *(longlong *)(param_1 + 0x10) = lVar3;
        *(longlong *)(param_1 + 0x18) = lVar1;
        return param_1;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar3 = (*(code *)PTR___rust_alloc_00799000)();
      puVar2 = (undefined1 *)0x1;
      if (lVar3 != 0) {
        (*(code *)PTR_memcpy_00799008)(param_4,lVar1);
        goto LAB_005fc8f1;
      }
    }
    param_1 = puVar2;
    (*(code *)PTR_handle_error_00798ff0)();
  }
  *param_1 = 0;
  return param_1;
}


