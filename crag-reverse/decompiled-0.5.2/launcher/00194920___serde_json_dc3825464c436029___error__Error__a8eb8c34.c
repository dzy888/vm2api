// 00194920 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini[b21da2d71f2da7a3]::license::host::GrantedEntitlement as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini[b21da2d71f2da7a3]::license::host::GrantedEntitlement_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7374 && (int)*param_2 == 0x6e617267) {
      param_1[1] = 6;
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
    if (*(int *)((longlong)param_2 + 3) == 0x64695f74 && (int)*param_2 == 0x74736f68) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x6e6f697369766572) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 't' && *param_2 == 0x615f646575737369) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7461 && *param_2 == 0x5f73657269707865) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(param_2,param_3,
                        &anon_1b24917ebd097f132e7c2fe0e448a3c0_27_llvm_6508052046112256635,7);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


