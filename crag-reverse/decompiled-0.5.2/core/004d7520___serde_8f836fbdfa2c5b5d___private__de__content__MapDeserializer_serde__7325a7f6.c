// 004d7520 <serde[8f836fbdfa2c5b5d]::private::de::content::MapDeserializer<serde_json[dc3825464c436029]::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde[8f836fbdfa2c5b5d]::private::de::content::MapDeserializer<serde_json[dc3825464c436029]::error::Error>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<serde[8f836fbdfa2c5b5d]::private::de::content::MapDeserializer<serde_json[dc3825464c436029]::error::Error>>
          (char *param_1)

{
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x20);
  if (*param_1 == -1) {
    return;
  }
  <serde_core[48776c27239fa21f]::private::content::Content>(param_1);
  return;
}


