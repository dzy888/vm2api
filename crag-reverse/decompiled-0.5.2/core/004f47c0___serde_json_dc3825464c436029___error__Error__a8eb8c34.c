// 004f47c0 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::FromBridge as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::FromBridge_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7375 && (int)*param_2 == 0x74617473) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'd' && *param_2 == 0x695f6d6165727473) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f74736575716572) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x7964 && *param_2 == 0x6f625f726f727265) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x64695f746e656761 && *param_2 == 0x746e656761627573
       ) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x72657466615f7972 && *param_2 == 0x66615f7972746572
       ) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x65707974 && *param_2 == 0x5f746e65746e6f63) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}


