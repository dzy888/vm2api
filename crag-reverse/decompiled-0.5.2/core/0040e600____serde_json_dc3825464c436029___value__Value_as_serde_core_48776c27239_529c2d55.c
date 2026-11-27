// 0040e600 <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor>

/* <serde_json[dc3825464c436029]::de::ParserNumber>::visit::<<serde_json[dc3825464c436029]::value::Value
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor> */

void __rustcall
<serde_json[dc3825464c436029]::de::ParserNumber>::visit::
<<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor>
          (undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_28 [32];
  
  if (*param_2 == 0) {
    uVar2 = param_2[1];
    if ((uVar2 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      local_28[0] = 0;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_28)
      ;
      *param_1 = 2;
      *(undefined8 *)(param_1 + 8) = 2;
      *(ulonglong *)(param_1 + 0x10) = uVar2;
      return;
    }
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 2;
    *(ulonglong *)(param_1 + 0x10) = uVar2;
    return;
  }
  if ((int)*param_2 == 1) {
    lVar1 = param_2[1];
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    *(longlong *)(param_1 + 0x10) = lVar1;
    return;
  }
  uVar2 = param_2[1];
  *param_1 = 2;
  *(ulonglong *)(param_1 + 8) = uVar2 >> 0x3f;
  *(ulonglong *)(param_1 + 0x10) = uVar2;
  return;
}


