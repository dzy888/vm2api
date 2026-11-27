// 0051ad90 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::license::Device as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::license::Device_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'd' && (int)*param_2 == 0x695f6d76) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x6e6f6973 && (int)*param_2 == 0x73726576) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x74637564 && (int)*param_2 == 0x646f7270) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7965 && *param_2 == 0x6b5f63696c627570) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x79656b5f65746176 && *param_2 == 0x5f65746176697270
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x687361685f64695f && *param_2 == 0x5f656e696863616d
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(param_2,param_3,
                        &anon_ec7f14c74815bf4c93b295cfd0665412_133_llvm_7806621557641746444,6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


