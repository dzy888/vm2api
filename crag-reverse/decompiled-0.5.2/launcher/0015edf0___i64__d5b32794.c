// 0015edf0 <i64>

/* <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<i64> */

void __rustcall
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::<i64>(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  char local_20;
  char local_1f;
  undefined8 local_18;
  
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>(&local_20);
  if (local_20 == '\x01') {
    param_1[1] = local_18;
  }
  else {
    if (local_1f == '\0') {
      *param_1 = 0;
      return;
    }
    auVar1 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<i64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
             ::deserialize::
             <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       (*param_2);
    if (auVar1._0_8_ != 1) {
      *param_1 = 1;
      param_1[1] = auVar1._8_8_;
      return;
    }
    param_1[1] = auVar1._8_8_;
  }
  *param_1 = 2;
  return;
}


