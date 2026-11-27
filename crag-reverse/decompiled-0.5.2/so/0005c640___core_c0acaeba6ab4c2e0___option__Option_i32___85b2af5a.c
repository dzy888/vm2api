// 0005c640 <core[c0acaeba6ab4c2e0]::option::Option<i32>>

/* <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<core[c0acaeba6ab4c2e0]::option::Option<i32>>
    */

void __rustcall
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::<core[c0acaeba6ab4c2e0]::option::Option<i32>>
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>(&local_20);
  if ((char)local_20 != '\x01') {
    if (local_20._1_1_ == '\0') {
      *param_1 = 0x200000000;
      return;
    }
    <core[c0acaeba6ab4c2e0]::option::Option<i32>as_serde_core[48776c27239fa21f]::de::Deserialize>::
    deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_20,*param_2);
    if (local_20 != 1) {
      *(ulonglong *)((longlong)param_1 + 4) = CONCAT44(local_18,uStack_1c);
      *(undefined4 *)param_1 = 0;
      return;
    }
  }
  param_1[1] = CONCAT44(uStack_14,local_18);
  *(undefined4 *)param_1 = 1;
  return;
}


