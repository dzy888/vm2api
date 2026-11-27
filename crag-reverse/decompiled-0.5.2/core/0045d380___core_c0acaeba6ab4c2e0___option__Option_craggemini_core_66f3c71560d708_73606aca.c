// 0045d380 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::ResumeCutMeta>>

/* <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::ResumeCutMeta>>
    */

void __rustcall
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::ResumeCutMeta>>
          (undefined8 *param_1,undefined8 *param_2)

{
  char local_78;
  char cStack_77;
  undefined6 uStack_76;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>(&local_78);
  if (local_78 != '\x01') {
    if (cStack_77 == '\0') {
      *param_1 = 0xfffffffffffffffe;
      return;
    }
    <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::ResumeCutMeta>as_serde_core[48776c27239fa21f]::de::Deserialize>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_78,*param_2);
    if (CONCAT62(uStack_76,CONCAT11(cStack_77,local_78)) != -2) {
      param_1[0xc] = local_18;
      param_1[10] = local_28;
      param_1[0xb] = uStack_20;
      param_1[8] = local_38;
      param_1[9] = uStack_30;
      param_1[6] = local_48;
      param_1[7] = uStack_40;
      param_1[4] = local_58;
      param_1[5] = uStack_50;
      param_1[2] = local_68;
      param_1[3] = uStack_60;
      *param_1 = CONCAT62(uStack_76,CONCAT11(cStack_77,local_78));
      param_1[1] = uStack_70;
      return;
    }
  }
  param_1[1] = uStack_70;
  *param_1 = 0xfffffffffffffffd;
  return;
}


