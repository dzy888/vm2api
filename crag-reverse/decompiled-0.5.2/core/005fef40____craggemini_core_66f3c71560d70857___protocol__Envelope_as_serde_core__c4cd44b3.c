// 005fef40 <<craggemini_core[66f3c71560d70857]::protocol::Envelope_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <serde_json[dc3825464c436029]::value::Value as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::protocol::Envelope
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

longlong * __rustcall
<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserializer>::
deserialize_struct::
<<craggemini_core[66f3c71560d70857]::protocol::Envelope_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (longlong *param_1,byte *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 local_202;
  char local_201;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  uint local_1dc;
  char local_1d8;
  uint local_1d7;
  undefined4 uStack_1d3;
  undefined4 uStack_1cf;
  undefined2 uStack_1cb;
  undefined1 uStack_1c9;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  char *local_1b8;
  uint local_1ac;
  longlong local_1a8;
  char local_1a0;
  undefined4 uStack_19f;
  undefined4 uStack_19b;
  undefined4 uStack_197;
  undefined2 uStack_193;
  undefined1 uStack_191;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined3 uStack_17c;
  char *local_178;
  char *local_170;
  undefined8 local_168;
  char *local_160;
  longlong local_158;
  longlong local_150;
  char local_148;
  char cStack_147;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined1 uStack_140;
  undefined4 uStack_13f;
  undefined2 uStack_13b;
  undefined1 uStack_139;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  bVar1 = *param_2;
  if (bVar1 != 4) {
    if (bVar1 == 5) {
      <serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_serde_core[48776c27239fa21f]::de::Deserializer>
      ::deserialize_any::
      <<craggemini_core[66f3c71560d70857]::protocol::Envelope_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                (param_1,param_2 + 8);
      return param_1;
    }
    lVar5 = ::<serde_json[dc3825464c436029]::value::Value>::invalid_type::
            <serde_json[dc3825464c436029]::error::Error>(param_2,&local_202,&DAT_0078edb0);
    param_1[1] = lVar5;
    *param_1 = -1;
    goto joined_r0x005ff1da;
  }
  local_168 = *(undefined8 *)(param_2 + 8);
  pcVar2 = *(char **)(param_2 + 0x10);
  lVar5 = *(longlong *)(param_2 + 0x18);
  pcVar8 = pcVar2 + lVar5 * 0x20;
  local_170 = pcVar2;
  local_178 = pcVar2;
  local_160 = pcVar8;
  if (lVar5 == 0) {
LAB_005ff19f:
    lVar7 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
            ::invalid_length(0,&PTR_DAT_0078ed08,&DAT_0078eb58);
LAB_005ff1b7:
    param_1[1] = lVar7;
    *param_1 = -1;
  }
  else {
    local_170 = pcVar2 + 0x20;
    cVar9 = *pcVar2;
    if (cVar9 == -1) goto LAB_005ff19f;
    uVar10 = *(undefined4 *)(pcVar2 + 1);
    uStack_13f = *(undefined4 *)(pcVar2 + 9);
    uStack_138 = (undefined4)*(longlong *)(pcVar2 + 0x10);
    uStack_134 = *(undefined4 *)(pcVar2 + 0x14);
    lVar7 = *(longlong *)(pcVar2 + 0x10);
    uStack_130 = (undefined4)*(longlong *)(pcVar2 + 0x18);
    uStack_12c = *(undefined4 *)(pcVar2 + 0x1c);
    lVar4 = *(longlong *)(pcVar2 + 0x18);
    cStack_147 = (char)uVar10;
    uStack_146 = (undefined2)((uint)uVar10 >> 8);
    uStack_144._1_3_ = (undefined3)*(undefined4 *)(pcVar2 + 5);
    uStack_144 = CONCAT31(uStack_144._1_3_,(char)((uint)uVar10 >> 0x18));
    uStack_140 = (undefined1)((uint)*(undefined4 *)(pcVar2 + 5) >> 0x18);
    uStack_13b = (undefined2)*(undefined4 *)(pcVar2 + 0xd);
    uStack_139 = (undefined1)((uint)*(undefined4 *)(pcVar2 + 0xd) >> 0x10);
    local_148 = cVar9;
    if (cVar9 != '\x03') {
      lVar7 = ::<serde_json[dc3825464c436029]::value::Value>::invalid_type::
              <serde_json[dc3825464c436029]::error::Error>
                        (&local_148,&local_202,
                         anon_1b4a85c95499e1b671cf4fa96a1b6d0f_81_llvm_10049508496007902178);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_148);
      goto LAB_005ff1b7;
    }
    local_1f0 = CONCAT17(uStack_139,CONCAT25(uStack_13b,CONCAT41(uStack_13f,uStack_140)));
    local_1e8 = lVar7;
    if (local_1f0 == -1) goto LAB_005ff1b7;
    local_200 = lVar5;
    if (lVar5 == 1) {
LAB_005ff1f9:
      lVar5 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::invalid_length(1,&PTR_DAT_0078ed08,&DAT_0078eb58);
      uVar10 = extraout_XMM0_Da;
LAB_005ff214:
      param_1[1] = lVar5;
LAB_005ff218:
      *param_1 = -1;
      lVar5 = local_1f0;
LAB_005ff229:
      if (lVar5 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
      }
    }
    else {
      local_1b8 = pcVar2 + 0x40;
      cVar9 = pcVar2[0x20];
      local_170 = local_1b8;
      local_70 = lVar4;
      if (cVar9 == -1) goto LAB_005ff1f9;
      uVar10 = *(undefined4 *)(pcVar2 + 0x21);
      uStack_13f = *(undefined4 *)(pcVar2 + 0x29);
      uStack_138 = *(undefined4 *)(pcVar2 + 0x30);
      uStack_134 = *(undefined4 *)(pcVar2 + 0x34);
      uStack_130 = *(undefined4 *)(pcVar2 + 0x38);
      uStack_12c = *(undefined4 *)(pcVar2 + 0x3c);
      cStack_147 = (char)uVar10;
      uStack_146 = (undefined2)((uint)uVar10 >> 8);
      uStack_144._1_3_ = (undefined3)*(undefined4 *)(pcVar2 + 0x25);
      uStack_144 = CONCAT31(uStack_144._1_3_,(char)((uint)uVar10 >> 0x18));
      uStack_140 = (undefined1)((uint)*(undefined4 *)(pcVar2 + 0x25) >> 0x18);
      uStack_13b = (undefined2)*(undefined4 *)(pcVar2 + 0x2d);
      uStack_139 = (undefined1)((uint)*(undefined4 *)(pcVar2 + 0x2d) >> 0x10);
      local_148 = cVar9;
      if (cVar9 == '\x01') {
        local_201 = cStack_147;
        lVar5 = 4;
      }
      else {
        lVar5 = ::<serde_json[dc3825464c436029]::value::Value>::invalid_type::
                <serde_json[dc3825464c436029]::error::Error>
                          (&local_148,&local_202,
                           anon_1b4a85c95499e1b671cf4fa96a1b6d0f_80_llvm_10049508496007902178);
      }
      uVar10 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                         (&local_148);
      if (cVar9 != '\x01') goto LAB_005ff214;
      local_150 = 2;
      if (local_200 != 2) {
        local_1b8 = pcVar2 + 0x60;
        cVar9 = pcVar2[0x40];
        local_170 = local_1b8;
        if (cVar9 == -1) goto LAB_005ff263;
        uStack_19f = *(undefined4 *)(pcVar2 + 0x41);
        uStack_19b = *(undefined4 *)(pcVar2 + 0x45);
        uVar3 = *(undefined8 *)(pcVar2 + 0x41);
        uStack_197 = *(undefined4 *)(pcVar2 + 0x49);
        uStack_190 = *(undefined4 *)(pcVar2 + 0x50);
        uStack_18c = *(undefined4 *)(pcVar2 + 0x54);
        uStack_188 = *(undefined4 *)(pcVar2 + 0x58);
        uStack_184 = *(undefined4 *)(pcVar2 + 0x5c);
        uStack_193 = (undefined2)*(undefined4 *)(pcVar2 + 0x4d);
        uStack_191 = (undefined1)((uint)*(undefined4 *)(pcVar2 + 0x4d) >> 0x10);
        local_1a0 = cVar9;
        if (cVar9 == '\0') {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_1a0);
          local_150 = 2;
          goto LAB_005ff263;
        }
        local_1d7 = (uint)uVar3;
        uStack_1d3 = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_1cb = uStack_193;
        uStack_1c9 = uStack_191;
        local_1d8 = cVar9;
        uStack_1cf = uStack_197;
        uStack_1c8 = uStack_190;
        uStack_1c4 = uStack_18c;
        uStack_1c0 = uStack_188;
        uStack_1bc = uStack_184;
        uVar10 = <<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                           (&local_148,&local_1d8);
        lVar7 = CONCAT44(uStack_144,CONCAT22(uStack_146,CONCAT11(cStack_147,local_148)));
        lVar5 = CONCAT17(uStack_139,CONCAT25(uStack_13b,CONCAT41(uStack_13f,uStack_140)));
        if (lVar7 != 2) {
          local_48 = local_128;
          uStack_40 = uStack_120;
          local_58 = uStack_138;
          uStack_54 = uStack_134;
          uStack_50 = uStack_130;
          uStack_4c = uStack_12c;
          local_150 = lVar7;
          local_80 = lVar5;
          goto LAB_005ff263;
        }
LAB_005ff359:
        param_1[1] = lVar5;
        goto LAB_005ff218;
      }
LAB_005ff263:
      if (local_1b8 != pcVar8) {
        pcVar2 = local_1b8 + 0x20;
        cVar9 = *local_1b8;
        local_170 = pcVar2;
        if (cVar9 == -1) {
          local_1f8 = -1;
        }
        else {
          local_1d7 = *(uint *)(local_1b8 + 1);
          uStack_1d3 = *(undefined4 *)(local_1b8 + 5);
          uVar3 = *(undefined8 *)(local_1b8 + 1);
          uStack_1cf = *(undefined4 *)(local_1b8 + 9);
          uStack_1c8 = *(undefined4 *)(local_1b8 + 0x10);
          uStack_1c4 = *(undefined4 *)(local_1b8 + 0x14);
          uStack_1c0 = *(undefined4 *)(local_1b8 + 0x18);
          uStack_1bc = *(undefined4 *)(local_1b8 + 0x1c);
          uStack_1cb = (undefined2)*(undefined4 *)(local_1b8 + 0xd);
          uStack_1c9 = (undefined1)((uint)*(undefined4 *)(local_1b8 + 0xd) >> 0x10);
          local_1d8 = cVar9;
          if (cVar9 == '\0') {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_1d8);
            local_1f8 = -1;
          }
          else {
            cStack_147 = (char)uVar3;
            uStack_146 = (undefined2)((ulonglong)uVar3 >> 8);
            uStack_144 = (undefined4)((ulonglong)uVar3 >> 0x18);
            uStack_140 = (undefined1)((ulonglong)uVar3 >> 0x38);
            uStack_13b = uStack_1cb;
            uStack_139 = uStack_1c9;
            local_148 = cVar9;
            uStack_13f = uStack_1cf;
            uStack_138 = uStack_1c8;
            uStack_134 = uStack_1c4;
            uStack_130 = uStack_1c0;
            uStack_12c = uStack_1bc;
            uVar10 = <alloc[12e961f32105355]::string::String_as_serde_core[48776c27239fa21f]::de::Deserialize>
                     ::deserialize::<serde_json[dc3825464c436029]::value::Value>
                               (&local_1a0,&local_148);
            local_1f8 = CONCAT35((undefined3)uStack_19b,CONCAT41(uStack_19f,local_1a0));
            lVar5 = CONCAT17(uStack_191,CONCAT25(uStack_193,CONCAT41(uStack_197,uStack_19b._3_1_)));
            if (local_1f8 == -1) goto LAB_005ff359;
            local_78 = CONCAT44(uStack_18c,uStack_190);
            local_158 = lVar5;
          }
        }
        lVar5 = local_200;
        if (pcVar2 == pcVar8) goto LAB_005ff3f7;
        pcVar2 = local_1b8 + 0x40;
        local_170 = pcVar2;
        if (local_1b8[0x20] == -1) {
          local_1ac = 0;
LAB_005ff664:
          if (pcVar2 == pcVar8) {
            local_1dc = 0;
            goto LAB_005ff3ff;
          }
          pcVar2 = local_1b8 + 0x60;
          local_170 = pcVar2;
          if (local_1b8[0x40] == -1) {
            local_1dc = 0;
          }
          else {
            uVar10 = *(undefined4 *)(local_1b8 + 0x41);
            uStack_13f = *(undefined4 *)(local_1b8 + 0x49);
            uStack_138 = *(undefined4 *)(local_1b8 + 0x50);
            uStack_134 = *(undefined4 *)(local_1b8 + 0x54);
            uStack_130 = *(undefined4 *)(local_1b8 + 0x58);
            uStack_12c = *(undefined4 *)(local_1b8 + 0x5c);
            cStack_147 = (char)uVar10;
            uStack_146 = (undefined2)((uint)uVar10 >> 8);
            uStack_144._1_3_ = (undefined3)*(undefined4 *)(local_1b8 + 0x45);
            uStack_144 = CONCAT31(uStack_144._1_3_,(char)((uint)uVar10 >> 0x18));
            uStack_140 = (undefined1)((uint)*(undefined4 *)(local_1b8 + 0x45) >> 0x18);
            uStack_13b = (undefined2)*(undefined4 *)(local_1b8 + 0x4d);
            uStack_139 = (undefined1)((uint)*(undefined4 *)(local_1b8 + 0x4d) >> 0x10);
            local_148 = local_1b8[0x40];
            uVar10 = <bool_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::
                     <serde_json[dc3825464c436029]::value::Value>(&local_1d8,&local_148);
            if (local_1d8 != '\0') goto LAB_005ff6c2;
            local_1dc = local_1d7 & 0xff;
          }
          if (pcVar2 == pcVar8) goto LAB_005ff3ff;
          pcVar2 = local_1b8 + 0x80;
          cVar9 = local_1b8[0x60];
          lVar7 = -1;
          local_170 = pcVar2;
          if (cVar9 == -1) {
            local_200 = -1;
          }
          else {
            local_1d7 = *(uint *)(local_1b8 + 0x61);
            uStack_1d3 = *(undefined4 *)(local_1b8 + 0x65);
            uVar3 = *(undefined8 *)(local_1b8 + 0x61);
            uStack_1cf = *(undefined4 *)(local_1b8 + 0x69);
            uStack_1c8 = *(undefined4 *)(local_1b8 + 0x70);
            uStack_1c4 = *(undefined4 *)(local_1b8 + 0x74);
            uStack_1c0 = *(undefined4 *)(local_1b8 + 0x78);
            uStack_1bc = *(undefined4 *)(local_1b8 + 0x7c);
            uStack_1cb = (undefined2)*(undefined4 *)(local_1b8 + 0x6d);
            uStack_1c9 = (undefined1)((uint)*(undefined4 *)(local_1b8 + 0x6d) >> 0x10);
            local_1d8 = cVar9;
            if (cVar9 == '\0') {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_1d8);
              local_200 = -1;
            }
            else {
              cStack_147 = (char)uVar3;
              uStack_146 = (undefined2)((ulonglong)uVar3 >> 8);
              uStack_144 = (undefined4)((ulonglong)uVar3 >> 0x18);
              uStack_140 = (undefined1)((ulonglong)uVar3 >> 0x38);
              uStack_13b = uStack_1cb;
              uStack_139 = uStack_1c9;
              local_148 = cVar9;
              uStack_13f = uStack_1cf;
              uStack_138 = uStack_1c8;
              uStack_134 = uStack_1c4;
              uStack_130 = uStack_1c0;
              uStack_12c = uStack_1bc;
              uVar10 = <alloc[12e961f32105355]::string::String_as_serde_core[48776c27239fa21f]::de::Deserialize>
                       ::deserialize::<serde_json[dc3825464c436029]::value::Value>
                                 (&local_1a0,&local_148);
              local_200 = CONCAT35((undefined3)uStack_19b,CONCAT41(uStack_19f,local_1a0));
              lVar4 = CONCAT17(uStack_191,CONCAT25(uStack_193,CONCAT41(uStack_197,uStack_19b._3_1_))
                              );
              local_1a8 = lVar4;
              if (local_200 == -1) goto LAB_005ff6c7;
              local_88 = CONCAT44(uStack_18c,uStack_190);
            }
          }
          if (pcVar2 == pcVar8) goto LAB_005ff406;
          local_170 = local_1b8 + 0xa0;
          cVar9 = local_1b8[0x80];
          if (cVar9 == -1) goto LAB_005ff406;
          local_1d7 = *(uint *)(local_1b8 + 0x81);
          uStack_1d3 = *(undefined4 *)(local_1b8 + 0x85);
          uVar3 = *(undefined8 *)(local_1b8 + 0x81);
          uStack_1cf = *(undefined4 *)(local_1b8 + 0x89);
          uStack_1c8 = *(undefined4 *)(local_1b8 + 0x90);
          uStack_1c4 = *(undefined4 *)(local_1b8 + 0x94);
          uStack_1c0 = *(undefined4 *)(local_1b8 + 0x98);
          uStack_1bc = *(undefined4 *)(local_1b8 + 0x9c);
          uStack_1cb = (undefined2)*(undefined4 *)(local_1b8 + 0x8d);
          uStack_1c9 = (undefined1)((uint)*(undefined4 *)(local_1b8 + 0x8d) >> 0x10);
          local_1d8 = cVar9;
          if (cVar9 == '\0') {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_1d8);
            lVar7 = -1;
            goto LAB_005ff406;
          }
          cStack_147 = (char)uVar3;
          uStack_146 = (undefined2)((ulonglong)uVar3 >> 8);
          uStack_144 = (undefined4)((ulonglong)uVar3 >> 0x18);
          uStack_140 = (undefined1)((ulonglong)uVar3 >> 0x38);
          uStack_13b = uStack_1cb;
          uStack_139 = uStack_1c9;
          local_148 = cVar9;
          uStack_13f = uStack_1cf;
          uStack_138 = uStack_1c8;
          uStack_134 = uStack_1c4;
          uStack_130 = uStack_1c0;
          uStack_12c = uStack_1bc;
          uVar10 = <alloc[12e961f32105355]::string::String_as_serde_core[48776c27239fa21f]::de::Deserialize>
                   ::deserialize::<serde_json[dc3825464c436029]::value::Value>
                             (&local_1a0,&local_148);
          lVar7 = CONCAT35((undefined3)uStack_19b,CONCAT41(uStack_19f,local_1a0));
          pcVar2 = (char *)CONCAT17(uStack_191,
                                    CONCAT25(uStack_193,CONCAT41(uStack_197,uStack_19b._3_1_)));
          if (lVar7 != -1) {
            pcVar8 = (char *)CONCAT44(uStack_18c,uStack_190);
            local_1b8 = pcVar2;
            goto LAB_005ff406;
          }
          param_1[1] = (longlong)pcVar2;
          *param_1 = -1;
          lVar4 = local_1f8;
          lVar5 = local_1f0;
          goto joined_r0x005ff9b9;
        }
        uVar10 = *(undefined4 *)(local_1b8 + 0x21);
        uStack_13f = *(undefined4 *)(local_1b8 + 0x29);
        uStack_138 = *(undefined4 *)(local_1b8 + 0x30);
        uStack_134 = *(undefined4 *)(local_1b8 + 0x34);
        uStack_130 = *(undefined4 *)(local_1b8 + 0x38);
        uStack_12c = *(undefined4 *)(local_1b8 + 0x3c);
        cStack_147 = (char)uVar10;
        uStack_146 = (undefined2)((uint)uVar10 >> 8);
        uStack_144._1_3_ = (undefined3)*(undefined4 *)(local_1b8 + 0x25);
        uStack_144 = CONCAT31(uStack_144._1_3_,(char)((uint)uVar10 >> 0x18));
        uStack_140 = (undefined1)((uint)*(undefined4 *)(local_1b8 + 0x25) >> 0x18);
        uStack_13b = (undefined2)*(undefined4 *)(local_1b8 + 0x2d);
        uStack_139 = (undefined1)((uint)*(undefined4 *)(local_1b8 + 0x2d) >> 0x10);
        local_148 = local_1b8[0x20];
        uVar10 = <bool_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::
                 <serde_json[dc3825464c436029]::value::Value>(&local_1d8,&local_148);
        if (local_1d8 == '\0') {
          local_1ac = local_1d7 & 0xff;
          goto LAB_005ff664;
        }
