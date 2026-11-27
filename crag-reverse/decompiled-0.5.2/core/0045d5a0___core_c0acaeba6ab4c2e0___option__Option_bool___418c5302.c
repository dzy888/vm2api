// 0045d5a0 <core[c0acaeba6ab4c2e0]::option::Option<bool>>

/* <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<core[c0acaeba6ab4c2e0]::option::Option<bool>>
    */

void __rustcall
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::<core[c0acaeba6ab4c2e0]::option::Option<bool>>
          (undefined2 *param_1,undefined8 *param_2)

{
  char local_20;
  char local_1f;
  undefined8 local_18;
  
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>(&local_20);
  if (local_20 != '\x01') {
    if (local_1f == '\0') {
      *param_1 = 0xff00;
      return;
    }
    <core[c0acaeba6ab4c2e0]::option::Option<bool>as_serde_core[48776c27239fa21f]::de::Deserialize>::
    deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_20,*param_2);
    if (local_20 != '\x01') {
      *(char *)((longlong)param_1 + 1) = local_1f;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  *(undefined8 *)(param_1 + 4) = local_18;
  *(undefined1 *)param_1 = 1;
  return;
}


