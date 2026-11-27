// 0014c990 <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_seq::<<alloc[12e961f32105355]::vec::Vec<_>
   as 
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>>
    */

longlong * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_seq::
<<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>>
          (longlong *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 local_31;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar3 = uVar3 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar3);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          pcVar1 = (char *)(param_2 + 0x38);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            local_30 = 0x18;
            goto LAB_0014c9ee;
          }
          *(ulonglong *)(param_2 + 0x28) = uVar3;
          <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>as_serde_core[48776c27239fa21f]::de::Visitor>
          ::visit_seq::
          <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
                    (&local_30,param_2,1);
          *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
          lVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::end_seq(param_2);
          if (local_30 == -1) {
            if (lVar4 != 0) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                        (lVar4);
            }
          }
          else {
            if (lVar4 == 0) {
              *param_1 = local_30;
              param_1[1] = local_28;
              param_1[2] = local_20;
              return param_1;
            }
            if (local_30 == 0) goto LAB_0014ca93;
            (*(code *)PTR___rust_dealloc_00219c40)();
            local_28 = lVar4;
          }
          lVar4 = local_28;
        }
        else {
          lVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_invalid_type(param_2,&local_31,&DAT_00215050);
        }
LAB_0014ca93:
        lVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                          (lVar4,param_2);
        goto LAB_0014ca9e;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3;
    } while (uVar3 != *(ulonglong *)(param_2 + 0x20));
  }
  local_30 = 5;
LAB_0014c9ee:
  lVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_30);
LAB_0014ca9e:
  param_1[1] = lVar4;
  *param_1 = -1;
  return param_1;
}


