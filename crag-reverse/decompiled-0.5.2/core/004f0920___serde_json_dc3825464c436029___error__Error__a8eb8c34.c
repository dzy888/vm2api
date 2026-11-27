// 004f0920 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::FromBridge as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::FromBridge_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = param_3 - 2U >> 2;
  if ((param_3 - 2U << 0x3e | uVar1) < 6) {
                    /* WARNING: Could not recover jumptable at 0x004f0953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0019825c + *(int *)(&DAT_0019825c + uVar1 * 4)))();
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}


