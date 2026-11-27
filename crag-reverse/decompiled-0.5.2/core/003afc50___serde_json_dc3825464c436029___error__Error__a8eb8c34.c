// 003afc50 <serde_json[dc3825464c436029]::error::Error>

/* <serde_core[48776c27239fa21f]::de::impls::StringVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

longlong * __rustcall
<serde_core[48776c27239fa21f]::de::impls::StringVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  int local_58;
  longlong local_48;
  
  (*(code *)PTR_from_utf8_00799468)();
  if (local_58 == 1) {
    lVar1 = (*(code *)PTR_invalid_value_007997e0)
                      (param_4,anon_f98aad3bb3e6c606de146d8493d2cfe7_29_llvm_13619962878011216390);
    param_1[1] = lVar1;
    *param_1 = -1;
  }
  else {
    uVar2 = local_48 == 0;
    if (-1 < local_48) goto LAB_003afc91;
    do {
      uVar2 = 1;
      (*(code *)PTR_handle_error_00798ff0)();
LAB_003afc91:
      if ((bool)uVar2) {
        lVar1 = 1;
        goto LAB_003afcd1;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar1 = (*(code *)PTR___rust_alloc_00799000)();
    } while (lVar1 == 0);
    (*(code *)PTR_memcpy_00799008)(param_4,local_48);
LAB_003afcd1:
    *param_1 = local_48;
    param_1[1] = lVar1;
    param_1[2] = local_48;
  }
  return param_1;
}


