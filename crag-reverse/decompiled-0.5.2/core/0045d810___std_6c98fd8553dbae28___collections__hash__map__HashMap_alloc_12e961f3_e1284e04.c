// 0045d810 <std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,usize>>

/* <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   usize>> */

void __rustcall
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::
<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,usize>>
          (undefined8 *param_1,undefined8 *param_2)

{
  char local_40;
  char cStack_3f;
  undefined6 uStack_3e;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>(&local_40);
  if (local_40 != '\x01') {
    if (cStack_3f == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
    ::deserialize_map::
    <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,usize,std[6c98fd8553dbae28]::hash::random::RandomState>>
              (&local_40,*param_2);
    if (CONCAT62(uStack_3e,CONCAT11(cStack_3f,local_40)) != 0) {
      param_1[5] = local_20;
      param_1[6] = uStack_18;
      param_1[3] = local_30;
      param_1[4] = uStack_28;
      param_1[1] = CONCAT62(uStack_3e,CONCAT11(cStack_3f,local_40));
      param_1[2] = uStack_38;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = uStack_38;
  *param_1 = 1;
  return;
}


