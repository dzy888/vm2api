// 004f6c00 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::FromBridge as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_char::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::FromBridge_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_char::<serde_json[dc3825464c436029]::error::Error>(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint local_28 [2];
  undefined1 local_20;
  undefined1 *local_18;
  undefined8 local_10;
  
  local_18 = (undefined1 *)local_28;
  uVar4 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_28[0] = param_2 & 0xff;
    local_10 = 1;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_28[0] = (uint)(CONCAT11(uVar4,uVar2) & 0x3fff | 0x80c0);
      local_10 = 2;
    }
    else {
      uVar3 = (undefined1)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        local_28[0] = (uint)(CONCAT12(uVar4,CONCAT11(uVar2,uVar3)) & 0x3f3fff | 0x8080e0);
        local_10 = 3;
      }
      else {
        local_28[0] = CONCAT13(uVar4,CONCAT12(uVar2,CONCAT11(uVar3,(char)(param_2 >> 0x12)))) &
                      0x3f3f3fff | 0x808080f0;
        local_10 = 4;
      }
    }
  }
  local_20 = 5;
  uVar1 = (*(code *)PTR_invalid_type_007997e8)(local_28,&DAT_0078c800);
  param_1[1] = uVar1;
  *param_1 = 0xffffffffffffffff;
  return;
}


