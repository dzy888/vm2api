// 0051a990 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::resume::ModelFamily as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::resume::ModelFamily_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 6) {
    if ((short)param_2[1] == 0x6564 && *param_2 == 0x75616c63) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x616e && *param_2 == 0x616e6162) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x696e && *param_2 == 0x696d6567) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 5) && ((char)param_2[1] == 'r' && *param_2 == 0x6568746f)) {
    param_1[1] = 3;
    *param_1 = 0;
    return;
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_variant(param_2,param_3,
                          &anon_ec7f14c74815bf4c93b295cfd0665412_82_llvm_7806621557641746444,4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


