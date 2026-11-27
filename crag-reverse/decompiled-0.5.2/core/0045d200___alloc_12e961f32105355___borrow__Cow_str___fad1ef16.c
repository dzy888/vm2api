// 0045d200 <alloc[12e961f32105355]::borrow::Cow<str>>

/* <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<alloc[12e961f32105355]::borrow::Cow<str>>
    */

void __rustcall
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::<alloc[12e961f32105355]::borrow::Cow<str>>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char local_28;
  char cStack_27;
  undefined6 uStack_26;
  longlong local_20;
  longlong local_18;
  
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>(&local_28);
  if (local_28 != '\x01') {
    if (cStack_27 == '\0') {
      *param_1 = -2;
      return;
    }
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
    ::deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
              (&local_28,*param_2);
    lVar1 = CONCAT62(uStack_26,CONCAT11(cStack_27,local_28));
    if (lVar1 != -1) {
      *param_1 = lVar1;
      param_1[1] = local_20;
      param_1[2] = local_18;
      return;
    }
  }
  param_1[1] = local_20;
  *param_1 = -3;
  return;
}


