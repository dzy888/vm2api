// 0004f080 <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::TaggedContentVisitor<<agy_bridge[64a9e9deac6c45ce]::Command
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field> as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_seq::<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

char * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::TaggedContentVisitor<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_seq::
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (char *param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 uVar2;
  char local_80;
  char cStack_7f;
  undefined5 uStack_7e;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined8 local_58;
  undefined1 local_50;
  char local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_58 = param_3;
  local_50 = param_4;
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
            (&local_80,&local_58);
  uVar2 = local_58;
  if (local_80 != '\x01') {
    if (cStack_7f != '\x01') {
      local_28 = *param_2;
      uStack_24 = param_2[1];
      uStack_20 = param_2[2];
      uStack_1c = param_2[3];
      local_80 = (char)&local_28;
      cStack_7f = (char)((ulonglong)&local_28 >> 8);
      uStack_7e = (undefined5)((ulonglong)&local_28 >> 0x10);
      uStack_79 = (undefined1)((ulonglong)&local_28 >> 0x38);
      uStack_78 = 0x67060;
      uStack_71 = 0;
      uStack_40 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                            (anon_9fa032a1d30ceca52b5a2d5222eaa356_12_llvm_10768355879922845107,
                             &local_80);
      goto LAB_0004f0d6;
    }
    <core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_80,local_58);
    cVar1 = cStack_7f;
    if (local_80 != '\x01') {
      <serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
      ::visit_seq::
      <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
                (&local_48,uVar2,local_50);
      if (local_48 != -1) {
        uStack_69 = (undefined1)local_38;
        uStack_68 = (undefined7)((ulonglong)local_38 >> 8);
        uStack_61 = (undefined1)uStack_30;
        uStack_71 = (undefined1)uStack_40;
        uStack_70 = (undefined7)((ulonglong)uStack_40 >> 8);
        *param_1 = cVar1;
        *(ulonglong *)(param_1 + 1) =
             CONCAT17(local_48,CONCAT52(uStack_7e,CONCAT11(cStack_7f,local_80)));
        *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_71,uStack_47);
        *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_69,uStack_70);
        *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_61,uStack_68);
        *(undefined8 *)(param_1 + 0x20) = uStack_30;
        return param_1;
      }
      goto LAB_0004f0d6;
    }
  }
  uStack_40 = CONCAT17(uStack_71,uStack_78);
LAB_0004f0d6:
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *param_1 = -1;
  return param_1;
}


