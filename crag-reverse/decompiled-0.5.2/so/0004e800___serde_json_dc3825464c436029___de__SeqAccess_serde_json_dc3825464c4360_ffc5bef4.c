// 0004e800 <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_seq::<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

undefined1 * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_seq::
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (undefined1 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  char local_88;
  char cStack_87;
  undefined2 uStack_86;
  undefined1 uStack_84;
  undefined2 uStack_83;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_a0 = 0;
  lStack_98 = 8;
  local_90 = 0;
  local_68 = param_1;
  local_60 = param_2;
  local_58 = param_3;
  while (uVar5 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                 ::next_element_seed::has_next_element::
                 <serde_json[dc3825464c436029]::read::SliceRead>(&local_88,&local_60),
        local_88 != '\x01') {
    if (cStack_87 != '\x01') {
      uStack_81 = (undefined1)local_a0;
      uStack_80 = (undefined7)((ulonglong)local_a0 >> 8);
      uStack_79 = (undefined1)lStack_98;
      *local_68 = 0x14;
      *(ulonglong *)(local_68 + 1) =
           CONCAT17(uStack_81,
                    CONCAT25(uStack_83,
                             CONCAT14(uStack_84,CONCAT22(uStack_86,CONCAT11(cStack_87,local_88)))));
      *(ulonglong *)(local_68 + 9) = CONCAT17(uStack_79,uStack_80);
      *(longlong *)(local_68 + 0x10) = lStack_98;
      *(longlong *)(local_68 + 0x18) = local_90;
      return local_68;
    }
    uVar5 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::__deserialize_content_v1::
            <serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor>(&local_88,local_60);
    lVar4 = local_90;
    if (local_88 == -1) break;
    uStack_4c = CONCAT31((int3)(CONCAT13(uStack_81,CONCAT21(uStack_83,uStack_84)) >> 8),uStack_84);
    uStack_48 = CONCAT17(uStack_79,uStack_80);
    local_40 = uStack_78;
    uStack_3c = uStack_74;
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    local_50 = CONCAT31(CONCAT21(uStack_86,cStack_87),local_88);
    if (local_90 == local_a0) {
      <alloc[12e961f32105355]::raw_vec::RawVec<(usize,alloc[12e961f32105355]::vec::Vec<u8>)>>::
      grow_one(&local_a0);
    }
    lVar3 = lVar4 * 0x20;
    puVar1 = (undefined4 *)(lStack_98 + 0x10 + lVar3);
    *puVar1 = local_40;
    puVar1[1] = uStack_3c;
    puVar1[2] = uStack_38;
    puVar1[3] = uStack_34;
    puVar1 = (undefined4 *)(lStack_98 + lVar3);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (undefined4)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    local_90 = lVar4 + 1;
  }
  puVar2 = local_68;
  *(ulonglong *)(local_68 + 8) = CONCAT17(uStack_79,uStack_80);
  *local_68 = 0xff;
  lVar4 = lStack_98;
  for (lVar3 = local_90 + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
    uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <serde_core[48776c27239fa21f]::private::content::Content>(lVar4);
    lVar4 = lVar4 + 0x20;
  }
  if (local_a0 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar5,8);
  }
  return puVar2;
}


