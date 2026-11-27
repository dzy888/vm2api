// 00420a70 <serde_core[48776c27239fa21f]::de::impls::BoolVisitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_bool::<serde_core[48776c27239fa21f]::de::impls::BoolVisitor>
    */

undefined1 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_bool::<serde_core[48776c27239fa21f]::de::impls::BoolVisitor>
          (undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_29;
  undefined8 local_28 [3];
  
  uVar4 = *(ulonglong *)(param_2 + 0x20);
  if (uVar4 <= *(ulonglong *)(param_2 + 0x28)) {
LAB_00420ac9:
    local_28[0] = 5;
    uVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(param_2,local_28);
LAB_00420bea:
    *(undefined8 *)(param_1 + 8) = uVar8;
    uVar6 = 1;
LAB_00420bf0:
    *param_1 = uVar6;
    return param_1;
  }
  lVar5 = *(longlong *)(param_2 + 0x18);
  lVar7 = *(ulonglong *)(param_2 + 0x28) + 5;
  while( true ) {
    bVar2 = *(byte *)(lVar5 + -5 + lVar7);
    if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) break;
    *(longlong *)(param_2 + 0x28) = lVar7 + -4;
    lVar1 = lVar7 - uVar4;
    lVar7 = lVar7 + 1;
    if (lVar1 == 4) goto LAB_00420ac9;
  }
  if (bVar2 == 0x66) {
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 4U;
    if (uVar4 <= lVar7 - 4U) goto LAB_00420bd1;
    cVar3 = *(char *)(lVar5 + -4 + lVar7);
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 3U;
    if (cVar3 == 'a') {
      if (uVar4 <= lVar7 - 3U) goto LAB_00420bd1;
      cVar3 = *(char *)(lVar5 + -3 + lVar7);
      *(ulonglong *)(param_2 + 0x28) = lVar7 - 2U;
      if (cVar3 == 'l') {
        if (uVar4 <= lVar7 - 2U) goto LAB_00420bd1;
        cVar3 = *(char *)(lVar5 + -2 + lVar7);
        *(ulonglong *)(param_2 + 0x28) = lVar7 - 1U;
        if (cVar3 == 's') {
          if (uVar4 <= lVar7 - 1U) goto LAB_00420bd1;
          cVar3 = *(char *)(lVar5 + -1 + lVar7);
          *(longlong *)(param_2 + 0x28) = lVar7;
          if (cVar3 == 'e') {
            uVar6 = 0;
            goto LAB_00420bca;
          }
        }
      }
    }
  }
  else {
    if (bVar2 != 0x74) {
      uVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_invalid_type(param_2,&local_29,&DAT_0078a460);
      uVar8 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
              <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                        (uVar8,param_2);
      goto LAB_00420bea;
    }
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 4U;
    if (uVar4 <= lVar7 - 4U) {
LAB_00420bd1:
      local_28[0] = 5;
      goto LAB_00420bda;
    }
    cVar3 = *(char *)(lVar5 + -4 + lVar7);
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 3U;
    if (cVar3 != 'r') goto LAB_00420bfd;
    if (uVar4 <= lVar7 - 3U) goto LAB_00420bd1;
    cVar3 = *(char *)(lVar5 + -3 + lVar7);
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 2U;
    if (cVar3 == 'u') {
      if (uVar4 <= lVar7 - 2U) goto LAB_00420bd1;
      cVar3 = *(char *)(lVar5 + -2 + lVar7);
      *(longlong *)(param_2 + 0x28) = lVar7 + -1;
      uVar6 = 1;
      if (cVar3 == 'e') {
LAB_00420bca:
        param_1[1] = uVar6;
        uVar6 = 0;
        goto LAB_00420bf0;
      }
    }
  }
LAB_00420bfd:
  local_28[0] = 9;
LAB_00420bda:
  uVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::error(param_2,local_28);
  goto LAB_00420bea;
}


