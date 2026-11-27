// 00064a70 <core[c0acaeba6ab4c2e0]::fmt::Arguments>

/* <serde_json[dc3825464c436029]::error::Error as
   serde_core[48776c27239fa21f]::de::Error>::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments> */

void __rustcall
<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::custom::
<core[c0acaeba6ab4c2e0]::fmt::Arguments>
          (undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  if ((param_2 & 1) == 0) {
    (*(code *)PTR_format_inner_000c3b78)(param_4,param_2);
  }
  else if (param_2 >> 1 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    lVar2 = (*(code *)PTR___rust_alloc_000c3a90)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_000c3a98)();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)PTR_memcpy_000c3aa8)(param_4,param_2 >> 1);
  }
  (*(code *)PTR_make_error_000c3e78)();
  return;
}


