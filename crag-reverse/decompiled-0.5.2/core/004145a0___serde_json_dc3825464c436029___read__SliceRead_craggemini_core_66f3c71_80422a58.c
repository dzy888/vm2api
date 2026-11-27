// 004145a0 <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::resume::PersistedSignatureCache>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   craggemini_core[66f3c71560d70857]::resume::PersistedSignatureCache> */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::resume::PersistedSignatureCache>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_100 [3];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined8 local_c0 [3];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  undefined1 local_48 [56];
  
  local_e8 = *param_2;
  uStack_e4 = param_2[1];
  uStack_e0 = param_2[2];
  uStack_dc = param_2[3];
  local_d8 = *(ulonglong *)(param_2 + 4);
  uStack_d0 = param_2[6];
  uStack_cc = param_2[7];
  local_100[0] = 0;
  local_100[1] = 1;
  local_100[2] = 0;
  local_c8 = 0x80;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::resume::PersistedSignatureCache_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_100);
  if (*param_1 != 0) {
    uVar4 = (*(code *)PTR_memcpy_00799008)(uVar4,0x98);
    if (local_d8 < CONCAT44(uStack_dc,uStack_e0)) {
      do {
        uVar2 = local_d8 + 1;
        uVar3 = (ulonglong)*(byte *)(CONCAT44(uStack_e4,local_e8) + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_c0[0] = 0x16;
          lVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_100,local_c0);
          param_1[1] = lVar1;
          *param_1 = 0;
          <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(local_a8);
          <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(local_78);
          uVar4 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                  ::drop(local_48);
          break;
        }
        local_d8 = uVar2;
      } while (uVar2 != CONCAT44(uStack_dc,uStack_e0));
    }
  }
  if (local_100[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


