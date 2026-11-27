// 004f3710 <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<alloc[12e961f32105355]::string::String>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_seq::<<alloc[12e961f32105355]::vec::Vec<_>
   as 
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<alloc[12e961f32105355]::string::String>>
    */

longlong * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_seq::
<<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<alloc[12e961f32105355]::string::String>>
          (longlong *param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 local_89;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 == '\x14') {
    local_60 = *(undefined8 *)(param_2 + 8);
    local_70 = *(longlong *)(param_2 + 0x10);
    uStack_58 = *(longlong *)(param_2 + 0x18) * 0x20 + local_70;
    local_50 = 0;
    uStack_68 = local_70;
    <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_seq::
    <&mut_serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>>
              (param_1,&local_70);
    lVar2 = local_50;
    lVar1 = uStack_58;
    lVar3 = uStack_68;
    if (*param_1 == -1) {
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<serde_core[48776c27239fa21f]::private::content::Content>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_70);
    }
    else {
      local_78 = param_1[2];
      local_88 = *param_1;
      lStack_80 = param_1[1];
      local_48 = local_70;
      uStack_40 = (undefined4)uStack_68;
      uStack_3c = uStack_68._4_4_;
      local_38 = (undefined4)local_60;
      uStack_34 = local_60._4_4_;
      uStack_30 = (undefined4)uStack_58;
      uStack_2c = uStack_58._4_4_;
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<serde_core[48776c27239fa21f]::private::content::Content>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_48);
      if (lVar1 - lVar3 != 0) {
        local_48 = lVar2;
        lVar3 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                ::invalid_length(((ulonglong)(lVar1 - lVar3) >> 5) + lVar2,&local_48,&DAT_0078c898);
        param_1[1] = lVar3;
        *param_1 = -1;
        uVar4 = <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                ::drop(&local_88);
        if (local_88 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,8);
        }
      }
    }
  }
  else {
    lVar3 = ::
            <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
            ::invalid_type(param_2,&local_89,&DAT_0078c358);
    param_1[1] = lVar3;
    *param_1 = -1;
  }
  return param_1;
}


