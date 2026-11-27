// 00600ab0 <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::Envelope_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>

/* <serde_json[dc3825464c436029]::value::de::MapDeserializer as
   serde_core[48776c27239fa21f]::de::MapAccess>::next_key_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::Envelope
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>> */

undefined2 * __rustcall
<serde_json[dc3825464c436029]::value::de::MapDeserializer_as_serde_core[48776c27239fa21f]::de::MapAccess>
::next_key_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::Envelope_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
          (undefined2 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  char local_70;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::dying_next(&local_70);
  lVar5 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,local_70));
  if (lVar5 != 0) {
    lVar2 = *(longlong *)(lVar5 + 0x168 + local_60 * 0x18);
    uVar3 = *(undefined8 *)(lVar5 + 0x170 + local_60 * 0x18);
    uVar4 = *(undefined8 *)(lVar5 + 0x178 + local_60 * 0x18);
    puVar1 = (undefined4 *)(lVar5 + local_60 * 0x20);
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    puVar1 = (undefined4 *)(lVar5 + 0x10 + local_60 * 0x20);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    if (lVar2 != -1) {
      if (*(char *)(param_2 + 0x48) != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  ((undefined4 *)(param_2 + 0x48));
      }
      *(undefined4 *)(param_2 + 0x58) = local_48;
      *(undefined4 *)(param_2 + 0x5c) = uStack_44;
      *(undefined4 *)(param_2 + 0x60) = uStack_40;
      *(undefined4 *)(param_2 + 100) = uStack_3c;
      *(undefined4 *)(param_2 + 0x48) = local_58;
      *(undefined4 *)(param_2 + 0x4c) = uStack_54;
      *(undefined4 *)(param_2 + 0x50) = uStack_50;
      *(undefined4 *)(param_2 + 0x54) = uStack_4c;
      uVar6 = <<craggemini_core[66f3c71560d70857]::protocol::Envelope_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
              ::visit_str::<serde_json[dc3825464c436029]::error::Error>(&local_70,uVar3,uVar4);
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
      }
      if (local_70 == '\x01') {
        *(undefined8 *)(param_1 + 4) = local_68;
        *(undefined1 *)param_1 = 1;
        return param_1;
      }
      *(undefined1 *)((longlong)param_1 + 1) = uStack_6f;
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
  }
  *param_1 = 0xff00;
  return param_1;
}


