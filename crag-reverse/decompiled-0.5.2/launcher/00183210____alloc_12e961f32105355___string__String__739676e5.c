// 00183210 <&alloc[12e961f32105355]::string::String>

/* serde_json[dc3825464c436029]::value::to_value::<&alloc[12e961f32105355]::string::String> */

undefined1 * __rustcall
serde_json[dc3825464c436029]::value::to_value::<&alloc[12e961f32105355]::string::String>
          (undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar4 = lVar1 == 0;
  if (-1 < lVar1) goto LAB_00183231;
  uVar4 = true;
  puVar2 = (undefined1 *)0x0;
  while( true ) {
    param_1 = puVar2;
    (*(code *)PTR_handle_error_00219c78)();
LAB_00183231:
    if ((bool)uVar4) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar3 = (*(code *)PTR___rust_alloc_00219c88)();
    uVar4 = lVar3 == 0;
    puVar2 = (undefined1 *)0x1;
    if (!(bool)uVar4) {
      (*(code *)PTR_memcpy_00219c60)(param_4,lVar1);
LAB_00183276:
      *param_1 = 3;
      *(longlong *)(param_1 + 8) = lVar1;
      *(longlong *)(param_1 + 0x10) = lVar3;
      *(longlong *)(param_1 + 0x18) = lVar1;
      return param_1;
    }
  }
  lVar3 = 1;
  goto LAB_00183276;
}


