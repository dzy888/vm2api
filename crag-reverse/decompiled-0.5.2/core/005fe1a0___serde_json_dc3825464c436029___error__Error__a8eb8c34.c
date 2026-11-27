// 005fe1a0 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::server::ScaleRequest as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::server::ScaleRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x6d726177 && (int)*param_2 == 0x77657270) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x736365735f6c7474 && *param_2 == 0x6c74745f656c6469
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x73746f6c735f656c && *param_2 == 0x656c62616e6e7572
       ) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 6) == 0x73746f6c735f6d72 && *param_2 == 0x6d7261775f6e696d
       ) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x79636e6572727563 && *param_2 == 0x636e6f635f78616d
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(param_2,param_3,
                        &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_14_llvm_10049508496007902178,5);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


