// 0045d710 <core[c0acaeba6ab4c2e0]::option::Option<u64>>

/* <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<core[c0acaeba6ab4c2e0]::option::Option<u64>>
    */

void __rustcall
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::<core[c0acaeba6ab4c2e0]::option::Option<u64>>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char local_20;
  char cStack_1f;
  undefined6 uStack_1e;
  longlong local_18;
  
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>(&local_20);
  if (local_20 != '\x01') {
    if (cStack_1f == '\0') {
      *param_1 = 2;
      return;
    }
    <core[c0acaeba6ab4c2e0]::option::Option<u64>as_serde_core[48776c27239fa21f]::de::Deserialize>::
    deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_20,*param_2);
    lVar1 = CONCAT62(uStack_1e,CONCAT11(cStack_1f,local_20));
    if (lVar1 != 2) {
      *param_1 = lVar1;
      param_1[1] = local_18;
      return;
    }
  }
  param_1[1] = local_18;
  *param_1 = -1;
  return;
}


