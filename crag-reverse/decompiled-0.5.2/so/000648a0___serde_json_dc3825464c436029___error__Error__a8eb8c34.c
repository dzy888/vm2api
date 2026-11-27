// 000648a0 <serde_json[dc3825464c436029]::error::Error>

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
  
  (*(code *)PTR_from_utf8_000c3bd8)();
  if (local_58 == 1) {
    lVar1 = (*(code *)PTR_invalid_value_000c3b28)
                      (param_4,anon_9fa032a1d30ceca52b5a2d5222eaa356_4_llvm_10768355879922845107);
    param_1[1] = lVar1;
    *param_1 = -1;
  }
  else {
    uVar2 = local_48 == 0;
    if (-1 < local_48) goto LAB_000648e1;
    do {
      uVar2 = 1;
      (*(code *)PTR_handle_error_000c3a98)();
LAB_000648e1:
      if ((bool)uVar2) {
        lVar1 = 1;
        goto LAB_00064921;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      lVar1 = (*(code *)PTR___rust_alloc_000c3a90)();
    } while (lVar1 == 0);
    (*(code *)PTR_memcpy_000c3aa8)(param_4,local_48);
LAB_00064921:
    *param_1 = local_48;
    param_1[1] = lVar1;
    param_1[2] = local_48;
  }
  return param_1;
}