LAB_005ff6c2:
        lVar4 = CONCAT17(uStack_1c9,CONCAT25(uStack_1cb,CONCAT41(uStack_1cf,uStack_1d3._3_1_)));
LAB_005ff6c7:
        param_1[1] = lVar4;
        *param_1 = -1;
        lVar5 = local_1f0;
        lVar4 = local_1f8;
LAB_005ff6e1:
        if (0 < lVar4) {
          uVar10 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
        }
        goto LAB_005ff229;
      }
      local_1f8 = -1;
LAB_005ff3f7:
      local_1ac = 0;
      local_1dc = 0;
      lVar5 = local_200;
LAB_005ff3ff:
      local_200 = -1;
      lVar7 = -1;
LAB_005ff406:
      uVar10 = <&mut_serde_json[dc3825464c436029]::value::de::SeqDeserializer_as_serde_core[48776c27239fa21f]::de::SeqAccess>
               ::next_element::
               <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode>>
                         (&local_148,&local_178);
      if (local_148 == '\x01') {
LAB_005ff45a:
        lVar6 = CONCAT17(uStack_139,CONCAT25(uStack_13b,CONCAT41(uStack_13f,uStack_140)));
LAB_005ff462:
        lVar5 = local_1f0;
        lVar4 = local_1f8;
        param_1[1] = lVar6;
        *param_1 = -1;
        if (0 < lVar7) {
          uVar10 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
        }
joined_r0x005ff9b9:
        if (0 < local_200) {
          uVar10 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
        }
        goto LAB_005ff6e1;
      }
      cVar9 = '\x02';
      if (cStack_147 != -1) {
        cVar9 = cStack_147;
      }
      uVar10 = <&mut_serde_json[dc3825464c436029]::value::de::SeqDeserializer_as_serde_core[48776c27239fa21f]::de::SeqAccess>
               ::next_element::<serde_json[dc3825464c436029]::value::Value>(&local_148,&local_178);
      if (local_148 == -2) goto LAB_005ff45a;
      uStack_180 = CONCAT13((undefined1)uStack_144,CONCAT21(uStack_146,cStack_147));
      uStack_17c = (undefined3)((uint)uStack_144 >> 8);
      lVar4 = CONCAT17(uStack_139,CONCAT25(uStack_13b,CONCAT41(uStack_13f,uStack_140)));
      local_68 = uStack_138;
      uStack_64 = uStack_134;
      uStack_60 = uStack_130;
      uStack_5c = uStack_12c;
      if (local_148 == -1) {
        lVar6 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                ::invalid_length(9,&PTR_DAT_0078ed08,&DAT_0078eb58);
        uVar10 = extraout_XMM0_Da_00;
        goto LAB_005ff462;
      }
      *(undefined4 *)((longlong)param_1 + 0x94) = uStack_144;
      *(undefined4 *)((longlong)param_1 + 0x91) = uStack_180;
      param_1[0x14] = CONCAT44(uStack_134,uStack_138);
      param_1[0x15] = CONCAT44(uStack_12c,uStack_130);
      param_1[6] = local_1f0;
      param_1[7] = local_1e8;
      param_1[8] = local_70;
      param_1[9] = local_1f8;
      param_1[10] = local_158;
      param_1[0xb] = local_78;
      param_1[0xc] = local_200;
      param_1[0xd] = local_1a8;
      param_1[0xe] = local_88;
      param_1[0xf] = lVar7;
      param_1[0x10] = (longlong)local_1b8;
      param_1[0x11] = (longlong)pcVar8;
      *(undefined4 *)(param_1 + 2) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_54;
      *(undefined4 *)(param_1 + 3) = uStack_50;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_4c;
      *(undefined4 *)(param_1 + 4) = (undefined4)local_48;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_48._4_4_;
      *(undefined4 *)(param_1 + 5) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_40._4_4_;
      *param_1 = local_150;
      param_1[1] = local_80;
      *(char *)(param_1 + 0x12) = local_148;
      param_1[0x13] = lVar4;
      *(char *)(param_1 + 0x16) = local_201;
      *(char *)((longlong)param_1 + 0xb1) = (char)local_1ac;
      *(char *)((longlong)param_1 + 0xb2) = (char)local_1dc;
      *(char *)((longlong)param_1 + 0xb3) = cVar9;
      (*(code *)PTR_memcpy_00799008)(lVar4,0xb8);
      if (local_160 != local_170) {
        lVar5 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                ::invalid_length(lVar5,&PTR_s_fewer_elements_in_array_0078eb48,&DAT_0078eb58);
        param_1[1] = lVar5;
        *param_1 = -1;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini_core[66f3c71560d70857]::protocol::Envelope>(&local_148);
      }
    }
  }
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_178);
  bVar1 = *param_2;
joined_r0x005ff1da:
  if ((bVar1 & 6) != 4) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(param_2);
  }
  return param_1;
}


