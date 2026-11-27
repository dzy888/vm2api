// 001a6970 serialize_seq

/* <serde_json[dc3825464c436029]::value::ser::Serializer as
   serde_core[48776c27239fa21f]::ser::Serializer>::serialize_seq */

ulonglong * __rustcall
<serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
::serialize_seq(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((param_2 & 1) == 0) {
    param_3 = 0;
  }
  uVar4 = param_3 * 0x20;
  uVar3 = param_3;
  puVar1 = (ulonglong *)0x0;
  if (uVar4 < 0x7ffffffffffffff9 && param_3 >> 0x3b == 0) goto LAB_001a69b4;
  while( true ) {
    param_1 = puVar1;
    (*(code *)PTR_handle_error_00219c78)();
    uVar3 = param_3;
LAB_001a69b4:
    if (uVar4 == 0) break;
    param_3 = uVar3;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    uVar2 = (*(code *)PTR___rust_alloc_00219c88)();
    puVar1 = (ulonglong *)&DAT_00000008;
    if (uVar2 != 0) {
LAB_001a69ed:
      *param_1 = uVar3;
      param_1[1] = uVar2;
      param_1[2] = 0;
      return param_1;
    }
  }
  uVar2 = 8;
  uVar3 = 0;
  goto LAB_001a69ed;
}


