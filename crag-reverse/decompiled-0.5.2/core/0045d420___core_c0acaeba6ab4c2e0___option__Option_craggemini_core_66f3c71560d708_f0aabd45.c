// 0045d420 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta>>

/* <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta>>
    */

void __rustcall
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta>>
          (undefined8 *param_1,undefined8 *param_2)

{
  char local_50;
  char cStack_4f;
  undefined6 uStack_4e;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>(&local_50);
  if (local_50 != '\x01') {
    if (cStack_4f == '\0') {
      *param_1 = 0xfffffffffffffffe;
      return;
    }
    <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta>as_serde_core[48776c27239fa21f]::de::Deserialize>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_50,*param_2);
    if (CONCAT62(uStack_4e,CONCAT11(cStack_4f,local_50)) != -2) {
      param_1[6] = local_20;
      param_1[7] = uStack_18;
      param_1[4] = local_30;
      param_1[5] = uStack_28;
      param_1[2] = local_40;
      param_1[3] = uStack_38;
      *param_1 = CONCAT62(uStack_4e,CONCAT11(cStack_4f,local_50));
      param_1[1] = uStack_48;
      return;
    }
  }
  param_1[1] = uStack_48;
  *param_1 = 0xfffffffffffffffd;
  return;
}


