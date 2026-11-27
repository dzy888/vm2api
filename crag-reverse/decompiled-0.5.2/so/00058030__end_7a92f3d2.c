// 00058030 end

/* <serde[8f836fbdfa2c5b5d]::private::de::content::MapDeserializer<serde_json[dc3825464c436029]::error::Error>>::end
    */

undefined8 __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::MapDeserializer<serde_json[dc3825464c436029]::error::Error>>
::end(char *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_20;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x38);
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x20);
  if (lVar3 == lVar2) {
    uVar4 = 0;
    cVar1 = *param_1;
  }
  else {
    local_20 = *(longlong *)(param_1 + 0x40);
    uVar4 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
            ::invalid_length(((ulonglong)(lVar3 - lVar2) >> 6) + local_20,&local_20,&DAT_000c0098);
    cVar1 = *param_1;
  }
  if (cVar1 != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <serde_core[48776c27239fa21f]::private::content::Content>(param_1);
  }
  return uVar4;
}


