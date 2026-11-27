// 00058f80 <<i32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_i32::<<i32 as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor> */

undefined4 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_i32::
<<i32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
          (undefined4 *param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 local_39;
  undefined8 local_38;
  ulonglong local_30;
  longlong local_20;
  ulonglong local_18;
  
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar3 = uVar3 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar3);
      uVar5 = (ulonglong)bVar1;
      if (0x2d < uVar5) {
LAB_00059003:
        if ((byte)(bVar1 - 0x30) < 10) {
          uVar4 = 1;
LAB_0005901a:
          <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::parse_integer(&local_20,param_2,uVar4);
          if (local_20 == -1) goto LAB_0005902f;
          if ((int)local_20 == 1) {
            uVar3 = local_18 >> 0x1f;
            if (uVar3 != 0) {
              local_38 = CONCAT71(local_38._1_7_,1);
LAB_000590d0:
              local_30 = local_18;
              uVar4 = (*(code *)PTR_invalid_value_000c3b28)(uVar3,&DAT_000c00b8);
              goto LAB_00059058;
            }
          }
          else {
            if ((int)local_20 != 2) {
              local_30 = local_18;
              local_38 = CONCAT71(local_38._1_7_,3);
              uVar4 = (*(code *)PTR_invalid_type_000c3b18)
                                (local_20,
                                 anon_9fa032a1d30ceca52b5a2d5222eaa356_6_llvm_10768355879922845107);
              goto LAB_00059058;
            }
            uVar3 = (ulonglong)(int)local_18;
            if (uVar3 != local_18) {
              local_38 = CONCAT71(local_38._1_7_,2);
              goto LAB_000590d0;
            }
          }
          param_1[1] = (int)local_18;
          uVar2 = 0;
        }
        else {
          uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_invalid_type(param_2,&local_39,&DAT_000c00b8);
LAB_00059058:
          uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                  <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                            (uVar4,param_2);
          *(undefined8 *)(param_1 + 2) = uVar4;
          uVar2 = 1;
        }
        *param_1 = uVar2;
        return param_1;
      }
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
        if (uVar5 != 0x2d) goto LAB_00059003;
        *(ulonglong *)(param_2 + 0x28) = uVar3;
        uVar4 = 0;
        goto LAB_0005901a;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3;
    } while (uVar3 != *(ulonglong *)(param_2 + 0x20));
  }
  local_38 = 5;
  local_18 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
             ::peek_error(param_2,&local_38);
LAB_0005902f:
  *(ulonglong *)(param_1 + 2) = local_18;
  *param_1 = 1;
  return param_1;
}


