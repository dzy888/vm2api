// 0015e1b0 <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini[b21da2d71f2da7a3]::license::Term_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>

/* <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>
   as 
   serde_core[48776c27239fa21f]::de::EnumAccess>::variant_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini[b21da2d71f2da7a3]::license::Term
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>> */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
::variant_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini[b21da2d71f2da7a3]::license::Term_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
          (undefined1 *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_38;
  short *local_30;
  longlong local_28;
  
  uVar5 = *(ulonglong *)(param_2 + 0x20);
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 < uVar5) {
    do {
      uVar3 = uVar3 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar3);
      uVar6 = (ulonglong)bVar1;
      if (0x22 < uVar6) {
LAB_0015e344:
        if (bVar1 == 0x7d) {
          local_38 = 10;
        }
        else {
          local_38 = 0x11;
        }
        goto LAB_0015e334;
      }
      if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
        if (uVar6 != 0x22) goto LAB_0015e344;
        *(ulonglong *)(param_2 + 0x28) = uVar3;
        *(undefined8 *)(param_2 + 0x10) = 0;
        (*(code *)PTR_parse_str_00219c90)(-uVar5,param_2);
        if ((int)local_38 != 2) {
          if (local_28 == 2) {
            if (*local_30 == anon_c9247e0b0208fc9c8c019285c3882aec_15_llvm_5798562142159169407) {
              uVar2 = 0;
              uVar5 = *(ulonglong *)(param_2 + 0x20);
              uVar3 = *(ulonglong *)(param_2 + 0x28);
              if (uVar5 <= uVar3) break;
            }
            else {
              if (*local_30 == anon_c9247e0b0208fc9c8c019285c3882aec_16_llvm_5798562142159169407) {
                uVar2 = 1;
              }
              else {
                if (*local_30 == anon_c9247e0b0208fc9c8c019285c3882aec_17_llvm_5798562142159169407)
                {
                  uVar2 = 2;
                  uVar5 = *(ulonglong *)(param_2 + 0x20);
                  uVar3 = *(ulonglong *)(param_2 + 0x28);
                  if (uVar3 < uVar5) goto LAB_0015e2ce;
                  break;
                }
                uVar2 = 3;
                if (*local_30 != anon_c9247e0b0208fc9c8c019285c3882aec_18_llvm_5798562142159169407)
                goto LAB_0015e289;
              }
              uVar5 = *(ulonglong *)(param_2 + 0x20);
              uVar3 = *(ulonglong *)(param_2 + 0x28);
              if (uVar5 <= uVar3) break;
            }
LAB_0015e2ce:
            goto LAB_0015e2d7;
          }
LAB_0015e289:
          local_30 = (short *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                              ::unknown_variant(local_30,local_28,
                                                &
                                                anon_c9247e0b0208fc9c8c019285c3882aec_52_llvm_5798562142159169407
                                                ,4);
        }
        uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                          (local_30,param_2);
        goto LAB_0015e2a5;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3;
    } while (uVar3 != uVar5);
  }
  goto LAB_0015e32c;
  while( true ) {
    if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
      if (uVar6 == 0x3a) {
        *(ulonglong *)(param_2 + 0x28) = uVar3;
        *param_1 = uVar2;
        *(longlong *)(param_1 + 8) = param_2;
        return param_1;
      }
      goto LAB_0015e35d;
    }
    *(ulonglong *)(param_2 + 0x28) = uVar3;
    if (uVar3 == uVar5) break;
LAB_0015e2d7:
    uVar3 = uVar3 + 1;
    uVar6 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar3);
    if (0x3a < uVar6) {
LAB_0015e35d:
      local_38 = 6;
      goto LAB_0015e334;
    }
  }
LAB_0015e32c:
  local_38 = 3;
LAB_0015e334:
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_38);
LAB_0015e2a5:
  *(undefined8 *)(param_1 + 8) = uVar4;
  *param_1 = 0xff;
  return param_1;
}


