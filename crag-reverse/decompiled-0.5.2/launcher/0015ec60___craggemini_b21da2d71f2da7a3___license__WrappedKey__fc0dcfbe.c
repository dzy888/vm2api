// 0015ec60 <craggemini[b21da2d71f2da7a3]::license::WrappedKey>

/* <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<craggemini[b21da2d71f2da7a3]::license::WrappedKey>
    */

void __rustcall
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::<craggemini[b21da2d71f2da7a3]::license::WrappedKey>
          (undefined8 *param_1,undefined8 *param_2)

{
  char local_70;
  char cStack_6f;
  undefined6 uStack_6e;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>(&local_70);
  if (local_70 != '\x01') {
    if (cStack_6f == '\0') {
      *param_1 = 0xffffffffffffffff;
      return;
    }
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
    ::deserialize_struct::
    <<craggemini[b21da2d71f2da7a3]::license::WrappedKey_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
              (&local_70,*param_2);
    if (CONCAT62(uStack_6e,CONCAT11(cStack_6f,local_70)) != -1) {
      param_1[10] = local_20;
      param_1[0xb] = uStack_18;
      param_1[8] = local_30;
      param_1[9] = uStack_28;
      param_1[6] = local_40;
      param_1[7] = uStack_38;
      param_1[4] = local_50;
      param_1[5] = uStack_48;
      param_1[2] = local_60;
      param_1[3] = uStack_58;
      *param_1 = CONCAT62(uStack_6e,CONCAT11(cStack_6f,local_70));
      param_1[1] = uStack_68;
      return;
    }
  }
  param_1[1] = uStack_68;
  *param_1 = 0xfffffffffffffffe;
  return;
}


