// 005c5870 <serde_json[dc3825464c436029]::value::de::MapDeserializer>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::de::MapDeserializer>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::de::MapDeserializer>
          (longlong param_1)

{
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*(char *)(param_1 + 0x48) == -1) {
    return;
  }
  <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x48);
  return;
}


