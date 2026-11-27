// 00064970 <serde_json[dc3825464c436029]::error::Error>

/* <serde_core[48776c27239fa21f]::de::impls::StringVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_byte_buf::<serde_json[dc3825464c436029]::error::Error>
    */

longlong * __rustcall
<serde_core[48776c27239fa21f]::de::impls::StringVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_byte_buf::<serde_json[dc3825464c436029]::error::Error>
          (undefined4 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 extraout_XMM0_Da;
  char local_50;
  longlong local_48;
  longlong local_38;
  longlong lStack_30;
  
  lVar2 = param_3[2];
  (*(code *)PTR_from_utf8_000c3bd8)(param_1,lVar2);
  if (local_50 == '\0') {
    local_38 = *param_3;
    lStack_30 = param_3[1];
  }
  else {
    lVar1 = *param_3;
    local_38 = param_3[1];
    lStack_30 = param_3[2];
    lVar2 = local_48;
    if (lVar1 != -1) {
      lVar2 = (*(code *)PTR_invalid_value_000c3b28)
                        ((int)param_3[1],
                         anon_9fa032a1d30ceca52b5a2d5222eaa356_4_llvm_10768355879922845107);
      param_2[1] = lVar2;
      *param_2 = -1;
      if (lVar1 == 0) {
        return param_2;
      }
      (*(code *)PTR___rust_dealloc_000c3aa0)(extraout_XMM0_Da,1);
      return param_2;
    }
  }
  *param_2 = local_38;
  param_2[1] = lStack_30;
  param_2[2] = lVar2;
  return param_2;
}


