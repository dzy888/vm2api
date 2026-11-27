// 005fec00 <serde_json[dc3825464c436029]::raw::BoxedFromString>

/* <serde_json[dc3825464c436029]::value::Value as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_str::<serde_json[dc3825464c436029]::raw::BoxedFromString>
    */

longlong * __rustcall
<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserializer>::
deserialize_str::<serde_json[dc3825464c436029]::raw::BoxedFromString>
          (longlong *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 local_29;
  
  if (*param_2 == '\x03') {
    lVar3 = *(longlong *)(param_2 + 0x10);
    uVar1 = *(ulonglong *)(param_2 + 0x18);
    if (uVar1 < *(ulonglong *)(param_2 + 8)) {
      if (uVar1 == 0) {
        lVar3 = 1;
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      else {
        lVar3 = (*(code *)PTR___rust_realloc_007997f0)(uVar1,1);
        if (lVar3 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
    }
    *param_1 = lVar3;
    param_1[1] = uVar1;
  }
  else {
    lVar3 = ::<serde_json[dc3825464c436029]::value::Value>::invalid_type::
            <serde_json[dc3825464c436029]::error::Error>
                      (param_2,&local_29,
                       anon_1b4a85c95499e1b671cf4fa96a1b6d0f_82_llvm_10049508496007902178);
    param_1[1] = lVar3;
    *param_1 = 0;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(param_2);
  }
  return param_1;
}


