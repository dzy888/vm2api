// 0014bea0 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <core[c0acaeba6ab4c2e0]::marker::PhantomData<u8> as
   serde_core[48776c27239fa21f]::de::DeserializeSeed>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

void __rustcall
<core[c0acaeba6ab4c2e0]::marker::PhantomData<u8>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
::deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (undefined1 *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
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
LAB_0014bf23:
        if ((byte)(bVar1 - 0x30) < 10) {
          uVar4 = 1;
LAB_0014bf3a:
          <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::parse_integer(&local_20,param_2,uVar4);
          if (local_20 == -1) goto LAB_0014bf4f;
          if ((int)local_20 == 1) {
            if (local_18 < 0x100) {
LAB_0014bfb0:
              param_1[1] = (char)local_18;
              uVar2 = 0;
              goto LAB_0014bfb5;
            }
            local_38 = CONCAT71(local_38._1_7_,1);
          }
          else {
            if ((int)local_20 != 2) {
              local_30 = local_18;
              local_38 = CONCAT71(local_38._1_7_,3);
              uVar4 = (*(code *)PTR_invalid_type_00219c38)
                                (local_20,
                                 anon_aa8a284406637d3c026889b109c79dc6_14_llvm_9655133765307635171);
              goto LAB_0014bf72;
            }
            if (local_18 < 0x100) goto LAB_0014bfb0;
            local_38 = CONCAT71(local_38._1_7_,2);
          }
          local_30 = local_18;
          uVar4 = (*(code *)PTR_invalid_value_00219c98)(local_20,&DAT_00214f10);
        }
        else {
          uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_invalid_type(param_2,&local_39,&DAT_00214f10);
        }
LAB_0014bf72:
        uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                          (uVar4,param_2);
        *(undefined8 *)(param_1 + 8) = uVar4;
        uVar2 = 1;
LAB_0014bfb5:
        *param_1 = uVar2;
        return;
      }
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
        if (uVar5 != 0x2d) goto LAB_0014bf23;
        *(ulonglong *)(param_2 + 0x28) = uVar3;
        uVar4 = 0;
        goto LAB_0014bf3a;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3;
    } while (uVar3 != *(ulonglong *)(param_2 + 0x20));
  }
  local_38 = 5;
  local_18 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
             ::peek_error(param_2,&local_38);
LAB_0014bf4f:
  *(ulonglong *)(param_1 + 8) = local_18;
  *param_1 = 1;
  return;
}


