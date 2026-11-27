// 0045d180 <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::license::host::HostGrant>>

/* <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::license::host::HostGrant>>
    */

void __rustcall
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::license::host::HostGrant>>
          (undefined8 *param_1,undefined8 *param_2)

{
  char local_28;
  char cStack_27;
  undefined6 uStack_26;
  undefined8 uStack_20;
  undefined8 local_18;
  
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>(&local_28);
  if (local_28 != '\x01') {
    if (cStack_27 == '\0') {
      *param_1 = 0xffffffffffffffff;
      return;
    }
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
    ::deserialize_seq::
    <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::license::host::HostGrant>>
              (&local_28,*param_2);
    if (CONCAT62(uStack_26,CONCAT11(cStack_27,local_28)) != -1) {
      param_1[2] = local_18;
      *param_1 = CONCAT62(uStack_26,CONCAT11(cStack_27,local_28));
      param_1[1] = uStack_20;
      return;
    }
  }
  param_1[1] = uStack_20;
  *param_1 = 0xfffffffffffffffe;
  return;
}


