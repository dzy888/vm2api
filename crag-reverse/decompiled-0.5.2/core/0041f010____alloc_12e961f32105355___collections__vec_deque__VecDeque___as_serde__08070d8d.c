// 0041f010 <<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::SeqVisitor<alloc[12e961f32105355]::string::String>>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_seq::<<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_>
   as 
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::SeqVisitor<alloc[12e961f32105355]::string::String>>
    */

ulonglong * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_seq::
<<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::SeqVisitor<alloc[12e961f32105355]::string::String>>
          (ulonglong *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined1 local_b9;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  ulonglong *local_90;
  ulonglong local_88;
  ulonglong local_80;
  char local_78;
  char cStack_77;
  undefined6 uStack_76;
  ulonglong local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  undefined1 local_50;
  ulonglong local_48;
  ulonglong uStack_40;
  
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  if (uVar5 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar5 = uVar5 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar5);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 != 0x5b) {
          uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_invalid_type(param_2,&local_b9,&DAT_0078a1e0);
          goto LAB_0041f3d4;
        }
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 != '\0') {
          *(ulonglong *)(param_2 + 0x28) = uVar5;
          local_50 = 1;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          local_b0 = 8;
          local_98 = param_2;
          local_90 = param_1;
          local_58 = param_2;
          goto LAB_0041f119;
        }
        local_b8 = 0x18;
        goto LAB_0041f078;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5;
    } while (uVar5 != *(ulonglong *)(param_2 + 0x20));
  }
  local_b8 = 5;
LAB_0041f078:
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_b8);
  goto LAB_0041f3df;
LAB_0041f119:
  uVar14 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
           ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                     (&local_78);
  if (local_78 == '\x01') goto LAB_0041f176;
  if (cStack_77 != '\x01') {
    local_48 = local_a8;
    uStack_40 = uStack_a0;
    uVar6 = local_b8;
    uVar5 = local_b0;
    goto LAB_0041f254;
  }
  uVar14 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_78);
  uVar4 = local_68;
  uVar5 = local_70;
  lVar11 = CONCAT62(uStack_76,CONCAT11(cStack_77,local_78));
  if (lVar11 == -1) goto LAB_0041f17b;
  if (uStack_a0 == local_b8) {
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
    ::grow(&local_b8);
  }
  uVar6 = local_b8;
  if (uStack_a0 + local_a8 < local_b8) {
    uVar6 = 0;
  }
  lVar7 = (uStack_a0 + local_a8) - uVar6;
  *(longlong *)(local_b0 + lVar7 * 0x18) = lVar11;
  *(ulonglong *)(local_b0 + 8 + lVar7 * 0x18) = uVar5;
  *(undefined8 *)(local_b0 + 0x10 + lVar7 * 0x18) = uVar4;
  uStack_a0 = uStack_a0 + 1;
  goto LAB_0041f119;
LAB_0041f176:
  uVar5 = local_70;
LAB_0041f17b:
  uVar6 = local_b0;
  puVar3 = PTR___rust_dealloc_00798fc8;
  if (uStack_a0 != 0) {
    uVar8 = local_b8;
    if (local_a8 < local_b8) {
      uVar8 = 0;
    }
    lVar11 = local_a8 - uVar8;
    local_88 = local_b8 - lVar11;
    local_80 = uStack_a0;
    lVar7 = uStack_a0 - local_88;
    bVar13 = lVar7 != 0;
    if (uStack_a0 < local_88) {
      lVar7 = 0;
    }
    uVar9 = lVar11 + uStack_a0;
    if (uStack_a0 >= local_88 && bVar13) {
      uVar9 = local_b8;
    }
    lVar11 = uVar9 - lVar11;
    if (lVar11 != 0) {
      lVar12 = local_a8 * 0x18 + uVar8 * -0x18 + local_b0 + 8;
      do {
        if (*(longlong *)(lVar12 + -8) != 0) {
          uVar14 = (*(code *)puVar3)(uVar14,1);
        }
        lVar12 = lVar12 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    puVar3 = PTR___rust_dealloc_00798fc8;
    if (local_88 < local_80) {
      lVar11 = uVar6 + 8;
      do {
        if (*(longlong *)(lVar11 + -8) != 0) {
          uVar14 = (*(code *)puVar3)(uVar14,1);
        }
        lVar11 = lVar11 + 0x18;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  uVar6 = 0xffffffffffffffff;
  if (local_b8 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,8);
  }
LAB_0041f254:
  param_1 = local_90;
  param_2 = local_98;
  *(char *)(local_98 + 0x38) = *(char *)(local_98 + 0x38) + '\x01';
  local_a8 = local_48;
  uStack_a0 = uStack_40;
  local_b8 = uVar6;
  local_b0 = uVar5;
  uVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::end_seq(local_98);
  puVar3 = PTR___rust_dealloc_00798fc8;
  if (uVar6 == 0xffffffffffffffff) {
    if (uVar8 != 0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(uVar8);
    }
  }
  else {
    if (uVar8 == 0) {
      param_1[2] = local_a8;
      param_1[3] = uStack_a0;
      *param_1 = uVar6;
      param_1[1] = uVar5;
      return param_1;
    }
    uVar14 = extraout_XMM0_Da;
    if (uStack_a0 != 0) {
      uVar9 = uVar6;
      if (local_a8 < uVar6) {
        uVar9 = 0;
      }
      lVar11 = local_a8 - uVar9;
      local_60 = uVar6 - lVar11;
      local_88 = uStack_a0;
      lVar7 = uStack_a0 - local_60;
      bVar13 = lVar7 != 0;
      if (uStack_a0 < local_60) {
        lVar7 = 0;
      }
      uVar10 = lVar11 + uStack_a0;
      if (uStack_a0 >= local_60 && bVar13) {
        uVar10 = uVar6;
      }
      lVar11 = uVar10 - lVar11;
      local_80 = uVar8;
      if (lVar11 != 0) {
        lVar12 = local_a8 * 0x18 + uVar9 * -0x18 + uVar5 + 8;
        do {
          if (*(longlong *)(lVar12 + -8) != 0) {
            uVar14 = (*(code *)puVar3)(uVar14,1);
          }
          lVar12 = lVar12 + 0x18;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar8 = local_80;
      puVar3 = PTR___rust_dealloc_00798fc8;
      if (local_60 < local_88) {
        lVar11 = uVar5 + 8;
        do {
          if (*(longlong *)(lVar11 + -8) != 0) {
            uVar14 = (*(code *)puVar3)(uVar14,1);
          }
          lVar11 = lVar11 + 0x18;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    if (uVar6 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,8);
    }
    uVar5 = uVar8;
    param_2 = local_98;
    param_1 = local_90;
  }
LAB_0041f3d4:
  uVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (uVar5,param_2);
LAB_0041f3df:
  param_1[1] = uVar5;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


