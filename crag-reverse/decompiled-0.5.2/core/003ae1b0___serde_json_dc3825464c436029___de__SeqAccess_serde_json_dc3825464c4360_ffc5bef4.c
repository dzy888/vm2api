// 003ae1b0 <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* WARNING: Removing unreachable block (ram,0x003ae2c8) */
/* <<alloc[12e961f32105355]::vec::Vec<_> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<alloc[12e961f32105355]::string::String>
   as 
   serde_core[48776c27239fa21f]::de::Visitor>::visit_seq::<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

undefined8 * __rustcall
<<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_seq::
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  char local_58;
  char cStack_57;
  undefined6 uStack_56;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  lVar4 = 0;
  local_40 = param_2;
  local_38 = param_3;
  while (uVar6 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                 ::next_element_seed::has_next_element::
                 <serde_json[dc3825464c436029]::read::SliceRead>(&local_58,&local_40),
        local_58 != '\x01') {
    if (cStack_57 != '\x01') {
      param_1[2] = lVar4;
      *param_1 = 0;
      param_1[1] = 8;
      return param_1;
    }
    uVar6 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                      (&local_58,local_40);
    uVar3 = local_48;
    uVar2 = local_50;
    lVar5 = CONCAT62(uStack_56,CONCAT11(cStack_57,local_58));
    if (lVar5 == -1) break;
    if (lVar4 == 0) {
      (*(code *)PTR_grow_one_00799328)();
    }
    *(longlong *)(lVar4 * 0x18 + 8) = lVar5;
    *(undefined8 *)(lVar4 * 0x18 + 0x10) = uVar2;
    *(undefined8 *)(lVar4 * 0x18 + 0x18) = uVar3;
    lVar4 = lVar4 + 1;
  }
  param_1[1] = local_50;
  *param_1 = 0xffffffffffffffff;
  puVar1 = PTR___rust_dealloc_00798fc8;
  if (lVar4 != 0) {
    lVar5 = 0x10;
    do {
      if (*(longlong *)(lVar5 + -8) != 0) {
        uVar6 = (*(code *)puVar1)(uVar6,1);
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return param_1;
}


