// 004f0e10 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::FromBridge as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::FromBridge_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,longlong param_3)

{
  if (param_3 == 3) {
    if (*(char *)((longlong)param_2 + 2) == 'q' && (short)*param_2 == 0x6573) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 6) {
    if (*(short *)((longlong)param_2 + 4) == 0x7465 && (int)*param_2 == 0x7366666f) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*(short *)((longlong)param_2 + 4) == 0x6874 && (int)*param_2 == 0x676e656c) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    if (*(short *)((longlong)param_2 + 4) == 0x3635 && (int)*param_2 == 0x32616873) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 10) {
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f74736575716572) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f74706d65747461) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}


